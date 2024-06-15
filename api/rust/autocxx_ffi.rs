use autocxx::prelude::*;

include_cpp! {
    #include "LIEF/rust/LIEF.hpp"
    #include "LIEF/rust/Stream.hpp"
    name!(autocxx_ffi)

    generate_pod!("Span")
    block_constructors!("Span")

    generate!("RustStream")
    block_constructors!("RustStream")

    // -------------------------------------------------------------------------
    // Logging
    // -------------------------------------------------------------------------
    generate!("LIEF_Logging")
    block_constructors!("LIEF_Logging")

    // -------------------------------------------------------------------------
    // Abstract
    // -------------------------------------------------------------------------
    generate!("AbstractBinary")
    block_constructors!("AbstractBinary")

    generate!("AbstractSymbol")
    block_constructors!("AbstractSymbol")

    generate!("AbstractSection")
    block_constructors!("AbstractSection")

    generate!("AbstractRelocation")
    block_constructors!("AbstractRelocation")

    // -------------------------------------------------------------------------
    // ELF
    // -------------------------------------------------------------------------
    generate!("ELF_Binary")
    block_constructors!("ELF_Binary")
    generate!("ELF_Binary_it_segments")
    block_constructors!("ELF_Binary_it_segments")
    generate!("ELF_Binary_it_sections")
    block_constructors!("ELF_Binary_it_sections")
    generate!("ELF_Binary_it_dynamic_entries")
    block_constructors!("ELF_Binary_it_dynamic_entries")
    generate!("ELF_Binary_it_dynamic_symbols")
    block_constructors!("ELF_Binary_it_dynamic_symbols")
    generate!("ELF_Binary_it_exported_symbols")
    block_constructors!("ELF_Binary_it_exported_symbols")
    generate!("ELF_Binary_it_imported_symbols")
    block_constructors!("ELF_Binary_it_imported_symbols")
    generate!("ELF_Binary_it_symtab_symbols")
    block_constructors!("ELF_Binary_it_symtab_symbols")
    generate!("ELF_Binary_it_notes")
    block_constructors!("ELF_Binary_it_notes")
    generate!("ELF_Binary_it_pltgot_relocations")
    block_constructors!("ELF_Binary_it_pltgot_relocations")
    generate!("ELF_Binary_it_dynamic_relocations")
    block_constructors!("ELF_Binary_it_dynamic_relocations")
    generate!("ELF_Binary_it_object_relocations")
    block_constructors!("ELF_Binary_it_object_relocations")
    generate!("ELF_Binary_it_symbols_version")
    block_constructors!("ELF_Binary_it_symbols_version")
    generate!("ELF_Binary_it_symbols_version_requirement")
    block_constructors!("ELF_Binary_it_symbols_version_requirement")
    generate!("ELF_Binary_it_symbols_version_definition")
    block_constructors!("ELF_Binary_it_symbols_version_definition")
    generate!("ELF_Binary_it_relocations")
    block_constructors!("ELF_Binary_it_relocations")
    generate!("ELF_DynamicEntry")
    block_constructors!("ELF_DynamicEntry")
    generate!("ELF_DynamicEntryArray")
    block_constructors!("ELF_DynamicEntryArray")
    generate!("ELF_DynamicEntryFlags")
    block_constructors!("ELF_DynamicEntryFlags")
    generate!("ELF_DynamicEntryLibrary")
    block_constructors!("ELF_DynamicEntryLibrary")
    generate!("ELF_DynamicEntryRpath")
    block_constructors!("ELF_DynamicEntryRpath")
    generate!("ELF_DynamicEntryRunPath")
    block_constructors!("ELF_DynamicEntryRunPath")
    generate!("ELF_DynamicSharedObject")
    block_constructors!("ELF_DynamicSharedObject")
    generate!("ELF_GnuHash")
    block_constructors!("ELF_GnuHash")
    generate!("ELF_Header")
    block_constructors!("ELF_Header")
    generate!("ELF_Relocation")
    block_constructors!("ELF_Relocation")
    generate!("ELF_Section")
    block_constructors!("ELF_Section")
    generate!("ELF_Segment")
    block_constructors!("ELF_Segment")
    generate!("ELF_Symbol")
    block_constructors!("ELF_Symbol")
    generate!("ELF_SymbolVersion")
    block_constructors!("ELF_SymbolVersion")
    generate!("ELF_SymbolVersionAux")
    block_constructors!("ELF_SymbolVersionAux")
    generate!("ELF_SymbolVersionAuxRequirement")
    block_constructors!("ELF_SymbolVersionAuxRequirement")
    generate!("ELF_SymbolVersionDefinition")
    block_constructors!("ELF_SymbolVersionDefinition")
    generate!("ELF_SymbolVersionDefinition_it_auxiliary_symbols")
    block_constructors!("ELF_SymbolVersionDefinition_it_auxiliary_symbols")
    generate!("ELF_SymbolVersionRequirement")
    block_constructors!("ELF_SymbolVersionRequirement")
    generate!("ELF_SymbolVersionRequirement_it_auxiliary_symbols")
    block_constructors!("ELF_SymbolVersionRequirement_it_auxiliary_symbols")
    generate!("ELF_SysvHash")
    block_constructors!("ELF_SysvHash")
    generate!("ELF_Utils")
    block_constructors!("ELF_Utils")
    generate!("ELF_Note")
    block_constructors!("ELF_Note")

    // -------------------------------------------------------------------------
    // PE
    // -------------------------------------------------------------------------
    generate!("PE_Binary")
    block_constructors!("PE_Binary")
    generate!("PE_Binary_it_debug")
    block_constructors!("PE_Binary_it_debug")
    generate!("PE_Binary_it_sections")
    block_constructors!("PE_Binary_it_sections")
    generate!("PE_Binary_it_relocations")
    block_constructors!("PE_Binary_it_relocations")
    generate!("PE_Binary_it_imports")
    block_constructors!("PE_Binary_it_imports")
    generate!("PE_Binary_it_delay_imports")
    block_constructors!("PE_Binary_it_delay_imports")
    generate!("PE_Binary_it_data_directories")
    block_constructors!("PE_Binary_it_data_directories")
    generate!("PE_Binary_it_signatures")
    block_constructors!("PE_Binary_it_signatures")

    generate!("PE_CodeIntegrity")
    block_constructors!("PE_CodeIntegrity")
    generate!("PE_ContentInfo")
    block_constructors!("PE_ContentInfo")
    generate!("PE_ContentInfo_Content")
    block_constructors!("PE_ContentInfo_Content")
    generate!("PE_DataDirectory")
    block_constructors!("PE_DataDirectory")
    generate!("PE_DelayImport")
    block_constructors!("PE_DelayImport")
    generate!("PE_DelayImport_it_entries")
    block_constructors!("PE_DelayImport_it_entries")
    generate!("PE_DelayImportEntry")
    block_constructors!("PE_DelayImportEntry")
    generate!("PE_DosHeader")
    block_constructors!("PE_DosHeader")
    generate!("PE_Export")
    block_constructors!("PE_Export")
    generate!("PE_Export_it_entries")
    block_constructors!("PE_Export_it_entries")
    generate!("PE_ExportEntry")
    block_constructors!("PE_ExportEntry")
    generate!("PE_Header")
    block_constructors!("PE_Header")
    generate!("PE_Import")
    block_constructors!("PE_Import")
    generate!("PE_Import_it_entries")
    block_constructors!("PE_Import_it_entries")
    generate!("PE_ImportEntry")
    block_constructors!("PE_ImportEntry")
    generate!("PE_OptionalHeader")
    block_constructors!("PE_OptionalHeader")
    generate!("PE_Relocation")
    block_constructors!("PE_Relocation")
    generate!("PE_Relocation_it_entries")
    block_constructors!("PE_Relocation_it_entries")
    generate!("PE_RelocationEntry")
    block_constructors!("PE_RelocationEntry")
    generate!("PE_ResourceData")
    block_constructors!("PE_ResourceData")
    generate!("PE_ResourceDirectory")
    block_constructors!("PE_ResourceDirectory")
    generate!("PE_ResourceNode")
    block_constructors!("PE_ResourceNode")
    generate!("PE_ResourceNode_it_childs")
    block_constructors!("PE_ResourceNode_it_childs")
    generate!("PE_ResourcesManager")
    block_constructors!("PE_ResourcesManager")
    generate!("PE_RichEntry")
    block_constructors!("PE_RichEntry")
    generate!("PE_RichHeader")
    block_constructors!("PE_RichHeader")
    generate!("PE_RichHeader_it_entries")
    block_constructors!("PE_RichHeader_it_entries")
    generate!("PE_Section")
    block_constructors!("PE_Section")
    generate!("PE_SpcIndirectData")
    block_constructors!("PE_SpcIndirectData")
    generate!("PE_GenericContent")
    block_constructors!("PE_GenericContent")

    generate!("PE_Debug")
    block_constructors!("PE_Debug")
    generate!("PE_CodeView")
    block_constructors!("PE_CodeView")
    generate!("PE_CodeViewPDB")
    block_constructors!("PE_CodeViewPDB")
    generate!("PE_Pogo")
    block_constructors!("PE_Pogo")
    generate!("PE_Pogo_it_entries")
    block_constructors!("PE_Pogo_it_entries")
    generate!("PE_PogoEntry")
    block_constructors!("PE_PogoEntry")
    generate!("PE_Repro")
    block_constructors!("PE_Repro")
    generate!("PE_Signature")
    block_constructors!("PE_Signature")
    generate!("PE_Signature_it_signers")
    block_constructors!("PE_Signature_it_signers")
    generate!("PE_Signature_it_certificates")
    block_constructors!("PE_Signature_it_certificates")
    generate!("PE_SignerInfo")
    block_constructors!("PE_SignerInfo")
    generate!("PE_SignerInfo_it_authenticated_attributes")
    block_constructors!("PE_SignerInfo_it_authenticated_attributes")
    generate!("PE_SignerInfo_it_unauthenticated_attributes")
    block_constructors!("PE_SignerInfo_it_unauthenticated_attributes")
    generate!("PE_TLS")
    block_constructors!("PE_TLS")
    generate!("PE_Utils")
    block_constructors!("PE_Utils")
    generate!("PE_x509")
    block_constructors!("PE_x509")
    generate!("PE_RsaInfo")
    block_constructors!("PE_RsaInfo")
    generate!("PE_Attribute")
    block_constructors!("PE_Attribute")
    generate!("PE_ContentType")
    block_constructors!("PE_ContentType")
    generate!("PE_GenericType")
    block_constructors!("PE_GenericType")
    generate!("PE_MsSpcNestedSignature")
    block_constructors!("PE_MsSpcNestedSignature")
    generate!("PE_MsSpcStatementType")
    block_constructors!("PE_MsSpcStatementType")
    generate!("PE_PKCS9AtSequenceNumber")
    block_constructors!("PE_PKCS9AtSequenceNumber")
    generate!("PE_PKCS9CounterSignature")
    block_constructors!("PE_PKCS9CounterSignature")
    generate!("PE_PKCS9MessageDigest")
    block_constructors!("PE_PKCS9MessageDigest")
    generate!("PE_PKCS9SigningTime")
    block_constructors!("PE_PKCS9SigningTime")
    generate!("PE_SpcSpOpusInfo")
    block_constructors!("PE_SpcSpOpusInfo")

    generate!("PE_LoadConfiguration")
    block_constructors!("PE_LoadConfiguration")
    generate!("PE_LoadConfigurationV0")
    block_constructors!("PE_LoadConfigurationV0")
    generate!("PE_LoadConfigurationV1")
    block_constructors!("PE_LoadConfigurationV1")
    generate!("PE_LoadConfigurationV2")
    block_constructors!("PE_LoadConfigurationV2")
    generate!("PE_LoadConfigurationV3")
    block_constructors!("PE_LoadConfigurationV3")
    generate!("PE_LoadConfigurationV4")
    block_constructors!("PE_LoadConfigurationV4")
    generate!("PE_LoadConfigurationV5")
    block_constructors!("PE_LoadConfigurationV5")
    generate!("PE_LoadConfigurationV6")
    block_constructors!("PE_LoadConfigurationV6")
    generate!("PE_LoadConfigurationV7")
    block_constructors!("PE_LoadConfigurationV7")
    generate!("PE_LoadConfigurationV8")
    block_constructors!("PE_LoadConfigurationV8")
    generate!("PE_LoadConfigurationV9")
    block_constructors!("PE_LoadConfigurationV9")
    generate!("PE_LoadConfigurationV10")
    block_constructors!("PE_LoadConfigurationV10")
    generate!("PE_LoadConfigurationV11")
    block_constructors!("PE_LoadConfigurationV11")

    // -------------------------------------------------------------------------
    // Mach-O
    // -------------------------------------------------------------------------
    generate!("MachO_Binary")
    block_constructors!("MachO_Binary")
    generate!("MachO_Binary_it_symbols")
    block_constructors!("MachO_Binary_it_symbols")
    generate!("MachO_Binary_it_relocations")
    block_constructors!("MachO_Binary_it_relocations")
    generate!("MachO_Binary_it_commands")
    block_constructors!("MachO_Binary_it_commands")
    generate!("MachO_Binary_it_symbols")
    block_constructors!("MachO_Binary_it_symbols")
    generate!("MachO_Binary_it_segments")
    block_constructors!("MachO_Binary_it_segments")
    generate!("MachO_Binary_it_sections")
    block_constructors!("MachO_Binary_it_sections")
    generate!("MachO_Binary_it_libraries")
    block_constructors!("MachO_Binary_it_libraries")
    generate!("MachO_BindingInfo")
    block_constructors!("MachO_BindingInfo")
    generate!("MachO_BuildVersion")
    block_constructors!("MachO_BuildVersion")
    generate!("MachO_BuildToolVersion")
    block_constructors!("MachO_BuildToolVersion")
    generate!("MachO_ChainedBindingInfo")
    block_constructors!("MachO_ChainedBindingInfo")
    generate!("MachO_CodeSignature")
    block_constructors!("MachO_CodeSignature")
    generate!("MachO_CodeSignatureDir")
    block_constructors!("MachO_CodeSignatureDir")
    generate!("MachO_Command")
    block_constructors!("MachO_Command")
    generate!("MachO_DataCodeEntry")
    block_constructors!("MachO_DataCodeEntry")
    generate!("MachO_DataInCode")
    block_constructors!("MachO_DataInCode")

    generate!("MachO_DataInCode_it_entries")
    block_constructors!("MachO_DataInCode_it_entries")

    generate!("MachO_DyldBindingInfo")
    block_constructors!("MachO_DyldBindingInfo")
    generate!("MachO_DyldChainedFixups")
    block_constructors!("MachO_DyldChainedFixups")
    generate!("MachO_DyldChainedFixups_it_bindings")
    block_constructors!("MachO_DyldChainedFixups_it_bindings")
    generate!("MachO_DyldEnvironment")
    block_constructors!("MachO_DyldEnvironment")
    generate!("MachO_DyldExportsTrie")
    block_constructors!("MachO_DyldExportsTrie")
    generate!("MachO_DyldExportsTrie_it_exports")
    block_constructors!("MachO_DyldExportsTrie_it_exports")
    generate!("MachO_DyldInfo")
    block_constructors!("MachO_DyldInfo")
    generate!("MachO_DyldInfo_it_bindings")
    block_constructors!("MachO_DyldInfo_it_bindings")
    generate!("MachO_DyldInfo_it_exports")
    block_constructors!("MachO_DyldInfo_it_exports")
    generate!("MachO_Dylib")
    block_constructors!("MachO_Dylib")
    generate!("MachO_Dylinker")
    block_constructors!("MachO_Dylinker")
    generate!("MachO_DynamicSymbolCommand")
    block_constructors!("MachO_DynamicSymbolCommand")
    generate!("MachO_EncryptionInfo")
    block_constructors!("MachO_EncryptionInfo")
    generate!("MachO_ExportInfo")
    block_constructors!("MachO_ExportInfo")
    generate!("MachO_FatBinary")
    block_constructors!("MachO_FatBinary")
    generate!("MachO_Fileset")
    block_constructors!("MachO_Fileset")
    generate!("MachO_FunctionStarts")
    block_constructors!("MachO_FunctionStarts")
    generate!("MachO_Header")
    block_constructors!("MachO_Header")
    generate!("MachO_LinkerOptHint")
    block_constructors!("MachO_LinkerOptHint")
    generate!("MachO_Main")
    block_constructors!("MachO_Main")
    generate!("MachO_RPathCommand")
    block_constructors!("MachO_RPathCommand")
    generate!("MachO_Relocation")
    block_constructors!("MachO_Relocation")
    generate!("MachO_RelocationDyld")
    block_constructors!("MachO_RelocationDyld")
    generate!("MachO_RelocationFixup")
    block_constructors!("MachO_RelocationFixup")
    generate!("MachO_RelocationObject")
    block_constructors!("MachO_RelocationObject")
    generate!("MachO_Section")
    block_constructors!("MachO_Section")
    generate!("MachO_Section_it_relocations")
    block_constructors!("MachO_Section_it_relocations")
    generate!("MachO_SegmentCommand")
    block_constructors!("MachO_SegmentCommand")
    generate!("MachO_SegmentCommand_it_sections")
    block_constructors!("MachO_SegmentCommand_it_sections")
    generate!("MachO_SegmentCommand_it_relocations")
    block_constructors!("MachO_SegmentCommand_it_relocations")
    generate!("MachO_SegmentSplitInfo")
    block_constructors!("MachO_SegmentSplitInfo")
    generate!("MachO_SourceVersion")
    block_constructors!("MachO_SourceVersion")
    generate!("MachO_SubFramework")
    block_constructors!("MachO_SubFramework")
    generate!("MachO_Symbol")
    block_constructors!("MachO_Symbol")
    generate!("MachO_SymbolCommand")
    block_constructors!("MachO_SymbolCommand")
    generate!("MachO_ThreadCommand")
    block_constructors!("MachO_ThreadCommand")
    generate!("MachO_TwoLevelHints")
    block_constructors!("MachO_TwoLevelHints")
    generate!("MachO_UUIDCommand")
    block_constructors!("MachO_UUIDCommand")
    generate!("MachO_Utils")
    block_constructors!("MachO_Utils")
    generate!("MachO_VersionMin")
    block_constructors!("MachO_VersionMin")
    generate!("MachO_UnknownCommand")
    block_constructors!("MachO_UnknownCommand")

    safety!(unsafe)
}
