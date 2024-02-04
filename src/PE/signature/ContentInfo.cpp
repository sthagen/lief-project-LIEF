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
#include "LIEF/Visitor.hpp"
#include "LIEF/PE/signature/ContentInfo.hpp"
#include "LIEF/PE/EnumToString.hpp"
#include "LIEF/PE/signature/SpcIndirectData.hpp"
#include "LIEF/utils.hpp"

#include "Object.tcc"
#include "internal_utils.hpp"

#include <ostream>

namespace LIEF {
namespace PE {

ContentInfo::ContentInfo() = default;
ContentInfo::~ContentInfo() = default;

ContentInfo::Content::~Content() = default;

ContentInfo::ContentInfo(ContentInfo&& other) = default;

ContentInfo::ContentInfo(const ContentInfo& other) :
  Object::Object(other),
  value_{other.value_->clone()}
{}

ContentInfo& ContentInfo::operator=(ContentInfo other) {
  swap(other);
  return *this;
}

void ContentInfo::swap(ContentInfo& other) {
  std::swap(value_, other.value_);
}

void ContentInfo::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

std::vector<uint8_t> ContentInfo::digest() const {
  if (SpcIndirectData::classof(value_.get())) {
    const auto* spc_ind_data = value_->as<SpcIndirectData>();
    return as_vector(spc_ind_data->digest());
  }
  return {};
}

ALGORITHMS ContentInfo::digest_algorithm() const {
  if (SpcIndirectData::classof(value_.get())) {
    const auto* spc_ind_data = value_->as<SpcIndirectData>();
    return spc_ind_data->digest_algorithm();
  }
  return ALGORITHMS::UNKNOWN;
}

std::ostream& operator<<(std::ostream& os, const ContentInfo& content_info) {
  content_info.value().print(os);
  return os;
}

}
}
