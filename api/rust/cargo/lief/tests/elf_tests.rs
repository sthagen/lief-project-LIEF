mod utils;
use lief::elf::dynamic;
use lief::elf::dynamic::DynamicEntry;
use lief::elf::note::NoteBase;
use lief::elf::relocation;
use lief::elf::segment;
use lief::elf::Notes;
use lief::generic::Binary as GenericBinary;
use lief::generic::Section;
use lief::generic::Symbol;
use lief::Binary;

fn explore_elf(elf: &lief::elf::Binary) {
    format!("{elf:?}");
    format!("{} {} {}", elf.entrypoint(), elf.imagebase(), elf.is_pie());

    if let Some(sysv) = elf.sysv_hash() {
        format!("{sysv:?}");
    }

    if let Some(gnu) = elf.gnu_hash() {
        format!("{gnu:?}");
    }

    for section in elf.sections() {
        format!("Section: {section:?}: {section}");
        format!("Name: {}", section.name());
        format!("{}", section.content().len());
        format!("{size}", size = section.size());
        format!(
            "{virtual_address}",
            virtual_address = section.virtual_address()
        );
        format!("{offset}", offset = section.offset());
        if section.name() == ".text" && section.size() > 0 {
            assert!(!section.content().is_empty())
        }
    }

    for segment in elf.segments() {
        format!("{segment:?}: {segment}");
        if segment.p_type() == segment::Type::PHDR {
            assert!(!segment.content().is_empty())
        }
    }

    for sym in elf.exported_symbols() {
        format!("{sym:?}");
    }

    for sym in elf.imported_symbols() {
        format!("{sym:?}");
    }

    for sym in elf.symtab_symbols() {
        format!("{sym:?}");
    }

    for version in elf.symbols_version() {
        format!("{version:?}");
    }

    for note in elf.notes() {
        format!("{note:?}");
        #[allow(irrefutable_let_patterns)]
        if let Notes::Generic(generic) = note {
            assert!(!generic.description().is_empty());
            assert!(!generic.original_type() != 0);
        }
    }

    for reloc in elf.pltgot_relocations() {
        format!("{reloc:?}");
    }

    for reloc in elf.dynamic_relocations() {
        if reloc.encoding() == relocation::Encoding::REL {
            assert!(reloc.is_rel());
        }

        if reloc.encoding() == relocation::Encoding::RELA {
            assert!(reloc.is_rela());
        }
        format!("{reloc:?}");
    }

    for reloc in elf.object_relocations() {
        format!("{reloc:?}");
    }

    for reloc in elf.relocations() {
        format!("{reloc:?}");
    }

    for sym in elf.dynamic_symbols() {
        format!("{sym:?}: {sym}");
        format!("{}: {} ({})", sym.name(), sym.value(), sym.size());
    }

    for sym_ver in elf.symbols_version() {
        format!("{sym_ver:?}");
    }

    for sym_def in elf.symbols_version_definition() {
        format!("{sym_def:?}");
    }

    for sym_req in elf.symbols_version_requirement() {
        format!("{sym_req:?}");
    }

    for entry in elf.dynamic_entries() {
        format!("{entry:?}");

        match entry {
            dynamic::Entries::Generic(gen) => {
                format!("{:?}: {}", gen.tag(), gen.value());
            }
            dynamic::Entries::Library(lib) => {
                format!("{:?}: {} {}", lib.tag(), lib.value(), lib.name());
            }
            dynamic::Entries::Array(array) => {
                format!("{:?}: {} {:?}", array.tag(), array.value(), array.array());
            }
            dynamic::Entries::Rpath(rpath) => {
                format!("{:?}: {}", rpath.tag(), rpath.rpath());
            }
            dynamic::Entries::RunPath(runpath) => {
                format!("{:?}: {}", runpath.tag(), runpath.runpath());
            }
            dynamic::Entries::SharedObject(shared) => {
                format!("{:?}: {}", shared.tag(), shared.name());
            }
        }
    }
}

fn test_with(bin_name: &str) {
    let path = utils::get_elf_sample(bin_name).unwrap();
    let path_str = path.to_str();
    if let Some(Binary::ELF(bin)) = Binary::parse(path_str.unwrap()) {
        explore_elf(&bin);
    }

    // Test Read + Seek interface
    let mut file = std::fs::File::open(path).expect("Can't open the file");
    let binary = Binary::from(&mut file);
    assert!(matches!(binary, Some(Binary::ELF(_))));
}

#[test]
fn test_api() {
    test_with("elf_reader.mips.elf");
    test_with("issue_975_aarch64.o");
    test_with("ELF_Core_issue_808.core");
    test_with("ELF64_x86-64_library_libfreebl3.so");
    test_with("ELF64_x86-64_binary_etterlog.bin");
    test_with("ELF64_x86-64_binary_systemd-resolve.bin");
    test_with("art_reader.loongarch");
}
