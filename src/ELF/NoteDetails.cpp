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
#include <sstream>

#include "LIEF/ELF/hash.hpp"

#include "LIEF/ELF/NoteDetails.hpp"
#include "LIEF/ELF/Note.hpp"

namespace LIEF {
namespace ELF {

NoteDetails::~NoteDetails() = default;
NoteDetails::NoteDetails() = default;

NoteDetails::NoteDetails(Note& note):
  note_{&note}
{}

NoteDetails* NoteDetails::clone() const {
  return new NoteDetails(*this);
}

const Note::description_t& NoteDetails::description() const {
  if (note_ == nullptr) {
    return empty_;
  }
  return note_->description();
}

Note::description_t& NoteDetails::description() {
  if (note_ == nullptr) {
    return empty_;
  }
  return note_->description();
}


Binary* NoteDetails::binary() {
  return const_cast<Binary*>(static_cast<const NoteDetails*>(this)->binary());
}


const Binary* NoteDetails::binary() const {
  if (note_ == nullptr) {
    return nullptr;
  }
  return note_->binary_;
}

void NoteDetails::accept(Visitor& visitor) const {
  visitor.visit(*this);
}





void NoteDetails::dump(std::ostream&) const {
}

void NoteDetails::parse() {
}

void NoteDetails::build() {
}


std::ostream& operator<<(std::ostream& os, const NoteDetails& note) {
  note.dump(os);
  return os;

}

} // namespace ELF
} // namespace LIEF
