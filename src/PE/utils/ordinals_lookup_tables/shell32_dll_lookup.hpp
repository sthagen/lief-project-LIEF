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
#ifndef LIEF_PE_SHELL32_DLL_LOOKUP_H
#define LIEF_PE_SHELL32_DLL_LOOKUP_H
#include <cstdint>

namespace LIEF {
namespace PE {

inline const char* shell32_dll_lookup(uint32_t i) {
  switch(i) {
  case 0x00ff: return "AppCompat_RunDLLW";
  case 0x0107: return "AssocCreateForClasses";
  case 0x010b: return "AssocGetDetailsOfPropKey";
  case 0x02bd: return "CDefFolderMenu_Create2";
  case 0x0053: return "CIDLData_CreateFromIDArray";
  case 0x010c: return "CheckEscapesW";
  case 0x010d: return "CommandLineToArgvW";
  case 0x0110: return "Control_RunDLL";
  case 0x0111: return "Control_RunDLLA";
  case 0x0112: return "Control_RunDLLAsUserW";
  case 0x0113: return "Control_RunDLLW";
  case 0x0081: return "DAD_AutoScroll";
  case 0x0083: return "DAD_DragEnterEx";
  case 0x0016: return "DAD_DragEnterEx2";
  case 0x0084: return "DAD_DragLeave";
  case 0x0086: return "DAD_DragMove";
  case 0x0088: return "DAD_SetDragImage";
  case 0x0089: return "DAD_ShowDragImage";
  case 0x0114: return "DllCanUnloadNow";
  case 0x0115: return "DllGetActivationFactory";
  case 0x0116: return "DllGetClassObject";
  case 0x0117: return "DllGetVersion";
  case 0x0118: return "DllInstall";
  case 0x0119: return "DllRegisterServer";
  case 0x011a: return "DllUnregisterServer";
  case 0x011b: return "DoEnvironmentSubstA";
  case 0x011c: return "DoEnvironmentSubstW";
  case 0x011d: return "DragAcceptFiles";
  case 0x011e: return "DragFinish";
  case 0x011f: return "DragQueryFile";
  case 0x0120: return "DragQueryFileA";
  case 0x0121: return "DragQueryFileAorW";
  case 0x0122: return "DragQueryFileW";
  case 0x0123: return "DragQueryPoint";
  case 0x0040: return "DriveType";
  case 0x0124: return "DuplicateIcon";
  case 0x0125: return "ExtractAssociatedIconA";
  case 0x0126: return "ExtractAssociatedIconExA";
  case 0x0127: return "ExtractAssociatedIconExW";
  case 0x0128: return "ExtractAssociatedIconW";
  case 0x0129: return "ExtractIconA";
  case 0x012a: return "ExtractIconEx";
  case 0x012b: return "ExtractIconExA";
  case 0x012c: return "ExtractIconExW";
  case 0x012d: return "ExtractIconW";
  case 0x012e: return "FindExecutableA";
  case 0x012f: return "FindExecutableW";
  case 0x0130: return "FreeIconList";
  case 0x0131: return "GetCurrentProcessExplicitAppUserModelID";
  case 0x003f: return "GetFileNameFromBrowse";
  case 0x009a: return "ILAppendID";
  case 0x0012: return "ILClone";
  case 0x0013: return "ILCloneFirst";
  case 0x0019: return "ILCombine";
  case 0x009d: return "ILCreateFromPath";
  case 0x00bd: return "ILCreateFromPathA";
  case 0x00be: return "ILCreateFromPathW";
  case 0x0018: return "ILFindChild";
  case 0x0010: return "ILFindLastID";
  case 0x009b: return "ILFree";
  case 0x0099: return "ILGetNext";
  case 0x0098: return "ILGetSize";
  case 0x0015: return "ILIsEqual";
  case 0x0017: return "ILIsParent";
  case 0x034e: return "ILLoadFromStreamEx";
  case 0x0011: return "ILRemoveLastID";
  case 0x001b: return "ILSaveToStream";
  case 0x0132: return "InitNetworkAddressControl";
  case 0x0133: return "InternalExtractIconListA";
  case 0x0134: return "InternalExtractIconListW";
  case 0x0077: return "IsLFNDrive";
  case 0x0029: return "IsLFNDriveA";
  case 0x002a: return "IsLFNDriveW";
  case 0x0042: return "IsNetDrive";
  case 0x02a8: return "IsUserAnAdmin";
  case 0x0135: return "LaunchMSHelp_RunDLLW";
  case 0x0051: return "OpenAs_RunDLL";
  case 0x007d: return "OpenAs_RunDLLA";
  case 0x0085: return "OpenAs_RunDLLW";
  case 0x0055: return "OpenRegStream";
  case 0x0136: return "Options_RunDLL";
  case 0x0137: return "Options_RunDLLA";
  case 0x0138: return "Options_RunDLLW";
  case 0x00ab: return "PathCleanupSpec";
  case 0x0139: return "PathCleanupSpecWorker";
  case 0x005c: return "PathGetShortPath";
  case 0x002b: return "PathIsExe";
  case 0x013a: return "PathIsExeWorker";
  case 0x00f0: return "PathIsSlowA";
  case 0x00ef: return "PathIsSlowW";
  case 0x002f: return "PathMakeUniqueName";
  case 0x0031: return "PathQualify";
  case 0x0033: return "PathResolve";
  case 0x004b: return "PathYetAnotherMakeUniqueName";
  case 0x003e: return "PickIconDlg";
  case 0x000d: return "PifMgr_CloseProperties";
  case 0x000a: return "PifMgr_GetProperties";
  case 0x0009: return "PifMgr_OpenProperties";
  case 0x000b: return "PifMgr_SetProperties";
  case 0x0087: return "PrepareDiscForBurnRunDllW";
  case 0x008a: return "PrintersGetCommand_RunDLL";
  case 0x008b: return "PrintersGetCommand_RunDLLA";
  case 0x0096: return "PrintersGetCommand_RunDLLW";
  case 0x028e: return "ReadCabinetState";
  case 0x020c: return "RealDriveType";
  case 0x00c7: return "RealShellExecuteA";
  case 0x00cf: return "RealShellExecuteExA";
  case 0x00d0: return "RealShellExecuteExW";
  case 0x00e2: return "RealShellExecuteW";
  case 0x013b: return "RegenerateUserEnvironment";
  case 0x003b: return "RestartDialog";
  case 0x02da: return "RestartDialogEx";
  case 0x013c: return "RunAsNewUser_RunDLLW";
  case 0x013d: return "SHAddDefaultPropertiesByExt";
  case 0x00a7: return "SHAddFromPropSheetExtArray";
  case 0x013e: return "SHAddToRecentDocs";
  case 0x00c4: return "SHAlloc";
  case 0x013f: return "SHAppBarMessage";
  case 0x0140: return "SHAssocEnumHandlers";
  case 0x0141: return "SHAssocEnumHandlersForProtocolByApplication";
  case 0x0142: return "SHBindToFolderIDListParent";
  case 0x0143: return "SHBindToFolderIDListParentEx";
  case 0x0144: return "SHBindToObject";
  case 0x0145: return "SHBindToParent";
  case 0x0146: return "SHBrowseForFolder";
  case 0x0147: return "SHBrowseForFolderA";
  case 0x0148: return "SHBrowseForFolderW";
  case 0x0093: return "SHCLSIDFromString";
  case 0x0284: return "SHChangeNotification_Lock";
  case 0x0285: return "SHChangeNotification_Unlock";
  case 0x0149: return "SHChangeNotify";
  case 0x0004: return "SHChangeNotifyDeregister";
  case 0x0002: return "SHChangeNotifyRegister";
  case 0x014a: return "SHChangeNotifyRegisterThread";
  case 0x014b: return "SHChangeNotifySuspendResume";
  case 0x0059: return "SHCloneSpecialIDList";
  case 0x0066: return "SHCoCreateInstance";
  case 0x014c: return "SHCoCreateInstanceWorker";
  case 0x014d: return "SHCreateAssociationRegistration";
  case 0x014e: return "SHCreateDataObject";
  case 0x014f: return "SHCreateDefaultContextMenu";
  case 0x0150: return "SHCreateDefaultExtractIcon";
  case 0x0151: return "SHCreateDefaultPropertiesOp";
  case 0x00a5: return "SHCreateDirectory";
  case 0x0152: return "SHCreateDirectoryExA";
  case 0x0153: return "SHCreateDirectoryExW";
  case 0x0154: return "SHCreateDirectoryExWWorker";
  case 0x02e7: return "SHCreateFileExtractIconW";
  case 0x0155: return "SHCreateItemFromIDList";
  case 0x0156: return "SHCreateItemFromParsingName";
  case 0x0157: return "SHCreateItemFromRelativeName";
  case 0x0158: return "SHCreateItemInKnownFolder";
  case 0x0159: return "SHCreateItemWithParent";
  case 0x015a: return "SHCreateLocalServerRunDll";
  case 0x015b: return "SHCreateProcessAsUserW";
  case 0x00a8: return "SHCreatePropSheetExtArray";
  case 0x015c: return "SHCreateQueryCancelAutoPlayMoniker";
  case 0x0100: return "SHCreateShellFolderView";
  case 0x00ae: return "SHCreateShellFolderViewEx";
  case 0x015d: return "SHCreateShellItem";
  case 0x015e: return "SHCreateShellItemArray";
  case 0x015f: return "SHCreateShellItemArrayFromDataObject";
  case 0x0160: return "SHCreateShellItemArrayFromIDLists";
  case 0x0161: return "SHCreateShellItemArrayFromShellItem";
  case 0x004a: return "SHCreateStdEnumFmtEtc";
  case 0x0003: return "SHDefExtractIconA";
  case 0x0006: return "SHDefExtractIconW";
  case 0x00a9: return "SHDestroyPropSheetExtArray";
  case 0x0058: return "SHDoDragDrop";
  case 0x0162: return "SHEmptyRecycleBinA";
  case 0x0163: return "SHEmptyRecycleBinW";
  case 0x0164: return "SHEnableServiceObject";
  case 0x0165: return "SHEnumerateUnreadMailAccountsW";
  case 0x0166: return "SHEvaluateSystemCommandTemplate";
  case 0x0167: return "SHExtractIconsW";
  case 0x0168: return "SHFileOperation";
  case 0x0169: return "SHFileOperationA";
  case 0x016a: return "SHFileOperationW";
  case 0x005a: return "SHFindFiles";
  case 0x0095: return "SHFind_InitMenuPopup";
  case 0x020e: return "SHFlushSFCache";
  case 0x016b: return "SHFormatDrive";
  case 0x00c3: return "SHFree";
  case 0x016c: return "SHFreeNameMappings";
  case 0x02ee: return "SHGetAttributesFromDataObject";
  case 0x016d: return "SHGetDataFromIDListA";
  case 0x016e: return "SHGetDataFromIDListW";
  case 0x016f: return "SHGetDesktopFolder";
  case 0x0170: return "SHGetDesktopFolderWorker";
  case 0x0171: return "SHGetDiskFreeSpaceA";
  case 0x0172: return "SHGetDiskFreeSpaceExA";
  case 0x0173: return "SHGetDiskFreeSpaceExW";
  case 0x0174: return "SHGetDriveMedia";
  case 0x0175: return "SHGetFileInfo";
  case 0x0176: return "SHGetFileInfoA";
  case 0x0177: return "SHGetFileInfoW";
  case 0x0178: return "SHGetFileInfoWWorker";
  case 0x0179: return "SHGetFolderLocation";
  case 0x017a: return "SHGetFolderLocationWorker";
  case 0x017b: return "SHGetFolderPathA";
  case 0x017c: return "SHGetFolderPathAWorker";
  case 0x017d: return "SHGetFolderPathAndSubDirA";
  case 0x017e: return "SHGetFolderPathAndSubDirW";
  case 0x017f: return "SHGetFolderPathAndSubDirWWorker";
  case 0x0180: return "SHGetFolderPathEx";
  case 0x0181: return "SHGetFolderPathW";
  case 0x0182: return "SHGetFolderPathWWorker";
  case 0x0183: return "SHGetIDListFromObject";
  case 0x0184: return "SHGetIconOverlayIndexA";
  case 0x0185: return "SHGetIconOverlayIndexW";
  case 0x02d7: return "SHGetImageList";
  case 0x0186: return "SHGetInstanceExplorer";
  case 0x0187: return "SHGetInstanceExplorerWorker";
  case 0x0188: return "SHGetItemFromDataObject";
  case 0x0189: return "SHGetItemFromObject";
  case 0x018a: return "SHGetKnownFolderIDList";
  case 0x018b: return "SHGetKnownFolderItem";
  case 0x018c: return "SHGetKnownFolderPath";
  case 0x018d: return "SHGetKnownFolderPathWorker";
  case 0x018e: return "SHGetLocalizedName";
  case 0x018f: return "SHGetMalloc";
  case 0x0190: return "SHGetNameFromIDList";
  case 0x0191: return "SHGetNewLinkInfo";
  case 0x00b3: return "SHGetNewLinkInfoA";
  case 0x00b4: return "SHGetNewLinkInfoW";
  case 0x0192: return "SHGetPathFromIDList";
  case 0x0193: return "SHGetPathFromIDListA";
  case 0x0194: return "SHGetPathFromIDListEx";
  case 0x0195: return "SHGetPathFromIDListW";
  case 0x0196: return "SHGetPropertyStoreForWindow";
  case 0x0197: return "SHGetPropertyStoreFromIDList";
  case 0x0198: return "SHGetPropertyStoreFromParsingName";
  case 0x0062: return "SHGetRealIDL";
  case 0x02c5: return "SHGetSetFolderCustomSettings";
  case 0x0044: return "SHGetSetSettings";
  case 0x0199: return "SHGetSettings";
  case 0x019a: return "SHGetSpecialFolderLocation";
  case 0x019b: return "SHGetSpecialFolderPathA";
  case 0x019c: return "SHGetSpecialFolderPathAWorker";
  case 0x019d: return "SHGetSpecialFolderPathW";
  case 0x019e: return "SHGetSpecialFolderPathWWorker";
  case 0x019f: return "SHGetStockIconInfo";
  case 0x01a0: return "SHGetTemporaryPropertyForItem";
  case 0x01a1: return "SHGetUnreadMailCountW";
  case 0x00c1: return "SHHandleUpdateImage";
  case 0x00e4: return "SHHelpShortcuts_RunDLL";
  case 0x00e5: return "SHHelpShortcuts_RunDLLA";
  case 0x00ee: return "SHHelpShortcuts_RunDLLW";
  case 0x001c: return "SHILCreateFromPath";
  case 0x01a2: return "SHInvokePrinterCommandA";
  case 0x01a3: return "SHInvokePrinterCommandW";
  case 0x01a4: return "SHIsFileAvailableOffline";
  case 0x02eb: return "SHLimitInputEdit";
  case 0x01a5: return "SHLoadInProc";
  case 0x01a6: return "SHLoadNonloadedIconOverlayIdentifiers";
  case 0x004d: return "SHMapPIDLToSystemImageListIndex";
  case 0x02cc: return "SHMultiFileProperties";
  case 0x00b2: return "SHObjectProperties";
  case 0x01a7: return "SHOpenFolderAndSelectItems";
  case 0x0050: return "SHOpenPropSheetW";
  case 0x01a8: return "SHOpenWithDialog";
  case 0x01a9: return "SHParseDisplayName";
  case 0x01aa: return "SHPathPrepareForWriteA";
  case 0x01ab: return "SHPathPrepareForWriteW";
  case 0x02ad: return "SHPropStgCreate";
  case 0x02b0: return "SHPropStgReadMultiple";
  case 0x02b1: return "SHPropStgWriteMultiple";
  case 0x01ac: return "SHQueryRecycleBinA";
  case 0x01ad: return "SHQueryRecycleBinW";
  case 0x01ae: return "SHQueryUserNotificationState";
  case 0x01af: return "SHRemoveLocalizedName";
  case 0x00aa: return "SHReplaceFromPropSheetExtArray";
  case 0x01b0: return "SHResolveLibrary";
  case 0x0064: return "SHRestricted";
  case 0x01b1: return "SHSetDefaultProperties";
  case 0x00e7: return "SHSetFolderPathA";
  case 0x00e8: return "SHSetFolderPathW";
  case 0x00b0: return "SHSetInstanceExplorer";
  case 0x01b2: return "SHSetKnownFolderPath";
  case 0x01b3: return "SHSetKnownFolderPathWorker";
  case 0x01b4: return "SHSetLocalizedName";
  case 0x01b5: return "SHSetTemporaryPropertyForItem";
  case 0x01b6: return "SHSetUnreadMailCountW";
  case 0x0049: return "SHShellFolderView_Message";
  case 0x01b7: return "SHShowManageLibraryUI";
  case 0x00a2: return "SHSimpleIDListFromPath";
  case 0x000e: return "SHStartNetConnectionDialogW";
  case 0x00f5: return "SHTestTokenMembership";
  case 0x00bf: return "SHUpdateImageA";
  case 0x00c0: return "SHUpdateImageW";
  case 0x01b8: return "SHUpdateRecycleBinIcon";
  case 0x00ad: return "SHValidateUNC";
  case 0x01b9: return "SetCurrentProcessExplicitAppUserModelID";
  case 0x01ba: return "SheChangeDirA";
  case 0x01bb: return "SheChangeDirExW";
  case 0x01bc: return "SheGetDirA";
  case 0x01bd: return "SheSetCurDrive";
  case 0x01be: return "ShellAboutA";
  case 0x01bf: return "ShellAboutW";
  case 0x01c0: return "ShellExec_RunDLL";
  case 0x01c1: return "ShellExec_RunDLLA";
  case 0x01c2: return "ShellExec_RunDLLW";
  case 0x01c3: return "ShellExecuteA";
  case 0x01c4: return "ShellExecuteEx";
  case 0x01c5: return "ShellExecuteExA";
  case 0x01c6: return "ShellExecuteExW";
  case 0x01c7: return "ShellExecuteW";
  case 0x01c8: return "ShellHookProc";
  case 0x00b7: return "ShellMessageBoxA";
  case 0x00b6: return "ShellMessageBoxW";
  case 0x0048: return "Shell_GetCachedImageIndex";
  case 0x01c9: return "Shell_GetCachedImageIndexA";
  case 0x01ca: return "Shell_GetCachedImageIndexW";
  case 0x0047: return "Shell_GetImageLists";
  case 0x0043: return "Shell_MergeMenus";
  case 0x01cb: return "Shell_NotifyIcon";
  case 0x01cc: return "Shell_NotifyIconA";
  case 0x01cd: return "Shell_NotifyIconGetRect";
  case 0x01ce: return "Shell_NotifyIconW";
  case 0x0067: return "SignalFileOpen";
  case 0x02aa: return "StgMakeUniqueName";
  case 0x01cf: return "StrChrA";
  case 0x01d0: return "StrChrIA";
  case 0x01d1: return "StrChrIW";
  case 0x01d2: return "StrChrW";
  case 0x01d3: return "StrCmpNA";
  case 0x01d4: return "StrCmpNIA";
  case 0x01d5: return "StrCmpNIW";
  case 0x01d6: return "StrCmpNW";
  case 0x01d7: return "StrNCmpA";
  case 0x01d8: return "StrNCmpIA";
  case 0x01d9: return "StrNCmpIW";
  case 0x01da: return "StrNCmpW";
  case 0x01db: return "StrRChrA";
  case 0x01dc: return "StrRChrIA";
  case 0x01dd: return "StrRChrIW";
  case 0x01de: return "StrRChrW";
  case 0x01df: return "StrRStrA";
  case 0x01e0: return "StrRStrIA";
  case 0x01e1: return "StrRStrIW";
  case 0x01e2: return "StrRStrW";
  case 0x01e3: return "StrStrA";
  case 0x01e4: return "StrStrIA";
  case 0x01e5: return "StrStrIW";
  case 0x01e6: return "StrStrW";
  case 0x01e7: return "WOWShellExecute";
  case 0x01e8: return "WaitForExplorerRestartW";
  case 0x00a4: return "Win32DeleteFile";
  case 0x028c: return "WriteCabinetState";
  }
  return nullptr;
}


}
}

#endif

