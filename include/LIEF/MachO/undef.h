/* Copyright 2017 - 2022 R. Thomas
 * Copyright 2017 - 2022 Quarkslab
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
#ifndef LIEF_MACHO_UNDEF_H_
#define LIEF_MACHO_UNDEF_H_

#ifdef MH_MAGIC
#pragma message("LIEF will disable #define enums. Please use LIEF_MACHO_XXXX or LIEF::MACHO::XXXX instead!")
#endif

#undef  MH_MAGIC
#undef  MH_CIGAM
#undef  MH_MAGIC_64
#undef  MH_CIGAM_64
#undef  FAT_MAGIC
#undef  FAT_CIGAM

#undef  MH_OBJECT
#undef  MH_EXECUTE
#undef  MH_FVMLIB
#undef  MH_CORE
#undef  MH_PRELOAD
#undef  MH_DYLIB
#undef  MH_DYLINKER
#undef  MH_BUNDLE
#undef  MH_DYLIB_STUB
#undef  MH_DSYM
#undef  MH_KEXT_BUNDLE


#undef  MH_NOUNDEFS
#undef  MH_INCRLINK
#undef  MH_DYLDLINK
#undef  MH_BINDATLOAD
#undef  MH_PREBOUND
#undef  MH_SPLIT_SEGS
#undef  MH_LAZY_INIT
#undef  MH_TWOLEVEL
#undef  MH_FORCE_FLAT
#undef  MH_NOMULTIDEFS
#undef  MH_NOFIXPREBINDING
#undef  MH_PREBINDABLE
#undef  MH_ALLMODSBOUND
#undef  MH_SUBSECTIONS_VIA_SYMBOLS
#undef  MH_CANONICAL
#undef  MH_WEAK_DEFINES
#undef  MH_BINDS_TO_WEAK
#undef  MH_ALLOW_STACK_EXECUTION
#undef  MH_ROOT_SAFE
#undef  MH_SETUID_SAFE
#undef  MH_NO_REEXPORTED_DYLIBS
#undef  MH_PIE
#undef  MH_DEAD_STRIPPABLE_DYLIB
#undef  MH_HAS_TLV_DESCRIPTORS
#undef  MH_NO_HEAP_EXECUTION
#undef  MH_APP_EXTENSION_SAFE


#undef  LC_SEGMENT
#undef  LC_SYMTAB
#undef  LC_SYMSEG
#undef  LC_THREAD
#undef  LC_UNIXTHREAD
#undef  LC_LOADFVMLIB
#undef  LC_IDFVMLIB
#undef  LC_IDENT
#undef  LC_FVMFILE
#undef  LC_PREPAGE
#undef  LC_DYSYMTAB
#undef  LC_LOAD_DYLIB
#undef  LC_ID_DYLIB
#undef  LC_LOAD_DYLINKER
#undef  LC_ID_DYLINKER
#undef  LC_PREBOUND_DYLIB
#undef  LC_ROUTINES
#undef  LC_SUB_FRAMEWORK
#undef  LC_SUB_UMBRELLA
#undef  LC_SUB_CLIENT
#undef  LC_SUB_LIBRARY
#undef  LC_TWOLEVEL_HINTS
#undef  LC_PREBIND_CKSUM
#undef  LC_LOAD_WEAK_DYLIB
#undef  LC_SEGMENT_64
#undef  LC_ROUTINES_64
#undef  LC_UUID
#undef  LC_RPATH
#undef  LC_CODE_SIGNATURE
#undef  LC_SEGMENT_SPLIT_INFO
#undef  LC_REEXPORT_DYLIB
#undef  LC_LAZY_LOAD_DYLIB
#undef  LC_ENCRYPTION_INFO
#undef  LC_DYLD_INFO
#undef  LC_DYLD_INFO_ONLY
#undef  LC_LOAD_UPWARD_DYLIB
#undef  LC_VERSION_MIN_MACOSX
#undef  LC_VERSION_MIN_IPHONEOS
#undef  LC_FUNCTION_STARTS
#undef  LC_DYLD_ENVIRONMENT
#undef  LC_MAIN
#undef  LC_DATA_IN_CODE
#undef  LC_SOURCE_VERSION
#undef  LC_DYLIB_CODE_SIGN_DRS
#undef  LC_ENCRYPTION_INFO_64
#undef  LC_LINKER_OPTION
#undef  LC_LINKER_OPTIMIZATION_HINT
#undef  LC_VERSION_MIN_TVOS
#undef  LC_VERSION_MIN_WATCHOS


#undef  SG_HIGHVM
#undef  SG_FVMLIB
#undef  SG_NORELOC
#undef  SG_PROTECTED_VERSION_1


#undef  SECTION_TYPE_MASK
#undef  SECTION_FLAGS_MASK
#undef  SECTION_FLAGS_USR_MASK
#undef  SECTION_FLAGS_SYS_MASK


#undef  S_REGULAR
#undef  S_ZEROFILL
#undef  S_CSTRING_LITERALS
#undef  S_4BYTE_LITERALS
#undef  S_8BYTE_LITERALS
#undef  S_LITERAL_POINTERS
#undef  S_NON_LAZY_SYMBOL_POINTERS
#undef  S_LAZY_SYMBOL_POINTERS
#undef  S_SYMBOL_STUBS
#undef  S_MOD_INIT_FUNC_POINTERS
#undef  S_MOD_TERM_FUNC_POINTERS
#undef  S_COALESCED
#undef  S_GB_ZEROFILL
#undef  S_INTERPOSING
#undef  S_16BYTE_LITERALS
#undef  S_DTRACE_DOF
#undef  S_LAZY_DYLIB_SYMBOL_POINTERS
#undef  S_THREAD_LOCAL_REGULAR
#undef  S_THREAD_LOCAL_ZEROFILL
#undef  S_THREAD_LOCAL_VARIABLES
#undef  S_THREAD_LOCAL_VARIABLE_POINTERS
#undef  S_THREAD_LOCAL_INIT_FUNCTION_POINTERS

#undef  LAST_KNOWN_SECTION_TYPE


#undef  S_ATTR_PURE_INSTRUCTIONS
#undef  S_ATTR_NO_TOC
#undef  S_ATTR_STRIP_STATIC_SYMS
#undef  S_ATTR_NO_DEAD_STRIP
#undef  S_ATTR_LIVE_SUPPORT
#undef  S_ATTR_SELF_MODIFYING_CODE
#undef  S_ATTR_DEBUG

#undef  S_ATTR_SOME_INSTRUCTIONS
#undef  S_ATTR_EXT_RELOC
#undef  S_ATTR_LOC_RELOC

#undef  INDIRECT_SYMBOL_LOCAL
#undef  INDIRECT_SYMBOL_ABS


#undef  DICE_KIND_DATA
#undef  DICE_KIND_JUMP_TABLE8
#undef  DICE_KIND_JUMP_TABLE16
#undef  DICE_KIND_JUMP_TABLE32
#undef  DICE_KIND_ABS_JUMP_TABLE32


#undef  REBASE_TYPE_POINTER
#undef  REBASE_TYPE_TEXT_ABSOLUTE32
#undef  REBASE_TYPE_TEXT_PCREL32


#undef  REBASE_OPCODE_MASK
#undef  REBASE_IMMEDIATE_MASK


#undef  REBASE_OPCODE_DONE
#undef  REBASE_OPCODE_SET_TYPE_IMM
#undef  REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB
#undef  REBASE_OPCODE_ADD_ADDR_ULEB
#undef  REBASE_OPCODE_ADD_ADDR_IMM_SCALED
#undef  REBASE_OPCODE_DO_REBASE_IMM_TIMES
#undef  REBASE_OPCODE_DO_REBASE_ULEB_TIMES
#undef  REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB
#undef  REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB


#undef  BIND_CLASS_WEAK
#undef  BIND_CLASS_LAZY
#undef  BIND_CLASS_STANDARD


#undef  BIND_TYPE_POINTER
#undef  BIND_TYPE_TEXT_ABSOLUTE32
#undef  BIND_TYPE_TEXT_PCREL32


#undef  BIND_SPECIAL_DYLIB_SELF
#undef  BIND_SPECIAL_DYLIB_MAIN_EXECUTABLE
#undef  BIND_SPECIAL_DYLIB_FLAT_LOOKUP


#undef  BIND_SYMBOL_FLAGS_WEAK_IMPORT
#undef  BIND_SYMBOL_FLAGS_NON_WEAK_DEFINITION

#undef  BIND_OPCODE_MASK
#undef  BIND_IMMEDIATE_MASK


#undef  BIND_OPCODE_DONE
#undef  BIND_OPCODE_SET_DYLIB_ORDINAL_IMM
#undef  BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB
#undef  BIND_OPCODE_SET_DYLIB_SPECIAL_IMM
#undef  BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM
#undef  BIND_OPCODE_SET_TYPE_IMM
#undef  BIND_OPCODE_SET_ADDEND_SLEB
#undef  BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB
#undef  BIND_OPCODE_ADD_ADDR_ULEB
#undef  BIND_OPCODE_DO_BIND
#undef  BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB
#undef  BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED
#undef  BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB


#undef  EXPORT_SYMBOL_FLAGS_KIND_MASK
#undef  EXPORT_SYMBOL_FLAGS_WEAK_DEFINITION
#undef  EXPORT_SYMBOL_FLAGS_REEXPORT
#undef  EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER


#undef  EXPORT_SYMBOL_FLAGS_KIND_REGULAR
#undef  EXPORT_SYMBOL_FLAGS_KIND_THREAD_LOCAL
#undef  EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE


#undef  N_STAB
#undef  N_PEXT
#undef  N_TYPE
#undef  N_EXT


#undef  N_UNDF
#undef  N_ABS
#undef  N_SECT
#undef  N_PBUD
#undef  N_INDR


#undef  NO_SECT
#undef  MAX_SECT


#undef  REFERENCE_TYPE
#undef  REFERENCE_FLAG_UNDEFINED_NON_LAZY
#undef  REFERENCE_FLAG_UNDEFINED_LAZY
#undef  REFERENCE_FLAG_DEFINED
#undef  REFERENCE_FLAG_PRIVATE_DEFINED
#undef  REFERENCE_FLAG_PRIVATE_UNDEFINED_NON_LAZY
#undef  REFERENCE_FLAG_PRIVATE_UNDEFINED_LAZY

#undef  N_ARM_THUMB_DEF
#undef  REFERENCED_DYNAMICALLY
#undef  N_NO_DEAD_STRIP
#undef  N_WEAK_REF
#undef  N_WEAK_DEF
#undef  N_SYMBOL_RESOLVER
#undef  N_ALT_ENTRY

#undef  SELF_LIBRARY_ORDINAL
#undef  MAX_LIBRARY_ORDINAL
#undef  DYNAMIC_LOOKUP_ORDINAL
#undef  EXECUTABLE_ORDINAL


#undef  N_GSYM
#undef  N_FNAME
#undef  N_FUN
#undef  N_STSYM
#undef  N_LCSYM
#undef  N_BNSYM
#undef  N_PC
#undef  N_AST
#undef  N_OPT
#undef  N_RSYM
#undef  N_SLINE
#undef  N_ENSYM
#undef  N_SSYM
#undef  N_SO
#undef  N_OSO
#undef  N_LSYM
#undef  N_BINCL
#undef  N_SOL
#undef  N_PARAMS
#undef  N_VERSION
#undef  N_OLEVEL
#undef  N_PSYM
#undef  N_EINCL
#undef  N_ENTRY
#undef  N_LBRAC
#undef  N_EXCL
#undef  N_RBRAC
#undef  N_BCOMM
#undef  N_ECOMM
#undef  N_ECOML
#undef  N_LENG


#undef  R_ABS

#undef  R_SCATTERED


#undef  GENERIC_RELOC_VANILLA
#undef  GENERIC_RELOC_PAIR
#undef  GENERIC_RELOC_SECTDIFF
#undef  GENERIC_RELOC_PB_LA_PTR
#undef  GENERIC_RELOC_LOCAL_SECTDIFF
#undef  GENERIC_RELOC_TLV


#undef  X86_64_RELOC_UNSIGNED
#undef  X86_64_RELOC_SIGNED
#undef  X86_64_RELOC_BRANCH
#undef  X86_64_RELOC_GOT_LOAD
#undef  X86_64_RELOC_GOT
#undef  X86_64_RELOC_SUBTRACTOR
#undef  X86_64_RELOC_SIGNED_1
#undef  X86_64_RELOC_SIGNED_2
#undef  X86_64_RELOC_SIGNED_4
#undef  X86_64_RELOC_TLV


#undef  PPC_RELOC_VANILLA
#undef  PPC_RELOC_PAIR
#undef  PPC_RELOC_BR14
#undef  PPC_RELOC_BR24
#undef  PPC_RELOC_HI16
#undef  PPC_RELOC_LO16
#undef  PPC_RELOC_HA16
#undef  PPC_RELOC_LO14
#undef  PPC_RELOC_SECTDIFF
#undef  PPC_RELOC_PB_LA_PTR
#undef  PPC_RELOC_HI16_SECTDIFF
#undef  PPC_RELOC_LO16_SECTDIFF
#undef  PPC_RELOC_HA16_SECTDIFF
#undef  PPC_RELOC_JBSR
#undef  PPC_RELOC_LO14_SECTDIFF
#undef  PPC_RELOC_LOCAL_SECTDIFF

#undef  ARM_RELOC_VANILLA
#undef  ARM_RELOC_PAIR
#undef  ARM_RELOC_SECTDIFF
#undef  ARM_RELOC_LOCAL_SECTDIFF
#undef  ARM_RELOC_PB_LA_PTR
#undef  ARM_RELOC_BR24
#undef  ARM_THUMB_RELOC_BR22
#undef  ARM_THUMB_32BIT_BRANCH
#undef  ARM_RELOC_HALF
#undef  ARM_RELOC_HALF_SECTDIFF

#undef  ARM64_RELOC_UNSIGNED
#undef  ARM64_RELOC_SUBTRACTOR
#undef  ARM64_RELOC_BRANCH26
#undef  ARM64_RELOC_PAGE21
#undef  ARM64_RELOC_PAGEOFF12
#undef  ARM64_RELOC_GOT_LOAD_PAGE21
#undef  ARM64_RELOC_GOT_LOAD_PAGEOFF12
#undef  ARM64_RELOC_POINTER_TO_GOT
#undef  ARM64_RELOC_TLVP_LOAD_PAGE21
#undef  ARM64_RELOC_TLVP_LOAD_PAGEOFF12
#undef  ARM64_RELOC_ADDEND


#undef  VM_PROT_READ
#undef  VM_PROT_WRITE
#undef  VM_PROT_EXECUTE

#undef  CPU_ARCH_MASK
#undef  CPU_ARCH_ABI64


#undef  CPU_TYPE_ANY
#undef  CPU_TYPE_X86
#undef  CPU_TYPE_I386
#undef  CPU_TYPE_X86_64
#undef  CPU_TYPE_MC98000
#undef  CPU_TYPE_ARM
#undef  CPU_TYPE_ARM64
#undef  CPU_TYPE_SPARC
#undef  CPU_TYPE_POWERPC
#undef  CPU_TYPE_POWERPC64


#undef  CPU_SUBTYPE_MASK
#undef  CPU_SUBTYPE_LIB64

#undef  CPU_SUBTYPE_MULTIPLE


#undef  CPU_SUBTYPE_I386_ALL
#undef  CPU_SUBTYPE_386
#undef  CPU_SUBTYPE_486
#undef  CPU_SUBTYPE_486SX
#undef  CPU_SUBTYPE_586
#undef  CPU_SUBTYPE_PENT
#undef  CPU_SUBTYPE_PENTPRO
#undef  CPU_SUBTYPE_PENTII_M3
#undef  CPU_SUBTYPE_PENTII_M5
#undef  CPU_SUBTYPE_CELERON
#undef  CPU_SUBTYPE_CELERON_MOBILE
#undef  CPU_SUBTYPE_PENTIUM_3
#undef  CPU_SUBTYPE_PENTIUM_3_M
#undef  CPU_SUBTYPE_PENTIUM_3_XEON
#undef  CPU_SUBTYPE_PENTIUM_M
#undef  CPU_SUBTYPE_PENTIUM_4
#undef  CPU_SUBTYPE_PENTIUM_4_M
#undef  CPU_SUBTYPE_ITANIUM
#undef  CPU_SUBTYPE_ITANIUM_2
#undef  CPU_SUBTYPE_XEON
#undef  CPU_SUBTYPE_XEON_MP

#undef  CPU_SUBTYPE_X86_ALL
#undef  CPU_SUBTYPE_X86_64_ALL
#undef  CPU_SUBTYPE_X86_ARCH1
#undef  CPU_SUBTYPE_X86_64_H

#undef  CPU_SUBTYPE_INTEL_FAMILY_MAX
#undef  CPU_SUBTYPE_INTEL_MODEL_ALL


#undef  CPU_SUBTYPE_ARM_ALL
#undef  CPU_SUBTYPE_ARM_V4T
#undef  CPU_SUBTYPE_ARM_V6
#undef  CPU_SUBTYPE_ARM_V5
#undef  CPU_SUBTYPE_ARM_V5TEJ
#undef  CPU_SUBTYPE_ARM_XSCALE
#undef  CPU_SUBTYPE_ARM_V7
#undef  CPU_SUBTYPE_ARM_V7S
#undef  CPU_SUBTYPE_ARM_V7K
#undef  CPU_SUBTYPE_ARM_V6M
#undef  CPU_SUBTYPE_ARM_V7M
#undef  CPU_SUBTYPE_ARM_V7EM

#undef  CPU_SUBTYPE_ARM64_ALL

#undef  CPU_SUBTYPE_SPARC_ALL

#undef  CPU_SUBTYPE_POWERPC_ALL
#undef  CPU_SUBTYPE_POWERPC_601
#undef  CPU_SUBTYPE_POWERPC_602
#undef  CPU_SUBTYPE_POWERPC_603
#undef  CPU_SUBTYPE_POWERPC_603e
#undef  CPU_SUBTYPE_POWERPC_603ev
#undef  CPU_SUBTYPE_POWERPC_604
#undef  CPU_SUBTYPE_POWERPC_604e
#undef  CPU_SUBTYPE_POWERPC_620
#undef  CPU_SUBTYPE_POWERPC_750
#undef  CPU_SUBTYPE_POWERPC_7400
#undef  CPU_SUBTYPE_POWERPC_7450
#undef  CPU_SUBTYPE_POWERPC_970

#undef  CPU_SUBTYPE_MC980000_ALL
#undef  CPU_SUBTYPE_MC98601


#endif
