/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 * Copyright 2020 K. Nakagawa
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
#if !defined(LIEF_PE_UNDEF_H_) || defined(LIEF_PE_FORCE_UNDEF)
#define LIEF_PE_UNDEF_H_

#ifdef IMAGE_FILE_MACHINE_UNKNOWN
#pragma message("LIEF will disable #define enums. Please use LIEF_PE_XXXX or LIEF::PE::XXXX instead!")
#endif

#undef IMAGE_FILE_MACHINE_UNKNOWN
#undef IMAGE_FILE_MACHINE_AM33
#undef IMAGE_FILE_MACHINE_AMD64
#undef IMAGE_FILE_MACHINE_ARM
#undef IMAGE_FILE_MACHINE_ARMNT
#undef IMAGE_FILE_MACHINE_ARM64
#undef IMAGE_FILE_MACHINE_EBC
#undef IMAGE_FILE_MACHINE_I386
#undef IMAGE_FILE_MACHINE_IA64
#undef IMAGE_FILE_MACHINE_M32R
#undef IMAGE_FILE_MACHINE_MIPS16
#undef IMAGE_FILE_MACHINE_MIPSFPU
#undef IMAGE_FILE_MACHINE_MIPSFPU16
#undef IMAGE_FILE_MACHINE_POWERPC
#undef IMAGE_FILE_MACHINE_POWERPCFP
#undef IMAGE_FILE_MACHINE_R4000
#undef IMAGE_FILE_MACHINE_RISCV32
#undef IMAGE_FILE_MACHINE_RISCV64
#undef IMAGE_FILE_MACHINE_RISCV128
#undef IMAGE_FILE_MACHINE_SH3
#undef IMAGE_FILE_MACHINE_SH3DSP
#undef IMAGE_FILE_MACHINE_SH4
#undef IMAGE_FILE_MACHINE_SH5
#undef IMAGE_FILE_MACHINE_THUMB
#undef IMAGE_FILE_MACHINE_WCEMIPSV2

#undef IMAGE_SYM_DEBUG
#undef IMAGE_SYM_ABSOLUTE
#undef IMAGE_SYM_UNDEFINED


#undef IMAGE_FILE_INVALID
#undef IMAGE_FILE_RELOCS_STRIPPED
#undef IMAGE_FILE_EXECUTABLE_IMAGE
#undef IMAGE_FILE_LINE_NUMS_STRIPPED
#undef IMAGE_FILE_LOCAL_SYMS_STRIPPED
#undef IMAGE_FILE_AGGRESSIVE_WS_TRIM
#undef IMAGE_FILE_LARGE_ADDRESS_AWARE
#undef IMAGE_FILE_BYTES_REVERSED_LO
#undef IMAGE_FILE_32BIT_MACHINE
#undef IMAGE_FILE_DEBUG_STRIPPED
#undef IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP
#undef IMAGE_FILE_NET_RUN_FROM_SWAP
#undef IMAGE_FILE_SYSTEM
#undef IMAGE_FILE_DLL
#undef IMAGE_FILE_UP_SYSTEM_ONLY
#undef IMAGE_FILE_BYTES_REVERSED_HI

#undef IMAGE_SYM_CLASS_END_OF_FUNCTION
#undef IMAGE_SYM_CLASS_NULL
#undef IMAGE_SYM_CLASS_AUTOMATIC
#undef IMAGE_SYM_CLASS_EXTERNAL
#undef IMAGE_SYM_CLASS_STATIC
#undef IMAGE_SYM_CLASS_REGISTER
#undef IMAGE_SYM_CLASS_EXTERNAL_DEF
#undef IMAGE_SYM_CLASS_LABEL
#undef IMAGE_SYM_CLASS_UNDEFINED_LABEL
#undef IMAGE_SYM_CLASS_MEMBER_OF_STRUCT
#undef IMAGE_SYM_CLASS_ARGUMENT
#undef IMAGE_SYM_CLASS_STRUCT_TAG
#undef IMAGE_SYM_CLASS_MEMBER_OF_UNION
#undef IMAGE_SYM_CLASS_UNION_TAG
#undef IMAGE_SYM_CLASS_TYPE_DEFINITION
#undef IMAGE_SYM_CLASS_UNDEFINED_STATIC
#undef IMAGE_SYM_CLASS_ENUM_TAG
#undef IMAGE_SYM_CLASS_MEMBER_OF_ENUM
#undef IMAGE_SYM_CLASS_REGISTER_PARAM
#undef IMAGE_SYM_CLASS_BIT_FIELD
#undef IMAGE_SYM_CLASS_BLOCK
#undef IMAGE_SYM_CLASS_FUNCTION
#undef IMAGE_SYM_CLASS_END_OF_STRUCT
#undef IMAGE_SYM_CLASS_FILE
#undef IMAGE_SYM_CLASS_SECTION
#undef IMAGE_SYM_CLASS_WEAK_EXTERNAL
#undef IMAGE_SYM_CLASS_CLR_TOKEN

