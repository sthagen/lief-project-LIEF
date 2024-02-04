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
#include "LIEF/PE/debug/Repro.hpp"
#include "LIEF/Visitor.hpp"

#include <spdlog/fmt/fmt.h>
#include <spdlog/fmt/ranges.h>

namespace LIEF {
namespace PE {

Repro::Repro(const Repro&) = default;
Repro& Repro::operator=(const Repro&) = default;
Repro::~Repro() = default;

void Repro::accept(Visitor& visitor) const {
  visitor.visit(*this);
}

std::ostream& operator<<(std::ostream& os, const Repro& entry) {
  os << fmt::format("Hash: {}", entry.hash());
  return os;
}

} // namespace PE
} // namespace LIEF
