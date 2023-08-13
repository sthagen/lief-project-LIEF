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
#ifndef C_LIEF_PE_SECTION_H_
#define C_LIEF_PE_SECTION_H_

#include <inttypes.h>

#include "LIEF/PE/enums.h"
/**  @defgroup pe_section_c_api Section
 *  @ingroup pe_c_api
 *  @addtogroup pe_section_c_api
 *  @brief Section C API
 *
 *  @{
 */

#ifdef __cplusplus
extern "C" {
#endif

enum LIEF_PE_SECTION_CHARACTERISTICS {
  LIEF_PE_SECTION_CHARACTERISTICS_TYPE_NO_PAD            = 0x00000008,
  LIEF_PE_SECTION_CHARACTERISTICS_CNT_CODE               = 0x00000020,
  LIEF_PE_SECTION_CHARACTERISTICS_CNT_INITIALIZED_DATA   = 0x00000040,
  LIEF_PE_SECTION_CHARACTERISTICS_CNT_UNINITIALIZED_DATA = 0x00000080,
  LIEF_PE_SECTION_CHARACTERISTICS_LNK_OTHER              = 0x00000100,
  LIEF_PE_SECTION_CHARACTERISTICS_LNK_INFO               = 0x00000200,
  LIEF_PE_SECTION_CHARACTERISTICS_LNK_REMOVE             = 0x00000800,
  LIEF_PE_SECTION_CHARACTERISTICS_LNK_COMDAT             = 0x00001000,
  LIEF_PE_SECTION_CHARACTERISTICS_GPREL                  = 0x00008000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_PURGEABLE          = 0x00010000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_16BIT              = 0x00020000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_LOCKED             = 0x00040000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_PRELOAD            = 0x00080000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_1BYTES           = 0x00100000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_2BYTES           = 0x00200000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_4BYTES           = 0x00300000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_8BYTES           = 0x00400000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_16BYTES          = 0x00500000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_32BYTES          = 0x00600000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_64BYTES          = 0x00700000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_128BYTES         = 0x00800000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_256BYTES         = 0x00900000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_512BYTES         = 0x00A00000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_1024BYTES        = 0x00B00000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_2048BYTES        = 0x00C00000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_4096BYTES        = 0x00D00000,
  LIEF_PE_SECTION_CHARACTERISTICS_ALIGN_8192BYTES        = 0x00E00000,
  LIEF_PE_SECTION_CHARACTERISTICS_LNK_NRELOC_OVFL        = 0x01000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_DISCARDABLE        = 0x02000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_NOT_CACHED         = 0x04000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_NOT_PAGED          = 0x08000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_SHARED             = 0x10000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_EXECUTE            = 0x20000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_READ               = 0x40000000,
  LIEF_PE_SECTION_CHARACTERISTICS_MEM_WRITE              = 0x80000000
};


struct Pe_Section_t {
  const char* name;
  uint64_t    virtual_address;
  uint64_t    size;
  uint64_t    offset;

  uint32_t    virtual_size;
  uint32_t    pointerto_relocation;
  uint32_t    pointerto_line_numbers;
  uint32_t    characteristics;

  uint8_t*    content;
  uint64_t    content_size;
  double      entropy;

};

typedef struct Pe_Section_t Pe_Section_t;

#ifdef __cplusplus
}
#endif

/** @} */
#endif