#undef IMAGE_SYM_TYPE_NULL
#undef IMAGE_SYM_TYPE_VOID
#undef IMAGE_SYM_TYPE_CHAR
#undef IMAGE_SYM_TYPE_SHORT
#undef IMAGE_SYM_TYPE_INT
#undef IMAGE_SYM_TYPE_LONG
#undef IMAGE_SYM_TYPE_FLOAT
#undef IMAGE_SYM_TYPE_DOUBLE
#undef IMAGE_SYM_TYPE_STRUCT
#undef IMAGE_SYM_TYPE_UNION
#undef IMAGE_SYM_TYPE_ENUM
#undef IMAGE_SYM_TYPE_MOE
#undef IMAGE_SYM_TYPE_BYTE
#undef IMAGE_SYM_TYPE_WORD
#undef IMAGE_SYM_TYPE_UINT
#undef IMAGE_SYM_TYPE_DWORD



#undef IMAGE_SYM_DTYPE_NULL
#undef IMAGE_SYM_DTYPE_POINTER
#undef IMAGE_SYM_DTYPE_FUNCTION
#undef IMAGE_SYM_DTYPE_ARRAY
#undef SCT_COMPLEX_TYPE_SHIFT

#undef IMAGE_REL_BASED_ABSOLUTE
#undef IMAGE_REL_BASED_HIGH
#undef IMAGE_REL_BASED_LOW
#undef IMAGE_REL_BASED_HIGHLOW
#undef IMAGE_REL_BASED_HIGHADJ
#undef IMAGE_REL_BASED_MIPS_JMPADDR
#undef IMAGE_REL_BASED_SECTION
#undef IMAGE_REL_BASED_REL
#undef IMAGE_REL_BASED_MIPS_JMPADDR16
#undef IMAGE_REL_BASED_IA64_IMM64
#undef IMAGE_REL_BASED_DIR64
#undef IMAGE_REL_BASED_HIGH3ADJ

#undef IMAGE_REL_I386_ABSOLUTE
#undef IMAGE_REL_I386_DIR16
#undef IMAGE_REL_I386_REL16
#undef IMAGE_REL_I386_DIR32
#undef IMAGE_REL_I386_DIR32NB
#undef IMAGE_REL_I386_SEG12
#undef IMAGE_REL_I386_SECTION
#undef IMAGE_REL_I386_SECREL
#undef IMAGE_REL_I386_TOKEN
#undef IMAGE_REL_I386_SECREL7
#undef IMAGE_REL_I386_REL32
#undef IMAGE_REL_BASED_ARM_MOV32A
#undef IMAGE_REL_BASED_ARM_MOV32
#undef IMAGE_REL_BASED_RISCV_HI20
#undef IMAGE_REL_BASED_ARM_MOV32T
#undef IMAGE_REL_BASED_THUMB_MOV32
#undef IMAGE_REL_BASED_RISCV_LOW12I
#undef IMAGE_REL_BASED_RISCV_LOW12S

#undef IMAGE_REL_AMD64_ABSOLUTE
#undef IMAGE_REL_AMD64_ADDR64
#undef IMAGE_REL_AMD64_ADDR32
#undef IMAGE_REL_AMD64_ADDR32NB
#undef IMAGE_REL_AMD64_REL32
#undef IMAGE_REL_AMD64_REL32_1
#undef IMAGE_REL_AMD64_REL32_2
#undef IMAGE_REL_AMD64_REL32_3
#undef IMAGE_REL_AMD64_REL32_4
#undef IMAGE_REL_AMD64_REL32_5
#undef IMAGE_REL_AMD64_SECTION
#undef IMAGE_REL_AMD64_SECREL
#undef IMAGE_REL_AMD64_SECREL7
#undef IMAGE_REL_AMD64_TOKEN
#undef IMAGE_REL_AMD64_SREL32
#undef IMAGE_REL_AMD64_PAIR
#undef IMAGE_REL_AMD64_SSPAN32

#undef IMAGE_REL_ARM_ABSOLUTE
#undef IMAGE_REL_ARM_ADDR32
#undef IMAGE_REL_ARM_ADDR32NB
#undef IMAGE_REL_ARM_BRANCH24
#undef IMAGE_REL_ARM_BRANCH11
#undef IMAGE_REL_ARM_TOKEN
#undef IMAGE_REL_ARM_BLX24
#undef IMAGE_REL_ARM_BLX11
#undef IMAGE_REL_ARM_SECTION
#undef IMAGE_REL_ARM_SECREL
#undef IMAGE_REL_ARM_MOV32A
#undef IMAGE_REL_ARM_MOV32T
#undef IMAGE_REL_ARM_BRANCH20T
#undef IMAGE_REL_ARM_BRANCH24T
#undef IMAGE_REL_ARM_BLX23T


#undef IMAGE_WEAK_EXTERN_SEARCH_NOLIBRARY
#undef IMAGE_WEAK_EXTERN_SEARCH_LIBRARY
#undef IMAGE_WEAK_EXTERN_SEARCH_ALIAS


#undef EXPORT_TABLE
#undef IMPORT_TABLE
#undef RESOURCE_TABLE
#undef EXCEPTION_TABLE
#undef CERTIFICATE_TABLE
#undef BASE_RELOCATION_TABLE
#undef DEBUG
#undef ARCHITECTURE
#undef GLOBAL_PTR
#undef TLS_TABLE
#undef LOAD_CONFIG_TABLE
#undef BOUND_IMPORT
#undef IAT
#undef DELAY_IMPORT_DESCRIPTOR
#undef CLR_RUNTIME_HEADER
#undef NUM_DATA_DIRECTORIES

