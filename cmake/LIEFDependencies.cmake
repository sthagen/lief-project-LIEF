if(__add_lief_dependencies)
  return()
endif()
set(__add_lief_dependencies ON)

# Json
# ----
if(LIEF_ENABLE_JSON)
  if(NOT LIEF_OPT_NLOHMANN_JSON_EXTERNAL)
    set(LIBJSON_VERSION 3.11.2)
    set(LIBJSON_SHA256 SHA256=62b1d12b8c7e4afcf96827d05426ca6d9184b9eefdfac512dd533726b98ad8f7)
    set(LIBJSON_URL "${THIRD_PARTY_DIRECTORY}/json-${LIBJSON_VERSION}.zip" CACHE STRING "URL to the JSON lib repo")
    ExternalProject_Add(lief_libjson
      URL               ${LIBJSON_URL}
      URL_HASH          ${LIBJSON_SHA256}
      UPDATE_COMMAND    ""
      CONFIGURE_COMMAND ""
      BUILD_COMMAND     ""
      INSTALL_COMMAND   "")

    ExternalProject_get_property(lief_libjson SOURCE_DIR)
    set(LIBJSON_SOURCE_DIR "${SOURCE_DIR}")
  endif()
  message(STATUS "Enable JSON support")
  set(ENABLE_JSON_SUPPORT 1)
else()
  message(STATUS "Disable JSON support")
  set(ENABLE_JSON_SUPPORT 0)
endif()


