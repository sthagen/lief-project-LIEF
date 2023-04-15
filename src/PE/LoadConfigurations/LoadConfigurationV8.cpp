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
#include <iomanip>

#include "LIEF/PE/hash.hpp"

#include "LIEF/PE/LoadConfigurations/LoadConfigurationV8.hpp"

namespace LIEF {
namespace PE {

LoadConfigurationV8& LoadConfigurationV8::operator=(const LoadConfigurationV8&) = default;
LoadConfigurationV8::LoadConfigurationV8(const LoadConfigurationV8&) = default;
LoadConfigurationV8::~LoadConfigurationV8() = default;

LoadConfigurationV8::LoadConfigurationV8() = default;

void LoadConfigurationV8::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

bool LoadConfigurationV8::operator==(const LoadConfigurationV8& rhs) const {
  if (this == &rhs) {
    return true;
  }
  size_t hash_lhs = Hash::hash(*this);
  size_t hash_rhs = Hash::hash(rhs);
  return hash_lhs == hash_rhs;
}

bool LoadConfigurationV8::operator!=(const LoadConfigurationV8& rhs) const {
  return !(*this == rhs);
}

std::ostream& LoadConfigurationV8::print(std::ostream& os) const {
  LoadConfigurationV7::print(os);

  os << std::setw(LoadConfiguration::PRINT_WIDTH) << std::setfill(' ') <<
        "Volatile Metadata Pointer:" << std::hex << volatile_metadata_pointer() << std::endl;
  return os;
}


} // namespace PE
} // namespace LIEF