#undef IMAGE_SUBSYSTEM_UNKNOWN
#undef IMAGE_SUBSYSTEM_NATIVE
#undef IMAGE_SUBSYSTEM_WINDOWS_GUI
#undef IMAGE_SUBSYSTEM_WINDOWS_CUI
#undef IMAGE_SUBSYSTEM_OS2_CUI
#undef IMAGE_SUBSYSTEM_POSIX_CUI
#undef IMAGE_SUBSYSTEM_NATIVE_WINDOWS
#undef IMAGE_SUBSYSTEM_WINDOWS_CE_GUI
#undef IMAGE_SUBSYSTEM_EFI_APPLICATION
#undef IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER
#undef IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER
#undef IMAGE_SUBSYSTEM_EFI_ROM
#undef IMAGE_SUBSYSTEM_XBOX
#undef IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION



#undef IMAGE_DLL_CHARACTERISTICS_HIGH_ENTROPY_VA
#undef IMAGE_DLL_CHARACTERISTICS_DYNAMIC_BASE
#undef IMAGE_DLL_CHARACTERISTICS_FORCE_INTEGRITY
#undef IMAGE_DLL_CHARACTERISTICS_NX_COMPAT
#undef IMAGE_DLL_CHARACTERISTICS_NO_ISOLATION
#undef IMAGE_DLL_CHARACTERISTICS_NO_SEH
#undef IMAGE_DLL_CHARACTERISTICS_NO_BIND
#undef IMAGE_DLL_CHARACTERISTICS_APPCONTAINER
#undef IMAGE_DLL_CHARACTERISTICS_WDM_DRIVER
#undef IMAGE_DLL_CHARACTERISTICS_GUARD_CF
#undef IMAGE_DLL_CHARACTERISTICS_TERMINAL_SERVER_AWARE

#undef IMAGE_DEBUG_TYPE_UNKNOWN
#undef IMAGE_DEBUG_TYPE_COFF
#undef IMAGE_DEBUG_TYPE_CODEVIEW
#undef IMAGE_DEBUG_TYPE_FPO
#undef IMAGE_DEBUG_TYPE_MISC
#undef IMAGE_DEBUG_TYPE_EXCEPTION
#undef IMAGE_DEBUG_TYPE_FIXUP
#undef IMAGE_DEBUG_TYPE_OMAP_TO_SRC
#undef IMAGE_DEBUG_TYPE_OMAP_FROM_SRC
#undef IMAGE_DEBUG_TYPE_BORLAND
#undef IMAGE_DEBUG_TYPE_RESERVED10
#undef IMAGE_DEBUG_TYPE_CLSID
#undef IMAGE_DEBUG_TYPE_VC_FEATURE
#undef IMAGE_DEBUG_TYPE_POGO
#undef IMAGE_DEBUG_TYPE_ILTCG
#undef IMAGE_DEBUG_TYPE_MPX
#undef IMAGE_DEBUG_TYPE_REPRO
#undef IMAGE_DEBUG_TYPE_EX_DLLCHARACTERISTICS

#undef IMAGE_SCN_TYPE_NO_PAD
#undef IMAGE_SCN_CNT_CODE
#undef IMAGE_SCN_CNT_INITIALIZED_DATA
#undef IMAGE_SCN_CNT_UNINITIALIZED_DATA
#undef IMAGE_SCN_LNK_OTHER
#undef IMAGE_SCN_LNK_INFO
#undef IMAGE_SCN_LNK_REMOVE
#undef IMAGE_SCN_LNK_COMDAT
#undef IMAGE_SCN_GPREL
#undef IMAGE_SCN_MEM_PURGEABLE
#undef IMAGE_SCN_MEM_16BIT
#undef IMAGE_SCN_MEM_LOCKED
#undef IMAGE_SCN_MEM_PRELOAD
#undef IMAGE_SCN_ALIGN_1BYTES
#undef IMAGE_SCN_ALIGN_2BYTES
#undef IMAGE_SCN_ALIGN_4BYTES
#undef IMAGE_SCN_ALIGN_8BYTES
#undef IMAGE_SCN_ALIGN_16BYTES
#undef IMAGE_SCN_ALIGN_32BYTES
#undef IMAGE_SCN_ALIGN_64BYTES
#undef IMAGE_SCN_ALIGN_128BYTES
#undef IMAGE_SCN_ALIGN_256BYTES
#undef IMAGE_SCN_ALIGN_512BYTES
#undef IMAGE_SCN_ALIGN_1024BYTES
#undef IMAGE_SCN_ALIGN_2048BYTES
#undef IMAGE_SCN_ALIGN_4096BYTES
#undef IMAGE_SCN_ALIGN_8192BYTES
#undef IMAGE_SCN_LNK_NRELOC_OVFL
#undef IMAGE_SCN_MEM_DISCARDABLE
#undef IMAGE_SCN_MEM_NOT_CACHED
#undef IMAGE_SCN_MEM_NOT_PAGED
#undef IMAGE_SCN_MEM_SHARED
#undef IMAGE_SCN_MEM_EXECUTE
#undef IMAGE_SCN_MEM_READ
#undef IMAGE_SCN_MEM_WRITE