# mbed TLS
# --------
if(NOT LIEF_OPT_MBEDTLS_EXTERNAL)
  set(MBED_TLS_VERSION 3.2.1)
  set(MBED_TLS_SHA256 SHA256=efeac7fb687d19a7c7dc60f5e60265edd528244856cf3db2e2aecacece08b23f)
  set(MBED_TLS_URL "${THIRD_PARTY_DIRECTORY}/mbedtls-${MBED_TLS_VERSION}.zip" CACHE STRING "URL to MbedTLS")
  set(MBED_TLS_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/mbed_tls")


  ExternalProject_Add(lief_mbed_tls
    PREFIX            ${MBED_TLS_PREFIX}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND     ""
    INSTALL_COMMAND   ""
    URL               ${MBED_TLS_URL}
    URL_HASH          ${MBED_TLS_SHA256}
    UPDATE_COMMAND    "" # repetitive update are a pain
    BUILD_BYPRODUCTS  ${MBED_TLS_PREFIX})

  ExternalProject_get_property(lief_mbed_tls SOURCE_DIR)
  set(MBEDTLS_SOURCE_DIR "${SOURCE_DIR}")
  set(MBEDTLS_INCLUDE_DIRS "${MBEDTLS_SOURCE_DIR}/include")

  set(mbedtls_src_crypto
    "${MBEDTLS_SOURCE_DIR}/library/aes.c"
    "${MBEDTLS_SOURCE_DIR}/library/aesni.c"
    "${MBEDTLS_SOURCE_DIR}/library/aria.c"
    "${MBEDTLS_SOURCE_DIR}/library/asn1parse.c"
    "${MBEDTLS_SOURCE_DIR}/library/asn1write.c"
    "${MBEDTLS_SOURCE_DIR}/library/base64.c"
    "${MBEDTLS_SOURCE_DIR}/library/bignum.c"
    "${MBEDTLS_SOURCE_DIR}/library/camellia.c"
    "${MBEDTLS_SOURCE_DIR}/library/ccm.c"
    "${MBEDTLS_SOURCE_DIR}/library/chacha20.c"
    "${MBEDTLS_SOURCE_DIR}/library/chachapoly.c"
    "${MBEDTLS_SOURCE_DIR}/library/cipher.c"
    "${MBEDTLS_SOURCE_DIR}/library/cipher_wrap.c"
    "${MBEDTLS_SOURCE_DIR}/library/constant_time.c"
    "${MBEDTLS_SOURCE_DIR}/library/cmac.c"
    "${MBEDTLS_SOURCE_DIR}/library/ctr_drbg.c"
    "${MBEDTLS_SOURCE_DIR}/library/des.c"
    "${MBEDTLS_SOURCE_DIR}/library/dhm.c"
    "${MBEDTLS_SOURCE_DIR}/library/ecdh.c"
    "${MBEDTLS_SOURCE_DIR}/library/ecdsa.c"
    "${MBEDTLS_SOURCE_DIR}/library/ecjpake.c"
    "${MBEDTLS_SOURCE_DIR}/library/ecp.c"
    "${MBEDTLS_SOURCE_DIR}/library/ecp_curves.c"
    "${MBEDTLS_SOURCE_DIR}/library/entropy.c"
    "${MBEDTLS_SOURCE_DIR}/library/entropy_poll.c"
    "${MBEDTLS_SOURCE_DIR}/library/error.c"
    "${MBEDTLS_SOURCE_DIR}/library/gcm.c"
    "${MBEDTLS_SOURCE_DIR}/library/hkdf.c"
    "${MBEDTLS_SOURCE_DIR}/library/hmac_drbg.c"
    "${MBEDTLS_SOURCE_DIR}/library/md.c"
    "${MBEDTLS_SOURCE_DIR}/library/md5.c"
    "${MBEDTLS_SOURCE_DIR}/library/memory_buffer_alloc.c"
    "${MBEDTLS_SOURCE_DIR}/library/mps_reader.c"
    "${MBEDTLS_SOURCE_DIR}/library/mps_trace.c"
    "${MBEDTLS_SOURCE_DIR}/library/nist_kw.c"
    "${MBEDTLS_SOURCE_DIR}/library/oid.c"
    "${MBEDTLS_SOURCE_DIR}/library/padlock.c"
    "${MBEDTLS_SOURCE_DIR}/library/pem.c"
    "${MBEDTLS_SOURCE_DIR}/library/pk.c"
    "${MBEDTLS_SOURCE_DIR}/library/pk_wrap.c"
    "${MBEDTLS_SOURCE_DIR}/library/pkcs12.c"
    "${MBEDTLS_SOURCE_DIR}/library/pkcs5.c"
    "${MBEDTLS_SOURCE_DIR}/library/pkparse.c"
    "${MBEDTLS_SOURCE_DIR}/library/pkwrite.c"
    "${MBEDTLS_SOURCE_DIR}/library/platform.c"
    "${MBEDTLS_SOURCE_DIR}/library/platform_util.c"
    "${MBEDTLS_SOURCE_DIR}/library/poly1305.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_aead.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_cipher.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_client.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_driver_wrappers.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_ecp.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_hash.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_mac.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_rsa.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_se.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_slot_management.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_crypto_storage.c"
    "${MBEDTLS_SOURCE_DIR}/library/psa_its_file.c"
    "${MBEDTLS_SOURCE_DIR}/library/ripemd160.c"
    "${MBEDTLS_SOURCE_DIR}/library/rsa.c"
    "${MBEDTLS_SOURCE_DIR}/library/rsa_alt_helpers.c"
    "${MBEDTLS_SOURCE_DIR}/library/sha1.c"
    "${MBEDTLS_SOURCE_DIR}/library/sha256.c"
    "${MBEDTLS_SOURCE_DIR}/library/sha512.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_debug_helpers_generated.c"
    "${MBEDTLS_SOURCE_DIR}/library/threading.c"
    "${MBEDTLS_SOURCE_DIR}/library/timing.c"
    "${MBEDTLS_SOURCE_DIR}/library/version.c"
    "${MBEDTLS_SOURCE_DIR}/library/version_features.c"
  )

  set(mbedtls_src_x509
      #"${MBEDTLS_SOURCE_DIR}/library/certs.c"
      #"${MBEDTLS_SOURCE_DIR}/library/pkcs11.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509_create.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509_crl.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509_crt.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509_csr.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509write_crt.c"
      "${MBEDTLS_SOURCE_DIR}/library/x509write_csr.c"
  )

  set(mbedtls_src_tls
    "${MBEDTLS_SOURCE_DIR}/library/debug.c"
    "${MBEDTLS_SOURCE_DIR}/library/net_sockets.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_cache.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_ciphersuites.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_client.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_cookie.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_msg.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_ticket.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls12_client.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls12_server.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls13_keys.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls13_server.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls13_client.c"
    "${MBEDTLS_SOURCE_DIR}/library/ssl_tls13_generic.c"
  )
endif()

add_library(lief_spdlog INTERFACE)

if(LIEF_EXTERNAL_SPDLOG)
  find_package(spdlog REQUIRED)
  list(APPEND CMAKE_MODULE_PATH "${SPDLOG_DIR}/cmake")
  target_link_libraries(lief_spdlog INTERFACE spdlog::spdlog)
  get_target_property(SPDLOG_INC_DIR spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)
  target_include_directories(lief_spdlog SYSTEM INTERFACE ${SPDLOG_INC_DIR})
else()
  set(SPDLOG_VERSION 1.11.0)
  set(SPDLOG_SHA256 SHA256=33f83c6b86ec0fbbd0eb0f4e980da6767494dc0ad063900bcfae8bc3e9c75f21)
  set(SPDLOG_URL "${THIRD_PARTY_DIRECTORY}/spdlog-${SPDLOG_VERSION}.zip" CACHE STRING "URL to the spdlog source")
  ExternalProject_Add(lief_spdlog_project
    URL               ${SPDLOG_URL}
    URL_HASH          ${SPDLOG_SHA256}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND     ""
    UPDATE_COMMAND    ""
    INSTALL_COMMAND   "")

  ExternalProject_get_property(lief_spdlog_project SOURCE_DIR)
  set(SPDLOG_SOURCE_DIR "${SOURCE_DIR}")
  add_dependencies(lief_spdlog lief_spdlog_project)
  target_include_directories(lief_spdlog SYSTEM INTERFACE "$<BUILD_INTERFACE:${SPDLOG_SOURCE_DIR}/include>")
endif()

# Frozen
# ------
set(LIEF_FROZEN_ENABLED 0)

if (LIEF_SUPPORT_CXX14 AND NOT LIEF_DISABLE_FROZEN)
  message(STATUS "Enable Frozen (C++14 support)")
  set(LIEF_FROZEN_ENABLED 1)

  if (NOT LIEF_OPT_FROZEN_EXTERNAL)
    set(FROZEN_VERSION f6dbec6)
    set(FROZEN_SHA256 SHA256=f961ec0f403d7720da12ec25a39790211d0bcecc342177838f3dd1fa6adb8ac3)
    set(FROZEN_URL "${THIRD_PARTY_DIRECTORY}/frozen-${FROZEN_VERSION}.zip" CACHE STRING "URL to Frozen")
    ExternalProject_Add(lief_frozen
      URL               ${FROZEN_URL}
      URL_HASH          ${FROZEN_SHA256}
      CONFIGURE_COMMAND ""
      BUILD_COMMAND     ""
      UPDATE_COMMAND    ""
      INSTALL_COMMAND   "")

    ExternalProject_get_property(lief_frozen SOURCE_DIR)
    set(FROZEN_INCLUDE_DIR "${SOURCE_DIR}/include")
  endif()
endif()


# Boost leaf
# ----------
if(NOT LIEF_EXTERNAL_LEAF)
  set(LEAF_VERSION 1.81.0)
  set(LEAF_SHA256 SHA256=7974ad4d440114e1affd40067166a319cb5ea7309e03bf6622f20bc012ec46fc)
  set(LEAF_URL "${THIRD_PARTY_DIRECTORY}/leaf-${LEAF_VERSION}.zip" CACHE STRING "URL to Leaf")
  ExternalProject_Add(lief_leaf # :)
    URL               ${LEAF_URL}
    URL_HASH          ${LEAF_SHA256}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND     ""
    UPDATE_COMMAND    ""
    INSTALL_COMMAND   "")

  ExternalProject_get_property(lief_leaf SOURCE_DIR)
  set(LEAF_SRC_DIR "${SOURCE_DIR}")
endif()

# utfcpp
# ------
if(NOT LIEF_OPT_UTFCPP_EXTERNAL)
  set(UTFCPP_VERSION 3.2.1)
  set(UTFCPP_SHA256 SHA256=04dacc4717d1ef9741f8254d1c56faf57a514684923ec35b2b98378ef016b87a)
  set(UTFCPP_URL "${THIRD_PARTY_DIRECTORY}/utfcpp-${UTFCPP_VERSION}.zip" CACHE STRING "URL to UTFCPP")
  ExternalProject_Add(lief_utfcpp
    URL               ${UTFCPP_URL}
    URL_HASH          ${UTFCPP_SHA256}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND     ""
    UPDATE_COMMAND    ""
    INSTALL_COMMAND   "")

  ExternalProject_get_property(lief_utfcpp SOURCE_DIR)
  set(UTFCPP_INCLUDE_DIR "${SOURCE_DIR}/source")
endif()

# https://github.com/tcbrindle/span
# ---------------------------------
if(NOT LIEF_EXTERNAL_SPAN)
  set(TCB_SPAN_VERSION d6c6e30)
  set(TCB_SPAN_SHA256 SHA256=c31fed99ea01526af28f26bb9b77a86d21e8964748708d57cf55a8813e883fe3)
  set(TCB_SPAN_URL "${THIRD_PARTY_DIRECTORY}/tcb-span-${TCB_SPAN_VERSION}.zip" CACHE STRING "URL to tcb/span")
  ExternalProject_Add(lief_span
    URL               ${TCB_SPAN_URL}
    URL_HASH          ${TCB_SPAN_SHA256}
    CONFIGURE_COMMAND ""
    BUILD_COMMAND     ""
    UPDATE_COMMAND    ""
    INSTALL_COMMAND   "")

  ExternalProject_get_property(lief_span SOURCE_DIR)
  set(TCB_SPAN_SRC_DIR "${SOURCE_DIR}")
endif()
