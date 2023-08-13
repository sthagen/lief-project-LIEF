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
#ifndef LIEF_PE_ADVAPI32_DLL_LOOKUP_H
#define LIEF_PE_ADVAPI32_DLL_LOOKUP_H
#include <cstdint>

namespace LIEF {
namespace PE {

inline const char* advapi32_dll_lookup(uint32_t i) {
  switch(i) {
  case 0x0002: return "A_SHAFinal";
  case 0x0003: return "A_SHAInit";
  case 0x0004: return "A_SHAUpdate";
  case 0x0005: return "AbortSystemShutdownA";
  case 0x0006: return "AbortSystemShutdownW";
  case 0x0007: return "AccessCheck";
  case 0x0008: return "AccessCheckAndAuditAlarmA";
  case 0x0009: return "AccessCheckAndAuditAlarmW";
  case 0x000a: return "AccessCheckByType";
  case 0x000b: return "AccessCheckByTypeAndAuditAlarmA";
  case 0x000c: return "AccessCheckByTypeAndAuditAlarmW";
  case 0x000d: return "AccessCheckByTypeResultList";
  case 0x000e: return "AccessCheckByTypeResultListAndAuditAlarmA";
  case 0x000f: return "AccessCheckByTypeResultListAndAuditAlarmByHandleA";
  case 0x0010: return "AccessCheckByTypeResultListAndAuditAlarmByHandleW";
  case 0x0011: return "AccessCheckByTypeResultListAndAuditAlarmW";
  case 0x0012: return "AddAccessAllowedAce";
  case 0x0013: return "AddAccessAllowedAceEx";
  case 0x0014: return "AddAccessAllowedObjectAce";
  case 0x0015: return "AddAccessDeniedAce";
  case 0x0016: return "AddAccessDeniedAceEx";
  case 0x0017: return "AddAccessDeniedObjectAce";
  case 0x0018: return "AddAce";
  case 0x0019: return "AddAuditAccessAce";
  case 0x001a: return "AddAuditAccessAceEx";
  case 0x001b: return "AddAuditAccessObjectAce";
  case 0x001c: return "AddUsersToEncryptedFile";
  case 0x001d: return "AdjustTokenGroups";
  case 0x001e: return "AdjustTokenPrivileges";
  case 0x001f: return "AllocateAndInitializeSid";
  case 0x0020: return "AllocateLocallyUniqueId";
  case 0x0021: return "AreAllAccessesGranted";
  case 0x0022: return "AreAnyAccessesGranted";
  case 0x0023: return "BackupEventLogA";
  case 0x0024: return "BackupEventLogW";
  case 0x0025: return "BuildExplicitAccessWithNameA";
  case 0x0026: return "BuildExplicitAccessWithNameW";
  case 0x0027: return "BuildImpersonateExplicitAccessWithNameA";
  case 0x0028: return "BuildImpersonateExplicitAccessWithNameW";
  case 0x0029: return "BuildImpersonateTrusteeA";
  case 0x002a: return "BuildImpersonateTrusteeW";
  case 0x002b: return "BuildSecurityDescriptorA";
  case 0x002c: return "BuildSecurityDescriptorW";
  case 0x002d: return "BuildTrusteeWithNameA";
  case 0x002e: return "BuildTrusteeWithNameW";
  case 0x002f: return "BuildTrusteeWithObjectsAndNameA";
  case 0x0030: return "BuildTrusteeWithObjectsAndNameW";
  case 0x0031: return "BuildTrusteeWithObjectsAndSidA";
  case 0x0032: return "BuildTrusteeWithObjectsAndSidW";
  case 0x0033: return "BuildTrusteeWithSidA";
  case 0x0034: return "BuildTrusteeWithSidW";
  case 0x0035: return "CancelOverlappedAccess";
  case 0x0036: return "ChangeServiceConfig2A";
  case 0x0037: return "ChangeServiceConfig2W";
  case 0x0038: return "ChangeServiceConfigA";
  case 0x0039: return "ChangeServiceConfigW";
  case 0x003a: return "CheckTokenMembership";
  case 0x003b: return "ClearEventLogA";
  case 0x003c: return "ClearEventLogW";
  case 0x003d: return "CloseCodeAuthzLevel";
  case 0x003e: return "CloseEncryptedFileRaw";
  case 0x003f: return "CloseEventLog";
  case 0x0040: return "CloseServiceHandle";
  case 0x0041: return "CloseTrace";
  case 0x0042: return "CommandLineFromMsiDescriptor";
  case 0x0043: return "ComputeAccessTokenFromCodeAuthzLevel";
  case 0x0044: return "ControlService";
  case 0x0045: return "ControlTraceA";
  case 0x0046: return "ControlTraceW";
  case 0x0047: return "ConvertAccessToSecurityDescriptorA";
  case 0x0048: return "ConvertAccessToSecurityDescriptorW";
  case 0x0049: return "ConvertSDToStringSDRootDomainA";
  case 0x004a: return "ConvertSDToStringSDRootDomainW";
  case 0x004b: return "ConvertSecurityDescriptorToAccessA";
  case 0x004c: return "ConvertSecurityDescriptorToAccessNamedA";
  case 0x004d: return "ConvertSecurityDescriptorToAccessNamedW";
  case 0x004e: return "ConvertSecurityDescriptorToAccessW";
  case 0x004f: return "ConvertSecurityDescriptorToStringSecurityDescriptorA";
  case 0x0050: return "ConvertSecurityDescriptorToStringSecurityDescriptorW";
  case 0x0051: return "ConvertSidToStringSidA";
  case 0x0052: return "ConvertSidToStringSidW";
  case 0x0053: return "ConvertStringSDToSDDomainA";
  case 0x0054: return "ConvertStringSDToSDDomainW";
  case 0x0055: return "ConvertStringSDToSDRootDomainA";
  case 0x0056: return "ConvertStringSDToSDRootDomainW";
  case 0x0057: return "ConvertStringSecurityDescriptorToSecurityDescriptorA";
  case 0x0058: return "ConvertStringSecurityDescriptorToSecurityDescriptorW";
  case 0x0059: return "ConvertStringSidToSidA";
  case 0x005a: return "ConvertStringSidToSidW";
  case 0x005b: return "ConvertToAutoInheritPrivateObjectSecurity";
  case 0x005c: return "CopySid";
  case 0x005d: return "CreateCodeAuthzLevel";
  case 0x005e: return "CreatePrivateObjectSecurity";
  case 0x005f: return "CreatePrivateObjectSecurityEx";
  case 0x0060: return "CreatePrivateObjectSecurityWithMultipleInheritance";
  case 0x0061: return "CreateProcessAsUserA";
  case 0x0062: return "CreateProcessAsUserSecure";
  case 0x0063: return "CreateProcessAsUserW";
  case 0x0064: return "CreateProcessWithLogonW";
  case 0x0065: return "CreateRestrictedToken";
  case 0x0066: return "CreateServiceA";
  case 0x0067: return "CreateServiceW";
  case 0x0068: return "CreateTraceInstanceId";
  case 0x0069: return "CreateWellKnownSid";
  case 0x006a: return "CredDeleteA";
  case 0x006b: return "CredDeleteW";
  case 0x006c: return "CredEnumerateA";
  case 0x006d: return "CredEnumerateW";
  case 0x006e: return "CredFree";
  case 0x006f: return "CredGetSessionTypes";
  case 0x0070: return "CredGetTargetInfoA";
  case 0x0071: return "CredGetTargetInfoW";
  case 0x0072: return "CredIsMarshaledCredentialA";
  case 0x0073: return "CredIsMarshaledCredentialW";
  case 0x0074: return "CredMarshalCredentialA";
  case 0x0075: return "CredMarshalCredentialW";
  case 0x0076: return "CredProfileLoaded";
  case 0x0077: return "CredReadA";
  case 0x0078: return "CredReadDomainCredentialsA";
  case 0x0079: return "CredReadDomainCredentialsW";
  case 0x007a: return "CredReadW";
  case 0x007b: return "CredRenameA";
  case 0x007c: return "CredRenameW";
  case 0x007d: return "CredUnmarshalCredentialA";
  case 0x007e: return "CredUnmarshalCredentialW";
  case 0x007f: return "CredWriteA";
  case 0x0080: return "CredWriteDomainCredentialsA";
  case 0x0081: return "CredWriteDomainCredentialsW";
  case 0x0082: return "CredWriteW";
  case 0x0083: return "CredpConvertCredential";
  case 0x0084: return "CredpConvertTargetInfo";
  case 0x0085: return "CredpDecodeCredential";
  case 0x0086: return "CredpEncodeCredential";
  case 0x0087: return "CryptAcquireContextA";
  case 0x0088: return "CryptAcquireContextW";
  case 0x0089: return "CryptContextAddRef";
  case 0x008a: return "CryptCreateHash";
  case 0x008b: return "CryptDecrypt";
  case 0x008c: return "CryptDeriveKey";
  case 0x008d: return "CryptDestroyHash";
  case 0x008e: return "CryptDestroyKey";
  case 0x008f: return "CryptDuplicateHash";
  case 0x0090: return "CryptDuplicateKey";
  case 0x0091: return "CryptEncrypt";
  case 0x0092: return "CryptEnumProviderTypesA";
  case 0x0093: return "CryptEnumProviderTypesW";
  case 0x0094: return "CryptEnumProvidersA";
  case 0x0095: return "CryptEnumProvidersW";
  case 0x0096: return "CryptExportKey";
  case 0x0097: return "CryptGenKey";
  case 0x0098: return "CryptGenRandom";
  case 0x0099: return "CryptGetDefaultProviderA";
  case 0x009a: return "CryptGetDefaultProviderW";
  case 0x009b: return "CryptGetHashParam";
  case 0x009c: return "CryptGetKeyParam";
  case 0x009d: return "CryptGetProvParam";
  case 0x009e: return "CryptGetUserKey";
  case 0x009f: return "CryptHashData";
  case 0x00a0: return "CryptHashSessionKey";
  case 0x00a1: return "CryptImportKey";
  case 0x00a2: return "CryptReleaseContext";
  case 0x00a3: return "CryptSetHashParam";
  case 0x00a4: return "CryptSetKeyParam";
  case 0x00a5: return "CryptSetProvParam";
  case 0x00a6: return "CryptSetProviderA";
  case 0x00a7: return "CryptSetProviderExA";
  case 0x00a8: return "CryptSetProviderExW";
  case 0x00a9: return "CryptSetProviderW";
  case 0x00aa: return "CryptSignHashA";
  case 0x00ab: return "CryptSignHashW";
  case 0x00ac: return "CryptVerifySignatureA";
  case 0x00ad: return "CryptVerifySignatureW";
  case 0x00ae: return "DecryptFileA";
  case 0x00af: return "DecryptFileW";
  case 0x00b0: return "DeleteAce";
  case 0x00b1: return "DeleteService";
  case 0x00b2: return "DeregisterEventSource";
  case 0x00b3: return "DestroyPrivateObjectSecurity";
  case 0x00b4: return "DuplicateEncryptionInfoFile";
  case 0x00b5: return "DuplicateToken";
  case 0x00b6: return "DuplicateTokenEx";
  case 0x00b7: return "ElfBackupEventLogFileA";
  case 0x00b8: return "ElfBackupEventLogFileW";
  case 0x00b9: return "ElfChangeNotify";
  case 0x00ba: return "ElfClearEventLogFileA";
  case 0x00bb: return "ElfClearEventLogFileW";
  case 0x00bc: return "ElfCloseEventLog";
  case 0x00bd: return "ElfDeregisterEventSource";
  case 0x00be: return "ElfFlushEventLog";
  case 0x00bf: return "ElfNumberOfRecords";
  case 0x00c0: return "ElfOldestRecord";
  case 0x00c1: return "ElfOpenBackupEventLogA";
  case 0x00c2: return "ElfOpenBackupEventLogW";
  case 0x00c3: return "ElfOpenEventLogA";
  case 0x00c4: return "ElfOpenEventLogW";
  case 0x00c5: return "ElfReadEventLogA";
  case 0x00c6: return "ElfReadEventLogW";
  case 0x00c7: return "ElfRegisterEventSourceA";
  case 0x00c8: return "ElfRegisterEventSourceW";
  case 0x00c9: return "ElfReportEventA";
  case 0x00ca: return "ElfReportEventW";
  case 0x00cb: return "EnableTrace";
  case 0x00cc: return "EncryptFileA";
  case 0x00cd: return "EncryptFileW";
  case 0x00ce: return "EncryptedFileKeyInfo";
  case 0x00cf: return "EncryptionDisable";
  case 0x00d0: return "EnumDependentServicesA";
  case 0x00d1: return "EnumDependentServicesW";
  case 0x00d2: return "EnumServiceGroupW";
  case 0x00d3: return "EnumServicesStatusA";
  case 0x00d4: return "EnumServicesStatusExA";
  case 0x00d5: return "EnumServicesStatusExW";
  case 0x00d6: return "EnumServicesStatusW";
  case 0x00d7: return "EnumerateTraceGuids";
  case 0x00d8: return "EqualDomainSid";
  case 0x00d9: return "EqualPrefixSid";
  case 0x00da: return "EqualSid";
  case 0x00db: return "FileEncryptionStatusA";
  case 0x00dc: return "FileEncryptionStatusW";
  case 0x00dd: return "FindFirstFreeAce";
  case 0x00de: return "FlushTraceA";
  case 0x00df: return "FlushTraceW";
  case 0x00e0: return "FreeEncryptedFileKeyInfo";
  case 0x00e1: return "FreeEncryptionCertificateHashList";
  case 0x00e2: return "FreeInheritedFromArray";
  case 0x00e3: return "FreeSid";
  case 0x00e4: return "GetAccessPermissionsForObjectA";
  case 0x00e5: return "GetAccessPermissionsForObjectW";
  case 0x00e6: return "GetAce";
  case 0x00e7: return "GetAclInformation";
  case 0x00e8: return "GetAuditedPermissionsFromAclA";
  case 0x00e9: return "GetAuditedPermissionsFromAclW";
  case 0x00ea: return "GetCurrentHwProfileA";
  case 0x00eb: return "GetCurrentHwProfileW";
  case 0x00ec: return "GetEffectiveRightsFromAclA";
  case 0x00ed: return "GetEffectiveRightsFromAclW";
  case 0x00ee: return "GetEventLogInformation";
  case 0x00ef: return "GetExplicitEntriesFromAclA";
  case 0x00f0: return "GetExplicitEntriesFromAclW";
  case 0x00f1: return "GetFileSecurityA";
  case 0x00f2: return "GetFileSecurityW";
  case 0x00f3: return "GetInformationCodeAuthzLevelW";
  case 0x00f4: return "GetInformationCodeAuthzPolicyW";
  case 0x00f5: return "GetInheritanceSourceA";
  case 0x00f6: return "GetInheritanceSourceW";
  case 0x00f7: return "GetKernelObjectSecurity";
  case 0x00f8: return "GetLengthSid";
  case 0x00f9: return "GetLocalManagedApplicationData";
  case 0x00fa: return "GetLocalManagedApplications";
  case 0x00fb: return "GetManagedApplicationCategories";
  case 0x00fc: return "GetManagedApplications";
  case 0x00fd: return "GetMultipleTrusteeA";
  case 0x00fe: return "GetMultipleTrusteeOperationA";
  case 0x00ff: return "GetMultipleTrusteeOperationW";
  case 0x0100: return "GetMultipleTrusteeW";
  case 0x0101: return "GetNamedSecurityInfoA";
  case 0x0102: return "GetNamedSecurityInfoExA";
  case 0x0103: return "GetNamedSecurityInfoExW";
  case 0x0104: return "GetNamedSecurityInfoW";
  case 0x0105: return "GetNumberOfEventLogRecords";
  case 0x0106: return "GetOldestEventLogRecord";
  case 0x0107: return "GetOverlappedAccessResults";
  case 0x0108: return "GetPrivateObjectSecurity";
  case 0x0109: return "GetSecurityDescriptorControl";
  case 0x010a: return "GetSecurityDescriptorDacl";
  case 0x010b: return "GetSecurityDescriptorGroup";
  case 0x010c: return "GetSecurityDescriptorLength";
  case 0x010d: return "GetSecurityDescriptorOwner";
  case 0x010e: return "GetSecurityDescriptorRMControl";
  case 0x010f: return "GetSecurityDescriptorSacl";
  case 0x0110: return "GetSecurityInfo";
  case 0x0111: return "GetSecurityInfoExA";
  case 0x0112: return "GetSecurityInfoExW";
  case 0x0113: return "GetServiceDisplayNameA";
  case 0x0114: return "GetServiceDisplayNameW";
  case 0x0115: return "GetServiceKeyNameA";
  case 0x0116: return "GetServiceKeyNameW";
  case 0x0117: return "GetSidIdentifierAuthority";
  case 0x0118: return "GetSidLengthRequired";
  case 0x0119: return "GetSidSubAuthority";
  case 0x011a: return "GetSidSubAuthorityCount";
  case 0x011b: return "GetTokenInformation";
  case 0x011c: return "GetTraceEnableFlags";
  case 0x011d: return "GetTraceEnableLevel";
  case 0x011e: return "GetTraceLoggerHandle";
  case 0x011f: return "GetTrusteeFormA";
  case 0x0120: return "GetTrusteeFormW";
  case 0x0121: return "GetTrusteeNameA";
  case 0x0122: return "GetTrusteeNameW";
  case 0x0123: return "GetTrusteeTypeA";
  case 0x0124: return "GetTrusteeTypeW";
  case 0x0125: return "GetUserNameA";
  case 0x0126: return "GetUserNameW";
  case 0x0127: return "GetWindowsAccountDomainSid";
  case 0x0001: return "I_ScGetCurrentGroupStateW";
  case 0x0128: return "I_ScIsSecurityProcess";
  case 0x0129: return "I_ScPnPGetServiceName";
  case 0x012a: return "I_ScSendTSMessage";
  case 0x012b: return "I_ScSetServiceBitsA";
  case 0x012c: return "I_ScSetServiceBitsW";
  case 0x012d: return "IdentifyCodeAuthzLevelW";
  case 0x012e: return "ImpersonateAnonymousToken";
  case 0x012f: return "ImpersonateLoggedOnUser";
  case 0x0130: return "ImpersonateNamedPipeClient";
  case 0x0131: return "ImpersonateSelf";
  case 0x0132: return "InitializeAcl";
  case 0x0133: return "InitializeSecurityDescriptor";
  case 0x0134: return "InitializeSid";
  case 0x0135: return "InitiateSystemShutdownA";
  case 0x0136: return "InitiateSystemShutdownExA";
  case 0x0137: return "InitiateSystemShutdownExW";
  case 0x0138: return "InitiateSystemShutdownW";
  case 0x0139: return "InstallApplication";
  case 0x013a: return "IsTextUnicode";
  case 0x013b: return "IsTokenRestricted";
  case 0x013c: return "IsTokenUntrusted";
  case 0x013d: return "IsValidAcl";
  case 0x013e: return "IsValidSecurityDescriptor";
  case 0x013f: return "IsValidSid";
  case 0x0140: return "IsWellKnownSid";
  case 0x0141: return "LockServiceDatabase";
  case 0x0142: return "LogonUserA";
  case 0x0143: return "LogonUserExA";
  case 0x0144: return "LogonUserExW";
  case 0x0145: return "LogonUserW";
  case 0x0146: return "LookupAccountNameA";
  case 0x0147: return "LookupAccountNameW";
  case 0x0148: return "LookupAccountSidA";
  case 0x0149: return "LookupAccountSidW";
  case 0x014a: return "LookupPrivilegeDisplayNameA";
  case 0x014b: return "LookupPrivilegeDisplayNameW";
  case 0x014c: return "LookupPrivilegeNameA";
  case 0x014d: return "LookupPrivilegeNameW";
  case 0x014e: return "LookupPrivilegeValueA";
  case 0x014f: return "LookupPrivilegeValueW";
  case 0x0150: return "LookupSecurityDescriptorPartsA";
  case 0x0151: return "LookupSecurityDescriptorPartsW";
  case 0x0152: return "LsaAddAccountRights";
  case 0x0153: return "LsaAddPrivilegesToAccount";
  case 0x0154: return "LsaClearAuditLog";
  case 0x0155: return "LsaClose";
  case 0x0156: return "LsaCreateAccount";
  case 0x0157: return "LsaCreateSecret";
  case 0x0158: return "LsaCreateTrustedDomain";
  case 0x0159: return "LsaCreateTrustedDomainEx";
  case 0x015a: return "LsaDelete";
  case 0x015b: return "LsaDeleteTrustedDomain";
  case 0x015c: return "LsaEnumerateAccountRights";
  case 0x015d: return "LsaEnumerateAccounts";
  case 0x015e: return "LsaEnumerateAccountsWithUserRight";
  case 0x015f: return "LsaEnumeratePrivileges";
  case 0x0160: return "LsaEnumeratePrivilegesOfAccount";
  case 0x0161: return "LsaEnumerateTrustedDomains";
  case 0x0162: return "LsaEnumerateTrustedDomainsEx";
  case 0x0163: return "LsaFreeMemory";
  case 0x0164: return "LsaGetQuotasForAccount";
  case 0x0165: return "LsaGetRemoteUserName";
  case 0x0166: return "LsaGetSystemAccessAccount";
  case 0x0167: return "LsaGetUserName";
  case 0x0168: return "LsaICLookupNames";
  case 0x0169: return "LsaICLookupNamesWithCreds";
  case 0x016a: return "LsaICLookupSids";
  case 0x016b: return "LsaICLookupSidsWithCreds";
  case 0x016d: return "LsaLookupNames";
  case 0x016c: return "LsaLookupNames2";
  case 0x016e: return "LsaLookupPrivilegeDisplayName";
  case 0x016f: return "LsaLookupPrivilegeName";
  case 0x0170: return "LsaLookupPrivilegeValue";
  case 0x0171: return "LsaLookupSids";
  case 0x0172: return "LsaNtStatusToWinError";
  case 0x0173: return "LsaOpenAccount";
  case 0x0174: return "LsaOpenPolicy";
  case 0x0175: return "LsaOpenPolicySce";
  case 0x0176: return "LsaOpenSecret";
  case 0x0177: return "LsaOpenTrustedDomain";
  case 0x0178: return "LsaOpenTrustedDomainByName";
  case 0x0179: return "LsaQueryDomainInformationPolicy";
  case 0x017a: return "LsaQueryForestTrustInformation";
  case 0x017b: return "LsaQueryInfoTrustedDomain";
  case 0x017c: return "LsaQueryInformationPolicy";
  case 0x017d: return "LsaQuerySecret";
  case 0x017e: return "LsaQuerySecurityObject";
  case 0x017f: return "LsaQueryTrustedDomainInfo";
  case 0x0180: return "LsaQueryTrustedDomainInfoByName";
  case 0x0181: return "LsaRemoveAccountRights";
  case 0x0182: return "LsaRemovePrivilegesFromAccount";
  case 0x0183: return "LsaRetrievePrivateData";
  case 0x0184: return "LsaSetDomainInformationPolicy";
  case 0x0185: return "LsaSetForestTrustInformation";
  case 0x0186: return "LsaSetInformationPolicy";
  case 0x0187: return "LsaSetInformationTrustedDomain";
  case 0x0188: return "LsaSetQuotasForAccount";
  case 0x0189: return "LsaSetSecret";
  case 0x018a: return "LsaSetSecurityObject";
  case 0x018b: return "LsaSetSystemAccessAccount";
  case 0x018c: return "LsaSetTrustedDomainInfoByName";
  case 0x018d: return "LsaSetTrustedDomainInformation";
  case 0x018e: return "LsaStorePrivateData";
  case 0x018f: return "MD4Final";
  case 0x0190: return "MD4Init";
  case 0x0191: return "MD4Update";
  case 0x0192: return "MD5Final";
  case 0x0193: return "MD5Init";
  case 0x0194: return "MD5Update";
  case 0x0196: return "MSChapSrvChangePassword";
  case 0x0195: return "MSChapSrvChangePassword2";
  case 0x0198: return "MakeAbsoluteSD";
  case 0x0197: return "MakeAbsoluteSD2";
  case 0x0199: return "MakeSelfRelativeSD";
  case 0x019a: return "MapGenericMask";
  case 0x019b: return "NotifyBootConfigStatus";
  case 0x019c: return "NotifyChangeEventLog";
  case 0x019d: return "ObjectCloseAuditAlarmA";
  case 0x019e: return "ObjectCloseAuditAlarmW";
  case 0x019f: return "ObjectDeleteAuditAlarmA";
  case 0x01a0: return "ObjectDeleteAuditAlarmW";
  case 0x01a1: return "ObjectOpenAuditAlarmA";
  case 0x01a2: return "ObjectOpenAuditAlarmW";
  case 0x01a3: return "ObjectPrivilegeAuditAlarmA";
  case 0x01a4: return "ObjectPrivilegeAuditAlarmW";
  case 0x01a5: return "OpenBackupEventLogA";
  case 0x01a6: return "OpenBackupEventLogW";
  case 0x01a7: return "OpenEncryptedFileRawA";
  case 0x01a8: return "OpenEncryptedFileRawW";
  case 0x01a9: return "OpenEventLogA";
  case 0x01aa: return "OpenEventLogW";
  case 0x01ab: return "OpenProcessToken";
  case 0x01ac: return "OpenSCManagerA";
  case 0x01ad: return "OpenSCManagerW";
  case 0x01ae: return "OpenServiceA";
  case 0x01af: return "OpenServiceW";
  case 0x01b0: return "OpenThreadToken";
  case 0x01b1: return "OpenTraceA";
  case 0x01b2: return "OpenTraceW";
  case 0x01b3: return "PrivilegeCheck";
  case 0x01b4: return "PrivilegedServiceAuditAlarmA";
  case 0x01b5: return "PrivilegedServiceAuditAlarmW";
  case 0x01b6: return "ProcessIdleTasks";
  case 0x01b7: return "ProcessTrace";
  case 0x01b8: return "QueryAllTracesA";
  case 0x01b9: return "QueryAllTracesW";
  case 0x01ba: return "QueryRecoveryAgentsOnEncryptedFile";
  case 0x01bb: return "QueryServiceConfig2A";
  case 0x01bc: return "QueryServiceConfig2W";
  case 0x01bd: return "QueryServiceConfigA";
  case 0x01be: return "QueryServiceConfigW";
  case 0x01bf: return "QueryServiceLockStatusA";
  case 0x01c0: return "QueryServiceLockStatusW";
  case 0x01c1: return "QueryServiceObjectSecurity";
  case 0x01c2: return "QueryServiceStatus";
  case 0x01c3: return "QueryServiceStatusEx";
  case 0x01c4: return "QueryTraceA";
  case 0x01c5: return "QueryTraceW";
  case 0x01c6: return "QueryUsersOnEncryptedFile";
  case 0x01c7: return "QueryWindows31FilesMigration";
  case 0x01c8: return "ReadEncryptedFileRaw";
  case 0x01c9: return "ReadEventLogA";
  case 0x01ca: return "ReadEventLogW";
  case 0x01cb: return "RegCloseKey";
  case 0x01cc: return "RegConnectRegistryA";
  case 0x01cd: return "RegConnectRegistryW";
  case 0x01ce: return "RegCreateKeyA";
  case 0x01cf: return "RegCreateKeyExA";
  case 0x01d0: return "RegCreateKeyExW";
  case 0x01d1: return "RegCreateKeyW";
  case 0x01d2: return "RegDeleteKeyA";
  case 0x01d3: return "RegDeleteKeyW";
  case 0x01d4: return "RegDeleteValueA";
  case 0x01d5: return "RegDeleteValueW";
  case 0x01d6: return "RegDisablePredefinedCache";
  case 0x01d7: return "RegEnumKeyA";
  case 0x01d8: return "RegEnumKeyExA";
  case 0x01d9: return "RegEnumKeyExW";
  case 0x01da: return "RegEnumKeyW";
  case 0x01db: return "RegEnumValueA";
  case 0x01dc: return "RegEnumValueW";
  case 0x01dd: return "RegFlushKey";
  case 0x01de: return "RegGetKeySecurity";
  case 0x01df: return "RegLoadKeyA";
  case 0x01e0: return "RegLoadKeyW";
  case 0x01e1: return "RegNotifyChangeKeyValue";
  case 0x01e2: return "RegOpenCurrentUser";
  case 0x01e3: return "RegOpenKeyA";
  case 0x01e4: return "RegOpenKeyExA";
  case 0x01e5: return "RegOpenKeyExW";
  case 0x01e6: return "RegOpenKeyW";
  case 0x01e7: return "RegOpenUserClassesRoot";
  case 0x01e8: return "RegOverridePredefKey";
  case 0x01e9: return "RegQueryInfoKeyA";
  case 0x01ea: return "RegQueryInfoKeyW";
  case 0x01eb: return "RegQueryMultipleValuesA";
  case 0x01ec: return "RegQueryMultipleValuesW";
  case 0x01ed: return "RegQueryValueA";
  case 0x01ee: return "RegQueryValueExA";
  case 0x01ef: return "RegQueryValueExW";
  case 0x01f0: return "RegQueryValueW";
  case 0x01f1: return "RegReplaceKeyA";
  case 0x01f2: return "RegReplaceKeyW";
  case 0x01f3: return "RegRestoreKeyA";
  case 0x01f4: return "RegRestoreKeyW";
  case 0x01f5: return "RegSaveKeyA";
  case 0x01f6: return "RegSaveKeyExA";
  case 0x01f7: return "RegSaveKeyExW";
  case 0x01f8: return "RegSaveKeyW";
  case 0x01f9: return "RegSetKeySecurity";
  case 0x01fa: return "RegSetValueA";
  case 0x01fb: return "RegSetValueExA";
  case 0x01fc: return "RegSetValueExW";
  case 0x01fd: return "RegSetValueW";
  case 0x01fe: return "RegUnLoadKeyA";
  case 0x01ff: return "RegUnLoadKeyW";
  case 0x0200: return "RegisterEventSourceA";
  case 0x0201: return "RegisterEventSourceW";
  case 0x0202: return "RegisterIdleTask";
  case 0x0203: return "RegisterServiceCtrlHandlerA";
  case 0x0204: return "RegisterServiceCtrlHandlerExA";
  case 0x0205: return "RegisterServiceCtrlHandlerExW";
  case 0x0206: return "RegisterServiceCtrlHandlerW";
  case 0x0207: return "RegisterTraceGuidsA";
  case 0x0208: return "RegisterTraceGuidsW";
  case 0x0209: return "RemoveTraceCallback";
  case 0x020a: return "RemoveUsersFromEncryptedFile";
  case 0x020b: return "ReportEventA";
  case 0x020c: return "ReportEventW";
  case 0x020d: return "RevertToSelf";
  case 0x020e: return "SaferCloseLevel";
  case 0x020f: return "SaferComputeTokenFromLevel";
  case 0x0210: return "SaferCreateLevel";
  case 0x0211: return "SaferGetLevelInformation";
  case 0x0212: return "SaferGetPolicyInformation";
  case 0x0213: return "SaferIdentifyLevel";
  case 0x0214: return "SaferRecordEventLogEntry";
  case 0x0215: return "SaferSetLevelInformation";
  case 0x0216: return "SaferSetPolicyInformation";
  case 0x0217: return "SaferiChangeRegistryScope";
  case 0x0218: return "SaferiCompareTokenLevels";
  case 0x0219: return "SaferiIsExecutableFileType";
  case 0x021a: return "SaferiPopulateDefaultsInRegistry";
  case 0x021b: return "SaferiRecordEventLogEntry";
  case 0x021c: return "SaferiReplaceProcessThreadTokens";
  case 0x021d: return "SaferiSearchMatchingHashRules";
  case 0x021e: return "SetAclInformation";
  case 0x021f: return "SetEntriesInAccessListA";
  case 0x0220: return "SetEntriesInAccessListW";
  case 0x0221: return "SetEntriesInAclA";
  case 0x0222: return "SetEntriesInAclW";
  case 0x0223: return "SetEntriesInAuditListA";
  case 0x0224: return "SetEntriesInAuditListW";
  case 0x0225: return "SetFileSecurityA";
  case 0x0226: return "SetFileSecurityW";
  case 0x0227: return "SetInformationCodeAuthzLevelW";
  case 0x0228: return "SetInformationCodeAuthzPolicyW";
  case 0x0229: return "SetKernelObjectSecurity";
  case 0x022a: return "SetNamedSecurityInfoA";
  case 0x022b: return "SetNamedSecurityInfoExA";
  case 0x022c: return "SetNamedSecurityInfoExW";
  case 0x022d: return "SetNamedSecurityInfoW";
  case 0x022e: return "SetPrivateObjectSecurity";
  case 0x022f: return "SetPrivateObjectSecurityEx";
  case 0x0230: return "SetSecurityDescriptorControl";
  case 0x0231: return "SetSecurityDescriptorDacl";
  case 0x0232: return "SetSecurityDescriptorGroup";
  case 0x0233: return "SetSecurityDescriptorOwner";
  case 0x0234: return "SetSecurityDescriptorRMControl";
  case 0x0235: return "SetSecurityDescriptorSacl";
  case 0x0236: return "SetSecurityInfo";
  case 0x0237: return "SetSecurityInfoExA";
  case 0x0238: return "SetSecurityInfoExW";
  case 0x0239: return "SetServiceBits";
  case 0x023a: return "SetServiceObjectSecurity";
  case 0x023b: return "SetServiceStatus";
  case 0x023c: return "SetThreadToken";
  case 0x023d: return "SetTokenInformation";
  case 0x023e: return "SetTraceCallback";
  case 0x023f: return "SetUserFileEncryptionKey";
  case 0x0240: return "StartServiceA";
  case 0x0241: return "StartServiceCtrlDispatcherA";
  case 0x0242: return "StartServiceCtrlDispatcherW";
  case 0x0243: return "StartServiceW";
  case 0x0244: return "StartTraceA";
  case 0x0245: return "StartTraceW";
  case 0x0246: return "StopTraceA";
  case 0x0247: return "StopTraceW";
  case 0x0248: return "SynchronizeWindows31FilesAndWindowsNTRegistry";
  case 0x0249: return "SystemFunction001";
  case 0x024a: return "SystemFunction002";
  case 0x024b: return "SystemFunction003";
  case 0x024c: return "SystemFunction004";
  case 0x024d: return "SystemFunction005";
  case 0x024e: return "SystemFunction006";
  case 0x024f: return "SystemFunction007";
  case 0x0250: return "SystemFunction008";
  case 0x0251: return "SystemFunction009";
  case 0x0252: return "SystemFunction010";
  case 0x0253: return "SystemFunction011";
  case 0x0254: return "SystemFunction012";
  case 0x0255: return "SystemFunction013";
  case 0x0256: return "SystemFunction014";
  case 0x0257: return "SystemFunction015";
  case 0x0258: return "SystemFunction016";
  case 0x0259: return "SystemFunction017";
  case 0x025a: return "SystemFunction018";
  case 0x025b: return "SystemFunction019";
  case 0x025c: return "SystemFunction020";
  case 0x025d: return "SystemFunction021";
  case 0x025e: return "SystemFunction022";
  case 0x025f: return "SystemFunction023";
  case 0x0260: return "SystemFunction024";
  case 0x0261: return "SystemFunction025";
  case 0x0262: return "SystemFunction026";
  case 0x0263: return "SystemFunction027";
  case 0x0264: return "SystemFunction028";
  case 0x0265: return "SystemFunction029";
  case 0x0266: return "SystemFunction030";
  case 0x0267: return "SystemFunction031";
  case 0x0268: return "SystemFunction032";
  case 0x0269: return "SystemFunction033";
  case 0x026a: return "SystemFunction034";
  case 0x026b: return "SystemFunction035";
  case 0x026c: return "SystemFunction036";
  case 0x026d: return "SystemFunction040";
  case 0x026e: return "SystemFunction041";
  case 0x026f: return "TraceEvent";
  case 0x0270: return "TraceEventInstance";
  case 0x0271: return "TraceMessage";
  case 0x0272: return "TraceMessageVa";
  case 0x0273: return "TreeResetNamedSecurityInfoA";
  case 0x0274: return "TreeResetNamedSecurityInfoW";
  case 0x0275: return "TrusteeAccessToObjectA";
  case 0x0276: return "TrusteeAccessToObjectW";
  case 0x0277: return "UninstallApplication";
  case 0x0278: return "UnlockServiceDatabase";
  case 0x0279: return "UnregisterIdleTask";
  case 0x027a: return "UnregisterTraceGuids";
  case 0x027b: return "UpdateTraceA";
  case 0x027c: return "UpdateTraceW";
  case 0x027d: return "WdmWmiServiceMain";
  case 0x027e: return "WmiCloseBlock";
  case 0x027f: return "WmiCloseTraceWithCursor";
  case 0x0280: return "WmiConvertTimestamp";
  case 0x0281: return "WmiDevInstToInstanceNameA";
  case 0x0282: return "WmiDevInstToInstanceNameW";
  case 0x0283: return "WmiEnumerateGuids";
  case 0x0284: return "WmiExecuteMethodA";
  case 0x0285: return "WmiExecuteMethodW";
  case 0x0286: return "WmiFileHandleToInstanceNameA";
  case 0x0287: return "WmiFileHandleToInstanceNameW";
  case 0x0288: return "WmiFreeBuffer";
  case 0x0289: return "WmiGetFirstTraceOffset";
  case 0x028a: return "WmiGetNextEvent";
  case 0x028b: return "WmiGetTraceHeader";
  case 0x028c: return "WmiMofEnumerateResourcesA";
  case 0x028d: return "WmiMofEnumerateResourcesW";
  case 0x028e: return "WmiNotificationRegistrationA";
  case 0x028f: return "WmiNotificationRegistrationW";
  case 0x0290: return "WmiOpenBlock";
  case 0x0291: return "WmiOpenTraceWithCursor";
  case 0x0292: return "WmiParseTraceEvent";
  case 0x0293: return "WmiQueryAllDataA";
  case 0x0294: return "WmiQueryAllDataMultipleA";
  case 0x0295: return "WmiQueryAllDataMultipleW";
  case 0x0296: return "WmiQueryAllDataW";
  case 0x0297: return "WmiQueryGuidInformation";
  case 0x0298: return "WmiQuerySingleInstanceA";
  case 0x0299: return "WmiQuerySingleInstanceMultipleA";
  case 0x029a: return "WmiQuerySingleInstanceMultipleW";
  case 0x029b: return "WmiQuerySingleInstanceW";
  case 0x029c: return "WmiReceiveNotificationsA";
  case 0x029d: return "WmiReceiveNotificationsW";
  case 0x029e: return "WmiSetSingleInstanceA";
  case 0x029f: return "WmiSetSingleInstanceW";
  case 0x02a0: return "WmiSetSingleItemA";
  case 0x02a1: return "WmiSetSingleItemW";
  case 0x02a2: return "Wow64Win32ApiEntry";
  case 0x02a3: return "WriteEncryptedFileRaw";
  }
  return nullptr;
}


}
}

#endif