#undef RESOURCE_TYPES
#undef RESOURCE_LANGS


#undef LANG_NEUTRAL
#undef LANG_INVARIANT
#undef LANG_AFRIKAANS
#undef LANG_ALBANIAN
#undef LANG_ARABIC
#undef LANG_ARMENIAN
#undef LANG_ASSAMESE
#undef LANG_AZERI
#undef LANG_BASQUE
#undef LANG_BELARUSIAN
#undef LANG_BENGALI
#undef LANG_BANGLA
#undef LANG_BULGARIAN
#undef LANG_CATALAN
#undef LANG_CHINESE
#undef LANG_CROATIAN
#undef LANG_BOSNIAN
#undef LANG_CZECH
#undef LANG_DANISH
#undef LANG_DIVEHI
#undef LANG_DUTCH
#undef LANG_ENGLISH
#undef LANG_ESTONIAN
#undef LANG_FAEROESE
#undef LANG_FARSI
#undef LANG_FINNISH
#undef LANG_FRENCH
#undef LANG_GALICIAN
#undef LANG_GEORGIAN
#undef LANG_GERMAN
#undef LANG_GREEK
#undef LANG_GUJARATI
#undef LANG_HEBREW
#undef LANG_HINDI
#undef LANG_HUNGARIAN
#undef LANG_ICELANDIC
#undef LANG_INDONESIAN
#undef LANG_ITALIAN
#undef LANG_JAPANESE
#undef LANG_KANNADA
#undef LANG_KASHMIRI
#undef LANG_KAZAK
#undef LANG_KONKANI
#undef LANG_KOREAN
#undef LANG_KYRGYZ
#undef LANG_LATVIAN
#undef LANG_LITHUANIAN
#undef LANG_MACEDONIAN
#undef LANG_MALAY
#undef LANG_MALAYALAM
#undef LANG_MANIPURI
#undef LANG_MARATHI
#undef LANG_MONGOLIAN
#undef LANG_NEPALI
#undef LANG_NORWEGIAN
#undef LANG_ORIYA
#undef LANG_POLISH
#undef LANG_PORTUGUESE
#undef LANG_PUNJABI
#undef LANG_ROMANIAN
#undef LANG_RUSSIAN
#undef LANG_SANSKRIT
#undef LANG_SERBIAN
#undef LANG_SINDHI
#undef LANG_SLOVAK
#undef LANG_SLOVENIAN
#undef LANG_SPANISH
#undef LANG_SWAHILI
#undef LANG_SWEDISH
#undef LANG_SYRIAC
#undef LANG_TAMIL
#undef LANG_TATAR
#undef LANG_TELUGU
#undef LANG_THAI
#undef LANG_TURKISH
#undef LANG_UKRAINIAN
#undef LANG_URDU
#undef LANG_UZBEK
#undef LANG_VIETNAMESE
#undef LANG_GAELIC
#undef LANG_MALTESE
#undef LANG_MAORI
#undef LANG_RHAETO_ROMANCE
#undef LANG_SAMI
#undef LANG_SORBIAN
#undef LANG_SUTU
#undef LANG_TSONGA
#undef LANG_TSWANA
#undef LANG_VENDA
#undef LANG_XHOSA
#undef LANG_ZULU
#undef LANG_ESPERANTO
#undef LANG_WALON
#undef LANG_CORNISH
#undef LANG_WELSH
#undef LANG_BRETON
#undef LANG_INUKTITUT
#undef LANG_IRISH
#undef LANG_LOWER_SORBIAN
#undef LANG_PULAR
#undef LANG_QUECHUA
#undef LANG_TAMAZIGHT
#undef LANG_TIGRINYA
#undef LANG_VALENCIAN



