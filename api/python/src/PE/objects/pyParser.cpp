
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
#include "PE/pyPE.hpp"

#include <string>
#include <memory>
#include <nanobind/stl/string.h>
#include <nanobind/stl/vector.h>
#include <nanobind/stl/unique_ptr.h>


#include "pyIOStream.hpp"
#include "LIEF/logging.hpp"

#include "LIEF/PE/Parser.hpp"
#include "LIEF/PE/Binary.hpp"

namespace LIEF::PE::py {

template<>
void create<Parser>(nb::module_& m) {
  using namespace LIEF::py;

  m.def("parse",
    static_cast<std::unique_ptr<Binary>(*)(const std::string&, const ParserConfig&)>(&Parser::parse),
    "Parse the PE binary from the given **file path** and return a " RST_CLASS_REF(lief.PE.Binary) " object"_doc,
    "filename"_a, "config"_a = ParserConfig::all(),
    nb::rv_policy::take_ownership);

  m.def("parse",
      static_cast<std::unique_ptr<Binary>(*)(std::vector<uint8_t>, const ParserConfig&)>(&Parser::parse),
    "Parse the PE binary from the given **list of bytes** and return a :class:`lief.PE.Binary` object"_doc,
    "raw"_a, "config"_a = ParserConfig::all(),
    nb::rv_policy::take_ownership);

  m.def("parse",
    [] (nb::object byteio, const ParserConfig&) -> nb::object {
      if (auto stream = PyIOStream::from_python(std::move(byteio))) {
        auto ptr = std::make_unique<PyIOStream>(std::move(*stream));
        return nb::cast(PE::Parser::parse(std::move(ptr)));
      }
      logging::log(logging::LOG_ERR, "Can't create a LIEF stream interface over the provided io");
      return nb::none();
    },
    "Parse the PE binary from the given Python IO interface and return a :class:`lief.PE.Binary` object"_doc,
    "io"_a, "config"_a = ParserConfig::all(),
    "parse(io: io.IOBase, config: lief.PE.ParserConfig = ...) -> lief.PE.Binary | None"_p,
    nb::rv_policy::take_ownership);
}

}
