/* Copyright 2021 R. Thomas
 * Copyright 2021 Quarkslab
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

#include "LIEF/PE/signature/RsaInfo.hpp"

#include <algorithm>
#include <fstream>

#include <mbedtls/x509.h>
#include <mbedtls/asn1.h>
#include <mbedtls/oid.h>
#include <mbedtls/rsa.h>
#include <mbedtls/pk.h>


namespace LIEF {
namespace PE {

RsaInfo::RsaInfo(void) = default;

RsaInfo::RsaInfo(const RsaInfo::rsa_ctx_handle ctx) {
  const mbedtls_rsa_context* pctx = reinterpret_cast<const mbedtls_rsa_context*>(ctx);
  mbedtls_rsa_context* local_ctx = new mbedtls_rsa_context{};
  mbedtls_rsa_init(local_ctx);
  mbedtls_rsa_set_padding(local_ctx, pctx->private_padding,
                          static_cast<mbedtls_md_type_t>(pctx->private_hash_id));
  mbedtls_rsa_copy(local_ctx, pctx);
  mbedtls_rsa_complete(local_ctx);
  this->ctx_ = reinterpret_cast<RsaInfo::rsa_ctx_handle>(local_ctx);
}

RsaInfo::RsaInfo(const RsaInfo& other)
{
  if (other.ctx_ != nullptr) {
    const mbedtls_rsa_context* octx = reinterpret_cast<const mbedtls_rsa_context*>(other.ctx_);
    mbedtls_rsa_context* local_ctx = new mbedtls_rsa_context{};
    mbedtls_rsa_init(local_ctx);
    mbedtls_rsa_set_padding(local_ctx, octx->private_padding,
                            static_cast<mbedtls_md_type_t>(octx->private_hash_id));
    mbedtls_rsa_copy(local_ctx, octx);
    mbedtls_rsa_complete(local_ctx);
    this->ctx_ = reinterpret_cast<RsaInfo::rsa_ctx_handle>(local_ctx);
  }
}


RsaInfo::RsaInfo(RsaInfo&& other) :
  ctx_{std::move(other.ctx_)}
{}

RsaInfo& RsaInfo::operator=(RsaInfo other) {
  this->swap(other);
  return *this;
}

void RsaInfo::swap(RsaInfo& other) {
  std::swap(this->ctx_, other.ctx_);
}

RsaInfo::operator bool() const {
  return this->ctx_ != nullptr;
}

bool RsaInfo::has_public_key(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  return mbedtls_rsa_check_pubkey(lctx) == 0;
}

bool RsaInfo::has_private_key(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  return mbedtls_rsa_check_privkey(lctx) == 0;
}


RsaInfo::bignum_wrapper_t RsaInfo::N(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  bignum_wrapper_t N(mbedtls_mpi_bitlen(&lctx->private_N));
  mbedtls_mpi_write_binary(&lctx->private_N, N.data(), N.size());
  return N;
}

RsaInfo::bignum_wrapper_t RsaInfo::E(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  bignum_wrapper_t E(mbedtls_mpi_bitlen(&lctx->private_E));
  mbedtls_mpi_write_binary(&lctx->private_E, E.data(), E.size());
  return E;
}

RsaInfo::bignum_wrapper_t RsaInfo::D(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  bignum_wrapper_t D(mbedtls_mpi_bitlen(&lctx->private_D));
  mbedtls_mpi_write_binary(&lctx->private_D, D.data(), D.size());
  return D;
}

RsaInfo::bignum_wrapper_t RsaInfo::P(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  bignum_wrapper_t P(mbedtls_mpi_bitlen(&lctx->private_P));
  mbedtls_mpi_write_binary(&lctx->private_P, P.data(), P.size());
  return P;
}

RsaInfo::bignum_wrapper_t RsaInfo::Q(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  bignum_wrapper_t Q(mbedtls_mpi_bitlen(&lctx->private_Q));
  mbedtls_mpi_write_binary(&lctx->private_Q, Q.data(), Q.size());
  return Q;
}

size_t RsaInfo::key_size(void) const {
  mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
  return mbedtls_rsa_get_len(lctx) * 8;
}


RsaInfo::~RsaInfo(void) {
  if (this->ctx_ != nullptr) {
    mbedtls_rsa_context* lctx = reinterpret_cast<mbedtls_rsa_context*>(this->ctx_);
    mbedtls_rsa_free(lctx);
    delete lctx;
  }
}


std::ostream& operator<<(std::ostream& os, const RsaInfo& info) {
  if (not info) {
    os << "<Empty>";
  } else {
    // TODO
  }

  return os;
}

}
}