#undef SUBLANG_AFRIKAANS_SOUTH_AFRICA
#undef SUBLANG_ALBANIAN_ALBANIA
#undef SUBLANG_ALSATIAN_FRANCE
#undef SUBLANG_AMHARIC_ETHIOPIA
#undef SUBLANG_ARABIC_ALGERIA
#undef SUBLANG_ARABIC_BAHRAIN
#undef SUBLANG_ARABIC_EGYPT
#undef SUBLANG_ARABIC_IRAQ
#undef SUBLANG_ARABIC_JORDAN
#undef SUBLANG_ARABIC_KUWAIT
#undef SUBLANG_ARABIC_LEBANON
#undef SUBLANG_ARABIC_LIBYA
#undef SUBLANG_ARABIC_MOROCCO
#undef SUBLANG_ARABIC_OMAN
#undef SUBLANG_ARABIC_QATAR
#undef SUBLANG_ARABIC_SAUDI_ARABIA
#undef SUBLANG_ARABIC_SYRIA
#undef SUBLANG_ARABIC_TUNISIA
#undef SUBLANG_ARABIC_UAE
#undef SUBLANG_ARABIC_YEMEN
#undef SUBLANG_ARMENIAN_ARMENIA
#undef SUBLANG_ASSAMESE_INDIA
#undef SUBLANG_AZERI_CYRILLIC
#undef SUBLANG_AZERI_LATIN
#undef SUBLANG_BASHKIR_RUSSIA
#undef SUBLANG_BASQUE_BASQUE
#undef SUBLANG_BELARUSIAN_BELARUS
#undef SUBLANG_BANGLA_BANGLADESH
#undef SUBLANG_BANGLA_INDIA
#undef SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_CYRILLIC
#undef SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_LATIN
#undef SUBLANG_BRETON_FRANCE
#undef SUBLANG_BULGARIAN_BULGARIA
#undef SUBLANG_CATALAN_CATALAN
#undef SUBLANG_CHINESE_HONGKONG
#undef SUBLANG_CHINESE_MACAU
#undef SUBLANG_CHINESE_SIMPLIFIED
#undef SUBLANG_CHINESE_SINGAPORE
#undef SUBLANG_CHINESE_TRADITIONAL
#undef SUBLANG_CORSICAN_FRANCE
#undef SUBLANG_CROATIAN_BOSNIA_HERZEGOVINA_LATIN
#undef SUBLANG_CROATIAN_CROATIA
#undef SUBLANG_CUSTOM_DEFAULT
#undef SUBLANG_CUSTOM_UNSPECIFIED
#undef SUBLANG_CZECH_CZECH_REPUBLIC
#undef SUBLANG_DANISH_DENMARK
#undef SUBLANG_DARI_AFGHANISTAN
#undef SUBLANG_DEFAULT
#undef SUBLANG_DIVEHI_MALDIVES
#undef SUBLANG_DUTCH_BELGIAN
#undef SUBLANG_DUTCH
#undef SUBLANG_ENGLISH_AUS
#undef SUBLANG_ENGLISH_BELIZE
#undef SUBLANG_ENGLISH_CAN
#undef SUBLANG_ENGLISH_CARIBBEAN
#undef SUBLANG_ENGLISH_EIRE
#undef SUBLANG_ENGLISH_INDIA
#undef SUBLANG_ENGLISH_JAMAICA
#undef SUBLANG_ENGLISH_MALAYSIA
#undef SUBLANG_ENGLISH_NZ
#undef SUBLANG_ENGLISH_PHILIPPINES
#undef SUBLANG_ENGLISH_SINGAPORE
#undef SUBLANG_ENGLISH_SOUTH_AFRICA
#undef SUBLANG_ENGLISH_TRINIDAD
#undef SUBLANG_ENGLISH_UK
#undef SUBLANG_ENGLISH_US
#undef SUBLANG_ENGLISH_ZIMBABWE
#undef SUBLANG_ENGLISH_IRELAND
#undef SUBLANG_ESTONIAN_ESTONIA
#undef SUBLANG_FAEROESE_FAROE_ISLANDS
#undef SUBLANG_FILIPINO_PHILIPPINES
#undef SUBLANG_FINNISH_FINLAND
#undef SUBLANG_FRENCH_BELGIAN
#undef SUBLANG_FRENCH_CANADIAN
#undef SUBLANG_FRENCH_LUXEMBOURG
#undef SUBLANG_FRENCH_MONACO
#undef SUBLANG_FRENCH_SWISS
#undef SUBLANG_FRENCH
#undef SUBLANG_FRISIAN_NETHERLANDS
#undef SUBLANG_GALICIAN_GALICIAN
#undef SUBLANG_GEORGIAN_GEORGIA
#undef SUBLANG_GERMAN_AUSTRIAN
#undef SUBLANG_GERMAN_LIECHTENSTEIN
#undef SUBLANG_GERMAN_LUXEMBOURG
#undef SUBLANG_GERMAN_SWISS
#undef SUBLANG_GERMAN
#undef SUBLANG_GREEK_GREECE
#undef SUBLANG_GREENLANDIC_GREENLAND
#undef SUBLANG_GUJARATI_INDIA
#undef SUBLANG_HAUSA_NIGERIA_LATIN
#undef SUBLANG_HEBREW_ISRAEL
#undef SUBLANG_HINDI_INDIA
#undef SUBLANG_HUNGARIAN_HUNGARY
#undef SUBLANG_ICELANDIC_ICELAND
#undef SUBLANG_IGBO_NIGERIA
#undef SUBLANG_INDONESIAN_INDONESIA
#undef SUBLANG_INUKTITUT_CANADA_LATIN
#undef SUBLANG_INUKTITUT_CANADA
#undef SUBLANG_IRISH_IRELAND
#undef SUBLANG_ITALIAN_SWISS
#undef SUBLANG_ITALIAN
#undef SUBLANG_JAPANESE_JAPAN
#undef SUBLANG_KANNADA_INDIA
#undef SUBLANG_KASHMIRI_INDIA
#undef SUBLANG_KASHMIRI_SASIA
#undef SUBLANG_KAZAK_KAZAKHSTAN
#undef SUBLANG_KHMER_CAMBODIA
#undef SUBLANG_KICHE_GUATEMALA
#undef SUBLANG_KINYARWANDA_RWANDA
#undef SUBLANG_KONKANI_INDIA
#undef SUBLANG_KOREAN
#undef SUBLANG_KYRGYZ_KYRGYZSTAN
#undef SUBLANG_LAO_LAO
#undef SUBLANG_LATVIAN_LATVIA
#undef SUBLANG_LITHUANIAN_CLASSIC
#undef SUBLANG_LITHUANIAN
#undef SUBLANG_LOWER_SORBIAN_GERMANY
#undef SUBLANG_LUXEMBOURGISH_LUXEMBOURG
#undef SUBLANG_MACEDONIAN_MACEDONIA
#undef SUBLANG_MALAY_BRUNEI_DARUSSALAM
#undef SUBLANG_MALAY_MALAYSIA
#undef SUBLANG_MALAYALAM_INDIA
#undef SUBLANG_MALTESE_MALTA
#undef SUBLANG_MAORI_NEW_ZEALAND
#undef SUBLANG_MAPUDUNGUN_CHILE
#undef SUBLANG_MARATHI_INDIA
#undef SUBLANG_MOHAWK_MOHAWK
#undef SUBLANG_MONGOLIAN_CYRILLIC_MONGOLIA
#undef SUBLANG_MONGOLIAN_PRC
#undef SUBLANG_NEPALI_INDIA
#undef SUBLANG_NEPALI_NEPAL
#undef SUBLANG_NEUTRAL
#undef SUBLANG_NORWEGIAN_BOKMAL
#undef SUBLANG_NORWEGIAN_NYNORSK
#undef SUBLANG_OCCITAN_FRANCE
#undef SUBLANG_ORIYA_INDIA
#undef SUBLANG_PASHTO_AFGHANISTAN
#undef SUBLANG_PERSIAN_IRAN
#undef SUBLANG_POLISH_POLAND
#undef SUBLANG_PORTUGUESE_BRAZILIAN
#undef SUBLANG_PORTUGUESE
#undef SUBLANG_PUNJABI_INDIA
#undef SUBLANG_QUECHUA_BOLIVIA
#undef SUBLANG_QUECHUA_ECUADOR
#undef SUBLANG_QUECHUA_PERU
#undef SUBLANG_ROMANIAN_ROMANIA
#undef SUBLANG_ROMANSH_SWITZERLAND
#undef SUBLANG_RUSSIAN_RUSSIA
#undef SUBLANG_SAMI_INARI_FINLAND
#undef SUBLANG_SAMI_LULE_NORWAY
#undef SUBLANG_SAMI_LULE_SWEDEN
#undef SUBLANG_SAMI_NORTHERN_FINLAND
#undef SUBLANG_SAMI_NORTHERN_NORWAY
#undef SUBLANG_SAMI_NORTHERN_SWEDEN
#undef SUBLANG_SAMI_SKOLT_FINLAND
#undef SUBLANG_SAMI_SOUTHERN_NORWAY
#undef SUBLANG_SAMI_SOUTHERN_SWEDEN
#undef SUBLANG_SANSKRIT_INDIA
#undef SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_CYRILLIC
#undef SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_LATIN
#undef SUBLANG_SERBIAN_CROATIA
#undef SUBLANG_SERBIAN_CYRILLIC
#undef SUBLANG_SERBIAN_LATIN
#undef SUBLANG_SINDHI_AFGHANISTAN
#undef SUBLANG_SINDHI_INDIA
#undef SUBLANG_SINDHI_PAKISTAN
#undef SUBLANG_SINHALESE_SRI_LANKA
#undef SUBLANG_SLOVAK_SLOVAKIA
#undef SUBLANG_SLOVENIAN_SLOVENIA
#undef SUBLANG_SOTHO_NORTHERN_SOUTH_AFRICA
#undef SUBLANG_SPANISH_ARGENTINA
#undef SUBLANG_SPANISH_BOLIVIA
#undef SUBLANG_SPANISH_CHILE
#undef SUBLANG_SPANISH_COLOMBIA
#undef SUBLANG_SPANISH_COSTA_RICA
#undef SUBLANG_SPANISH_DOMINICAN_REPUBLIC
#undef SUBLANG_SPANISH_ECUADOR
#undef SUBLANG_SPANISH_EL_SALVADOR
#undef SUBLANG_SPANISH_GUATEMALA
#undef SUBLANG_SPANISH_HONDURAS
#undef SUBLANG_SPANISH_MEXICAN
#undef SUBLANG_SPANISH_MODERN
#undef SUBLANG_SPANISH_NICARAGUA
#undef SUBLANG_SPANISH_PANAMA
#undef SUBLANG_SPANISH_PARAGUAY
#undef SUBLANG_SPANISH_PERU
#undef SUBLANG_SPANISH_PUERTO_RICO
#undef SUBLANG_SPANISH_URUGUAY
#undef SUBLANG_SPANISH_US
#undef SUBLANG_SPANISH_VENEZUELA
#undef SUBLANG_SPANISH
#undef SUBLANG_SWAHILI_KENYA
#undef SUBLANG_SWEDISH_FINLAND
#undef SUBLANG_SWEDISH
#undef SUBLANG_SYRIAC_SYRIA
#undef SUBLANG_SYS_DEFAULT
#undef SUBLANG_TAJIK_TAJIKISTAN
#undef SUBLANG_TAMAZIGHT_ALGERIA_LATIN
#undef SUBLANG_TAMIL_INDIA
#undef SUBLANG_TATAR_RUSSIA
#undef SUBLANG_TELUGU_INDIA
#undef SUBLANG_THAI_THAILAND
#undef SUBLANG_TIBETAN_PRC
#undef SUBLANG_TIGRIGNA_ERITREA
#undef SUBLANG_TSWANA_SOUTH_AFRICA
#undef SUBLANG_TURKISH_TURKEY
#undef SUBLANG_TURKMEN_TURKMENISTAN
#undef SUBLANG_UI_CUSTOM_DEFAULT
#undef SUBLANG_UIGHUR_PRC
#undef SUBLANG_UKRAINIAN_UKRAINE
#undef SUBLANG_UPPER_SORBIAN_GERMANY
#undef SUBLANG_URDU_INDIA
#undef SUBLANG_URDU_PAKISTAN
#undef SUBLANG_UZBEK_CYRILLIC
#undef SUBLANG_UZBEK_LATIN
#undef SUBLANG_VIETNAMESE_VIETNAM
#undef SUBLANG_WELSH_UNITED_KINGDOM
#undef SUBLANG_WOLOF_SENEGAL
#undef SUBLANG_XHOSA_SOUTH_AFRICA
#undef SUBLANG_YAKUT_RUSSIA
#undef SUBLANG_YI_PRC
#undef SUBLANG_YORUBA_NIGERIA
#undef SUBLANG_ZULU_SOUTH_AFRICA
#undef SUBLANG_PULAR_SENEGAL
#undef SUBLANG_PUNJABI_PAKISTAN
#undef SUBLANG_TSWANA_BOTSWANA
#undef SUBLANG_TAMIL_SRI_LANKA
#undef SUBLANG_TIGRINYA_ETHIOPIA
#undef SUBLANG_TIGRINYA_ERITREA
#undef SUBLANG_VALENCIAN_VALENCIA

