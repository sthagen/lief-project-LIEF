/* Copyright 2017 - 2023 R. Thomas
 * Copyright 2017 - 2023 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <string>
#include <sstream>
#include <nanobind/stl/string.h>

#include "LIEF/MachO/Relocation.hpp"
#include "LIEF/MachO/Symbol.hpp"
#include "LIEF/MachO/Section.hpp"
#include "LIEF/MachO/SegmentCommand.hpp"

#include "MachO/pyMachO.hpp"

namespace LIEF::MachO::py {

template<>
void create<Relocation>(nb::module_& m) {

  nb::class_<Relocation, LIEF::Relocation>(m, "Relocation",
      R"delim(
      It extends the LIEF :class:`lief.Relocation` abstract class and it is sub-classed by

      1. :class:`~lief.MachO.RelocationObject`
      2. :class:`~lief.MachO.RelocationDyld`
      )delim"_doc)

    .def_prop_rw("address",
        static_cast<uint64_t(MachO::Relocation::*)() const>(&MachO::Relocation::address),
        static_cast<void(MachO::Relocation::*)(uint64_t)>(&MachO::Relocation::address),
        R"delim(
        For :attr:`~lief.MachO.FILE_TYPES.OBJECT` or (:attr:`~lief.MachO.Relocation.origin` is :attr:`~lief.MachO.RELOCATION_ORIGINS.RELOC_TABLE`) this is an "
        offset from the start of the :class:`~lief.MachO.Section`
        to the item containing the address requiring relocation.

        For :attr:`~lief.MachO.FILE_TYPES.EXECUTE` / :attr:`~lief.MachO.FILE_TYPES.DYLIB` or
        (:attr:`~lief.MachO.Relocation.origin` is :attr:`~lief.MachO.RELOCATION_ORIGINS.DYLDINFO`)
        this is a :attr:`~lief.MachO.SegmentCommand.virtual_address`.
        )delim"_doc)

    .def_prop_rw("pc_relative",
        nb::overload_cast<>(&Relocation::is_pc_relative, nb::const_),
        nb::overload_cast<bool>(&Relocation::pc_relative),
        R"delim(
        Indicates whether the item containing the address to be
        relocated is part of a CPU instruction that uses PC-relative addressing.

        For addresses contained in PC-relative instructions, the CPU adds the address of
        the instruction to the address contained in the instruction.
        )delim"_doc)

    .def_prop_rw("type",
        [] (const Relocation& reloc) -> nb::object {
          if (reloc.origin() == RELOCATION_ORIGINS::ORIGIN_DYLDINFO) {
            return nb::cast(REBASE_TYPES(reloc.type()));
          }

          if (reloc.origin() == RELOCATION_ORIGINS::ORIGIN_RELOC_TABLE) {
            switch (reloc.architecture()) {
              case CPU_TYPES::CPU_TYPE_X86:
                return nb::cast(X86_RELOCATION(reloc.type()));

              case CPU_TYPES::CPU_TYPE_X86_64:
                return nb::cast(X86_64_RELOCATION(reloc.type()));

              case CPU_TYPES::CPU_TYPE_ARM:
                return nb::cast(ARM_RELOCATION(reloc.type()));

              case CPU_TYPES::CPU_TYPE_ARM64:
                return nb::cast(ARM64_RELOCATION(reloc.type()));

              case CPU_TYPES::CPU_TYPE_POWERPC:
                return nb::cast(PPC_RELOCATION(reloc.type()));

              default:
                return nb::cast(reloc.type());
            }
          }

          return nb::cast(reloc.type());
        },
        nb::overload_cast<uint8_t>(&Relocation::type),
        R"delim(
        Type of the relocation according to the :attr:`~lief.MachO.Relocation.architecture` and/or :attr:`~lief.MachO.Relocation.origin`

        If :attr:`~lief.MachO.Relocation.origin` is :attr:`~lief.MachO.RELOCATION_ORIGINS.RELOC_TABLE`:

        See:

          * :class:`lief.MachO.X86_RELOCATION`
          * :class:`lief.MachO.X86_64_RELOCATION`
          * :class:`lief.MachO.PPC_RELOCATION`
          * :class:`lief.MachO.ARM_RELOCATION`
          * :class:`lief.MachO.ARM64_RELOCATION`

        If :attr:`~lief.MachO.Relocation.origin` is :attr:`~lief.MachO.RELOCATION_ORIGINS.DYLDINFO`,
        the value is associated with :class:`~lief.MachO.REBASE_TYPES`.
        )delim"_doc)

    .def_prop_ro("architecture",
        &Relocation::architecture,
        "" RST_CLASS_REF(lief.MachO.CPU_TYPES) " of the relocation"_doc)

    .def_prop_ro("has_symbol",
        &Relocation::has_symbol,
        "``True`` if the relocation has a " RST_CLASS_REF(lief.MachO.Symbol) " associated with"_doc)

    .def_prop_ro("symbol",
        nb::overload_cast<>(&Relocation::symbol),
        "" RST_CLASS_REF(lief.MachO.Symbol) " associated with the relocation if any, or None"_doc,
        nb::rv_policy::reference_internal)

    .def_prop_ro("has_section",
        &Relocation::has_section,
        "``True`` if the relocation has a " RST_CLASS_REF(lief.MachO.Section) " associated with"_doc)

    .def_prop_ro("section",
        nb::overload_cast<>(&Relocation::section),
        "" RST_CLASS_REF(lief.MachO.Section) " associated with the relocation if any, or None"_doc,
        nb::rv_policy::reference_internal)


    .def_prop_ro("origin", &Relocation::origin,
        R"delim(
        :class:`~lief.MachO.RELOCATION_ORIGINS` of the relocation

        * For :attr:`~lief.MachO.FILE_TYPES.OBJECT` file it should be :attr:`~lief.MachO.RELOCATION_ORIGINS.RELOC_TABLE`
        * For :attr:`~lief.MachO.FILE_TYPES.EXECUTE` or :attr:`~lief.MachO.FILE_TYPES.DYLIB` it should be :attr:`~lief.MachO.RELOCATION_ORIGINS.DYLDINFO`")
        )delim"_doc)

    .def_prop_ro("has_segment", &Relocation::has_segment,
        "``True`` if the relocation has a " RST_CLASS_REF(lief.MachO.SegmentCommand) " associated with"_doc)

    .def_prop_ro("segment",
        nb::overload_cast<>(&Relocation::segment),
        "" RST_CLASS_REF(lief.MachO.SegmentCommand) " associated with the relocation if any, or None"_doc,
        nb::rv_policy::reference_internal)

    LIEF_DEFAULT_STR(Relocation);
}
}
