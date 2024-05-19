/* Copyright 2017 - 2024 R. Thomas
 * Copyright 2017 - 2024 Quarkslab
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

#include "LIEF/PE/ResourceDirectory.hpp"
#include "PE/Structures.hpp"

namespace LIEF {
namespace PE {

void ResourceDirectory::swap(ResourceDirectory& other) noexcept {
  ResourceNode::swap(other);
  std::swap(characteristics_,       other.characteristics_);
  std::swap(timedatestamp_,         other.timedatestamp_);
  std::swap(majorversion_,          other.majorversion_);
  std::swap(numberof_id_entries_,   other.numberof_id_entries_);
  std::swap(numberof_name_entries_, other.numberof_name_entries_);
  std::swap(numberof_id_entries_,   other.numberof_id_entries_);
}

ResourceDirectory::ResourceDirectory(const details::pe_resource_directory_table& header) :
  ResourceNode(ResourceNode::TYPE::DIRECTORY),
  characteristics_(header.Characteristics),
  timedatestamp_(header.TimeDateStamp),
  majorversion_(header.MajorVersion),
  minorversion_(header.MajorVersion),
  numberof_name_entries_(header.NumberOfNameEntries),
  numberof_id_entries_(header.NumberOfIDEntries)
{}

void ResourceDirectory::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const ResourceDirectory& directory) {
  os << static_cast<const ResourceNode&>(directory) << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Characteristics :"        << directory.characteristics()       << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Time/Date stamp :"        << directory.time_date_stamp()       << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Major version :"          << directory.major_version()         << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Minor version :"          << directory.minor_version()         << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Number of name entries :" << directory.numberof_name_entries() << '\n';
  os << "    " << std::setw(26) << std::left << std::setfill(' ') << "Number of id entries :"   << directory.numberof_id_entries()   << '\n';
  return os;
}

}
}