#undef WS_EX_DLGMODALFRAME
#undef WS_EX_NOPARENTNOTIFY
#undef WS_EX_TOPMOST
#undef WS_EX_ACCEPTFILES
#undef WS_EX_TRANSPARENT
#undef WS_EX_MDICHILD
#undef WS_EX_TOOLWINDOW
#undef WS_EX_WINDOWEDGE
#undef WS_EX_CLIENTEDGE
#undef WS_EX_CONTEXTHELP
#undef WS_EX_RIGHT
#undef WS_EX_LEFT
#undef WS_EX_RTLREADING
#undef WS_EX_LTRREADING
#undef WS_EX_LEFTSCROLLBAR
#undef WS_EX_RIGHTSCROLLBAR
#undef WS_EX_CONTROLPARENT
#undef WS_EX_STATICEDGE
#undef WS_EX_APPWINDOW


#undef WS_OVERLAPPED
#undef WS_POPUP
#undef WS_CHILD
#undef WS_MINIMIZE
#undef WS_VISIBLE
#undef WS_DISABLED
#undef WS_CLIPSIBLINGS
#undef WS_CLIPCHILDREN
#undef WS_MAXIMIZE
#undef WS_CAPTION
#undef WS_BORDER
#undef WS_DLGFRAME
#undef WS_VSCROLL
#undef WS_HSCROLL
#undef WS_SYSMENU
#undef WS_THICKFRAME
#undef WS_GROUP
#undef WS_TABSTOP
#undef WS_MINIMIZEBOX
#undef WS_MAXIMIZEBOX

#undef DS_ABSALIGN
#undef DS_SYSMODAL
#undef DS_LOCALEDIT
#undef DS_SETFONT
#undef DS_MODALFRAME
#undef DS_NOIDLEMSG
#undef DS_SETFOREGROUND
#undef DS_3DLOOK
#undef DS_FIXEDSYS
#undef DS_NOFAILCREATE
#undef DS_CONTROL
#undef DS_CENTER
#undef DS_CENTERMOUSE
#undef DS_CONTEXTHELP
#undef DS_SHELLFONT

#undef VOS_UNKNOWN
#undef VOS_DOS
#undef VOS_NT
#undef VOS__WINDOWS16
#undef VOS__WINDOWS32
#undef VOS_OS216
#undef VOS_OS232
#undef VOS__PM16
#undef VOS__PM32
#undef VOS_DOS_WINDOWS16
#undef VOS_DOS_WINDOWS32
#undef VOS_NT_WINDOWS32
#undef VOS_OS216_PM16
#undef VOS_OS232_PM32

#undef VS_FF_DEBUG
#undef VS_FF_INFOINFERRED
#undef VS_FF_PATCHED
#undef VS_FF_PRERELEASE
#undef VS_FF_PRIVATEBUILD
#undef VS_FF_SPECIALBUILD

#undef VFT_APP
#undef VFT_DLL
#undef VFT_DRV
#undef VFT_FONT
#undef VFT_STATIC_LIB
#undef VFT_UNKNOWN
#undef VFT_VXD

#undef VFT2_DRV_COMM
#undef VFT2_DRV_DISPLAY
#undef VFT2_DRV_INSTALLABLE
#undef VFT2_DRV_KEYBOARD
#undef VFT2_DRV_LANGUAGE
#undef VFT2_DRV_MOUSE
#undef VFT2_DRV_NETWORK
#undef VFT2_DRV_PRINTER
#undef VFT2_DRV_SOUND
#undef VFT2_DRV_SYSTEM
#undef VFT2_DRV_VERSIONED_PRINTER
#undef VFT2_FONT_RASTER
#undef VFT2_FONT_TRUETYPE
#undef VFT2_FONT_VECTOR
#undef VFT2_UNKNOWN

#undef FVIRTKEY
#undef FNOINVERT
#undef FSHIFT
#undef FCONTROL
#undef FALT
#undef END

#undef VK_LBUTTON
#undef VK_RBUTTON
#undef VK_CANCEL
#undef VK_MBUTTON
#undef VK_XBUTTON1
#undef VK_XBUTTON2
#undef VK_BACK
#undef VK_TAB
#undef VK_CLEAR
#undef VK_RETURN
#undef VK_SHIFT
#undef VK_CONTROL
#undef VK_MENU
#undef VK_PAUSE
#undef VK_CAPITAL
#undef VK_KANA
#undef VK_HANGUEL
#undef VK_HANGUL
#undef VK_IME_ON
#undef VK_JUNJA
#undef VK_FINAL
#undef VK_HANJA
#undef VK_KANJI
#undef VK_IME_OFF
#undef VK_ESCAPE
#undef VK_CONVERT
#undef VK_NONCONVERT
#undef VK_ACCEPT
#undef VK_MODECHANGE
#undef VK_SPACE
#undef VK_PRIOR
#undef VK_NEXT
#undef VK_END
#undef VK_HOME
#undef VK_LEFT
#undef VK_UP
#undef VK_RIGHT
#undef VK_DOWN
#undef VK_SELECT
#undef VK_PRINT
#undef VK_EXECUTE
#undef VK_SNAPSHOT
#undef VK_INSERT
#undef VK_DELETE
#undef VK_HELP
#undef VK_0
#undef VK_1
#undef VK_2
#undef VK_3
#undef VK_4
#undef VK_5
#undef VK_6
#undef VK_7
#undef VK_8
#undef VK_9
#undef VK_A
#undef VK_B
#undef VK_C
#undef VK_D
#undef VK_E
#undef VK_F
#undef VK_G
#undef VK_H
#undef VK_I
#undef VK_J
#undef VK_K
#undef VK_L
#undef VK_M
#undef VK_N
#undef VK_O
#undef VK_P
#undef VK_Q
#undef VK_R
#undef VK_S
#undef VK_T
#undef VK_U
#undef VK_V
#undef VK_W
#undef VK_X
#undef VK_Y
#undef VK_Z
#undef VK_LWIN
#undef VK_RWIN
#undef VK_APPS
#undef VK_SLEEP
#undef VK_NUMPAD0
#undef VK_NUMPAD1
#undef VK_NUMPAD2
#undef VK_NUMPAD3
#undef VK_NUMPAD4
#undef VK_NUMPAD5
#undef VK_NUMPAD6
#undef VK_NUMPAD7
#undef VK_NUMPAD8
#undef VK_NUMPAD9
#undef VK_MULTIPLY
#undef VK_ADD
#undef VK_SEPARATOR
#undef VK_SUBTRACT
#undef VK_DECIMAL
#undef VK_DIVIDE
#undef VK_F1
#undef VK_F2
#undef VK_F3
#undef VK_F4
#undef VK_F5
#undef VK_F6
#undef VK_F7
#undef VK_F8
#undef VK_F9
#undef VK_F10
#undef VK_F11
#undef VK_F12
#undef VK_F13
#undef VK_F14
#undef VK_F15
#undef VK_F16
#undef VK_F17
#undef VK_F18
#undef VK_F19
#undef VK_F20
#undef VK_F21
#undef VK_F22
#undef VK_F23
#undef VK_F24
#undef VK_NUMLOCK
#undef VK_SCROLL
#undef VK_LSHIFT
#undef VK_RSHIFT
#undef VK_LCONTROL
#undef VK_RCONTROL
#undef VK_LMENU
#undef VK_RMENU
#undef VK_BROWSER_BACK
#undef VK_BROWSER_FORWARD
#undef VK_BROWSER_REFRESH
#undef VK_BROWSER_STOP
#undef VK_BROWSER_SEARCH
#undef VK_BROWSER_FAVORITES
#undef VK_BROWSER_HOME
#undef VK_VOLUME_MUTE
#undef VK_VOLUME_DOWN
#undef VK_VOLUME_UP
#undef VK_MEDIA_NEXT_TRACK
#undef VK_MEDIA_PREV_TRACK
#undef VK_MEDIA_STOP
#undef VK_MEDIA_PLAY_PAUSE
#undef VK_LAUNCH_MAIL
#undef VK_LAUNCH_MEDIA_SELECT
#undef VK_LAUNCH_APP1
#undef VK_LAUNCH_APP2
#undef VK_OEM_1
#undef VK_OEM_PLUS
#undef VK_OEM_COMMA
#undef VK_OEM_MINUS
#undef VK_OEM_PERIOD
#undef VK_OEM_2
#undef VK_OEM_4
#undef VK_OEM_5
#undef VK_OEM_6
#undef VK_OEM_7
#undef VK_OEM_8
#undef VK_OEM_102
#undef VK_PROCESSKEY
#undef VK_PACKET
#undef VK_ATTN
#undef VK_CRSEL
#undef VK_EXSEL
#undef VK_EREOF
#undef VK_PLAY
#undef VK_ZOOM
#undef VK_NONAME
#undef VK_PA1
#undef VK_OEM_CLEAR

#endif
