#pragma once

enum offsets {
	NtAcceptConnectPortOffset = 0x9ce50,
	NtAccessCheckOffset = 0x9ce10,
	NtAccessCheckAndAuditAlarmOffset = 0x9d330,
	NtAccessCheckByTypeOffset = 0x9da60,
	NtAccessCheckByTypeAndAuditAlarmOffset = 0x9d930,
	NtAccessCheckByTypeResultListOffset = 0x9da80,
	NtAccessCheckByTypeResultListAndAuditAlarmOffset = 0x9daa0,
	NtAccessCheckByTypeResultListAndAuditAlarmByHandleOffset = 0x9dac0,
	NtAcquireCrossVmMutantOffset = 0x9dae0,
	NtAcquireProcessActivityReferenceOffset = 0x9db00,
	NtAddAtomOffset = 0x9d6f0,
	NtAddAtomExOffset = 0x9db20,
	NtAddBootEntryOffset = 0x9db40,
	NtAddDriverEntryOffset = 0x9db60,
	NtAdjustGroupsTokenOffset = 0x9db80,
	NtAdjustPrivilegesTokenOffset = 0x9d630,
	NtAdjustTokenClaimsAndDeviceGroupsOffset = 0x9dba0,
	NtAlertResumeThreadOffset = 0x9dbc0,
	NtAlertThreadOffset = 0x9dbe0,
	NtAlertThreadByThreadIdOffset = 0x9dc00,
	NtAllocateLocallyUniqueIdOffset = 0x9dc20,
	NtAllocateReserveObjectOffset = 0x9dc40,
	NtAllocateUserPhysicalPagesOffset = 0x9dc60,
	NtAllocateUserPhysicalPagesExOffset = 0x9dc80,
	NtAllocateUuidsOffset = 0x9dca0,
	NtAllocateVirtualMemoryOffset = 0x9d110,
	NtAllocateVirtualMemoryExOffset = 0x9dcc0,
	NtAlpcAcceptConnectPortOffset = 0x9dce0,
	NtAlpcCancelMessageOffset = 0x9dd00,
	NtAlpcConnectPortOffset = 0x9dd20,
	NtAlpcConnectPortExOffset = 0x9dd40,
	NtAlpcCreatePortOffset = 0x9dd60,
	NtAlpcCreatePortSectionOffset = 0x9dd80,
	NtAlpcCreateResourceReserveOffset = 0x9dda0,
	NtAlpcCreateSectionViewOffset = 0x9ddc0,
	NtAlpcCreateSecurityContextOffset = 0x9dde0,
	NtAlpcDeletePortSectionOffset = 0x9de00,
	NtAlpcDeleteResourceReserveOffset = 0x9de20,
	NtAlpcDeleteSectionViewOffset = 0x9de40,
	NtAlpcDeleteSecurityContextOffset = 0x9de60,
	NtAlpcDisconnectPortOffset = 0x9de80,
	NtAlpcImpersonateClientContainerOfPortOffset = 0x9dea0,
	NtAlpcImpersonateClientOfPortOffset = 0x9dec0,
	NtAlpcOpenSenderProcessOffset = 0x9dee0,
	NtAlpcOpenSenderThreadOffset = 0x9df00,
	NtAlpcQueryInformationOffset = 0x9df20,
	NtAlpcQueryInformationMessageOffset = 0x9df40,
	NtAlpcRevokeSecurityContextOffset = 0x9df60,
	NtAlpcSendWaitReceivePortOffset = 0x9df80,
	NtAlpcSetInformationOffset = 0x9dfa0,
	NtApphelpCacheControlOffset = 0x9d790,
	NtAreMappedFilesTheSameOffset = 0x9dfc0,
	NtAssignProcessToJobObjectOffset = 0x9dfe0,
	NtAssociateWaitCompletionPacketOffset = 0x9e000,
	NtCallEnclaveOffset = 0x9e020,
	NtCallbackReturnOffset = 0x9ceb0,
	NtCancelIoFileOffset = 0x9d9a0,
	NtCancelIoFileExOffset = 0x9e040,
	NtCancelSynchronousIoFileOffset = 0x9e060,
	NtCancelTimerOffset = 0x9da20,
	NtCancelTimer2Offset = 0x9e080,
	NtCancelWaitCompletionPacketOffset = 0x9e0a0,
	NtClearEventOffset = 0x9d5d0,
	NtCloseOffset = 0x9cff0,
	NtCloseObjectAuditAlarmOffset = 0x9d570,
	NtCommitCompleteOffset = 0x9e0c0,
	NtCommitEnlistmentOffset = 0x9e0e0,
	NtCommitRegistryTransactionOffset = 0x9e100,
	NtCommitTransactionOffset = 0x9e120,
	NtCompactKeysOffset = 0x9e140,
	NtCompareObjectsOffset = 0x9e160,
	NtCompareSigningLevelsOffset = 0x9e180,
	NtCompareTokensOffset = 0x9e1a0,
	NtCompleteConnectPortOffset = 0x9e1c0,
	NtCompressKeyOffset = 0x9e1e0,
	NtConnectPortOffset = 0x9e200,
	NtContinueOffset = 0x9d670,
	NtContinueExOffset = 0x9e220,
	NtConvertBetweenAuxiliaryCounterAndPerformanceCounterOffset = 0x9e240,
	NtCreateCrossVmEventOffset = 0x9e260,
	NtCreateCrossVmMutantOffset = 0x9e280,
	NtCreateDebugObjectOffset = 0x9e2a0,
	NtCreateDirectoryObjectOffset = 0x9e2c0,
	NtCreateDirectoryObjectExOffset = 0x9e2e0,
	NtCreateEnclaveOffset = 0x9e300,
	NtCreateEnlistmentOffset = 0x9e320,
	NtCreateEventOffset = 0x9d710,
	NtCreateEventPairOffset = 0x9e340,
	NtCreateFileOffset = 0x9d8b0,
	NtCreateIRTimerOffset = 0x9e360,
	NtCreateIoCompletionOffset = 0x9e380,
	NtCreateJobObjectOffset = 0x9e3a0,
	NtCreateJobSetOffset = 0x9e3c0,
	NtCreateKeyOffset = 0x9d1b0,
	NtCreateKeyTransactedOffset = 0x9e3e0,
	NtCreateKeyedEventOffset = 0x9e400,
	NtCreateLowBoxTokenOffset = 0x9e420,
	NtCreateMailslotFileOffset = 0x9e440,
	NtCreateMutantOffset = 0x9e460,
	NtCreateNamedPipeFileOffset = 0x9e480,
	NtCreatePagingFileOffset = 0x9e4a0,
	NtCreatePartitionOffset = 0x9e4c0,
	NtCreatePortOffset = 0x9e4e0,
	NtCreatePrivateNamespaceOffset = 0x9e500,
	NtCreateProcessOffset = 0x9e520,
	NtCreateProcessExOffset = 0x9d7b0,
	NtCreateProfileOffset = 0x9e540,
	NtCreateProfileExOffset = 0x9e560,
	NtCreateRegistryTransactionOffset = 0x9e580,
	NtCreateResourceManagerOffset = 0x9e5a0,
	NtCreateSectionOffset = 0x9d750,
	NtCreateSectionExOffset = 0x9e5c0,
	NtCreateSemaphoreOffset = 0x9e5e0,
	NtCreateSymbolicLinkObjectOffset = 0x9e600,
	NtCreateThreadOffset = 0x9d7d0,
	NtCreateThreadExOffset = 0x9e620,
	NtCreateTimerOffset = 0x9e640,
	NtCreateTimer2Offset = 0x9e660,
	NtCreateTokenOffset = 0x9e680,
	NtCreateTokenExOffset = 0x9e6a0,
	NtCreateTransactionOffset = 0x9e6c0,
	NtCreateTransactionManagerOffset = 0x9e6e0,
	NtCreateUserProcessOffset = 0x9e700,
	NtCreateWaitCompletionPacketOffset = 0x9e720,
	NtCreateWaitablePortOffset = 0x9e740,
	NtCreateWnfStateNameOffset = 0x9e760,
	NtCreateWorkerFactoryOffset = 0x9e780,
	NtDebugActiveProcessOffset = 0x9e7a0,
	NtDebugContinueOffset = 0x9e7c0,
	NtDelayExecutionOffset = 0x9d490,
	NtDeleteAtomOffset = 0x9e7e0,
	NtDeleteBootEntryOffset = 0x9e800,
	NtDeleteDriverEntryOffset = 0x9e820,
	NtDeleteFileOffset = 0x9e840,
	NtDeleteKeyOffset = 0x9e860,
	NtDeleteObjectAuditAlarmOffset = 0x9e880,
	NtDeletePrivateNamespaceOffset = 0x9e8a0,
	NtDeleteValueKeyOffset = 0x9e8c0,
	NtDeleteWnfStateDataOffset = 0x9e8e0,
	NtDeleteWnfStateNameOffset = 0x9e900,
	NtDeviceIoControlFileOffset = 0x9cef0,
	NtDirectGraphicsCallOffset = 0x9e920,
	NtDisableLastKnownGoodOffset = 0x9e940,
	NtDisplayStringOffset = 0x9e960,
	NtDrawTextOffset = 0x9e980,
	NtDuplicateObjectOffset = 0x9d590,
	NtDuplicateTokenOffset = 0x9d650,
	NtEnableLastKnownGoodOffset = 0x9e9a0,
	NtEnumerateBootEntriesOffset = 0x9e9c0,
	NtEnumerateDriverEntriesOffset = 0x9e9e0,
	NtEnumerateKeyOffset = 0x9d450,
	NtEnumerateSystemEnvironmentValuesExOffset = 0x9ea00,
	NtEnumerateTransactionObjectOffset = 0x9ea20,
	NtEnumerateValueKeyOffset = 0x9d070,
	NtExtendSectionOffset = 0x9ea40,
	NtFilterBootOptionOffset = 0x9ea60,
	NtFilterTokenOffset = 0x9ea80,
	NtFilterTokenExOffset = 0x9eaa0,
	NtFindAtomOffset = 0x9d090,
	NtFlushBuffersFileOffset = 0x9d770,
	NtFlushBuffersFileExOffset = 0x9eac0,
	NtFlushInstallUILanguageOffset = 0x9eae0,
	NtFlushInstructionCacheOffset = 0x9eb00,
	NtFlushKeyOffset = 0x9eb20,
	NtFlushProcessWriteBuffersOffset = 0x9eb40,
	NtFlushVirtualMemoryOffset = 0x9eb60,
	NtFlushWriteBufferOffset = 0x9eb80,
	NtFreeUserPhysicalPagesOffset = 0x9eba0,
	NtFreeVirtualMemoryOffset = 0x9d1d0,
	NtFreezeRegistryOffset = 0x9ebc0,
	NtFreezeTransactionsOffset = 0x9ebe0,
	NtFsControlFileOffset = 0x9d530,
	NtGetCachedSigningLevelOffset = 0x9ec00,
	NtGetCompleteWnfStateSubscriptionOffset = 0x9ec20,
	NtGetContextThreadOffset = 0x9ec40,
	NtGetCurrentProcessorNumberOffset = 0x9ec60,
	NtGetCurrentProcessorNumberExOffset = 0x9ec80,
	NtGetDevicePowerStateOffset = 0x9eca0,
	NtGetMUIRegistryInfoOffset = 0x9ecc0,
	NtGetNextProcessOffset = 0x9ece0,
	NtGetNextThreadOffset = 0x9ed00,
	NtGetNlsSectionPtrOffset = 0x9ed20,
	NtGetNotificationResourceManagerOffset = 0x9ed40,
	NtGetTickCountOffset = 0xe5b50,
	NtGetWriteWatchOffset = 0x9ed60,
	NtImpersonateAnonymousTokenOffset = 0x9ed80,
	NtImpersonateClientOfPortOffset = 0x9d1f0,
	NtImpersonateThreadOffset = 0x9eda0,
	NtInitializeEnclaveOffset = 0x9edc0,
	NtInitializeNlsFilesOffset = 0x9ede0,
	NtInitializeRegistryOffset = 0x9ee00,
	NtInitiatePowerActionOffset = 0x9ee20,
	NtIsProcessInJobOffset = 0x9d7f0,
	NtIsSystemResumeAutomaticOffset = 0x9ee40,
	NtIsUILanguageComittedOffset = 0x9ee60,
	NtListenPortOffset = 0x9ee80,
	NtLoadDriverOffset = 0x9eea0,
	NtLoadEnclaveDataOffset = 0x9eec0,
	NtLoadKeyOffset = 0x9eee0,
	NtLoadKey2Offset = 0x9ef00,
	NtLoadKey3Offset = 0xa08c0,
	NtLoadKeyExOffset = 0x9ef20,
	NtLockFileOffset = 0x9ef40,
	NtLockProductActivationKeysOffset = 0x9ef60,
	NtLockRegistryKeyOffset = 0x9ef80,
	NtLockVirtualMemoryOffset = 0x9efa0,
	NtMakePermanentObjectOffset = 0x9efc0,
	NtMakeTemporaryObjectOffset = 0x9efe0,
	NtManageHotPatchOffset = 0x9f000,
	NtManagePartitionOffset = 0x9f020,
	NtMapCMFModuleOffset = 0x9f040,
	NtMapUserPhysicalPagesOffset = 0x9f060,
	NtMapUserPhysicalPagesScatterOffset = 0x9ce70,
	NtMapViewOfSectionOffset = 0x9d310,
	NtMapViewOfSectionExOffset = 0x9f080,
	NtModifyBootEntryOffset = 0x9f0a0,
	NtModifyDriverEntryOffset = 0x9f0c0,
	NtNotifyChangeDirectoryFileOffset = 0x9f0e0,
	NtNotifyChangeDirectoryFileExOffset = 0x9f100,
	NtNotifyChangeKeyOffset = 0x9f120,
	NtNotifyChangeMultipleKeysOffset = 0x9f140,
	NtNotifyChangeSessionOffset = 0x9f160,
	NtOpenDirectoryObjectOffset = 0x9d910,
	NtOpenEnlistmentOffset = 0x9f180,
	NtOpenEventOffset = 0x9d610,
	NtOpenEventPairOffset = 0x9f1a0,
	NtOpenFileOffset = 0x9d470,
	NtOpenIoCompletionOffset = 0x9f1c0,
	NtOpenJobObjectOffset = 0x9f1e0,
	NtOpenKeyOffset = 0x9d050,
	NtOpenKeyExOffset = 0x9f200,
	NtOpenKeyTransactedOffset = 0x9f220,
	NtOpenKeyTransactedExOffset = 0x9f240,
	NtOpenKeyedEventOffset = 0x9f260,
	NtOpenMutantOffset = 0x9f280,
	NtOpenObjectAuditAlarmOffset = 0x9f2a0,
	NtOpenPartitionOffset = 0x9f2c0,
	NtOpenPrivateNamespaceOffset = 0x9f2e0,
	NtOpenProcessOffset = 0x9d2d0,
	NtOpenProcessTokenOffset = 0x9f300,
	NtOpenProcessTokenExOffset = 0x9d410,
	NtOpenRegistryTransactionOffset = 0x9f320,
	NtOpenResourceManagerOffset = 0x9f340,
	NtOpenSectionOffset = 0x9d4f0,
	NtOpenSemaphoreOffset = 0x9f360,
	NtOpenSessionOffset = 0x9f380,
	NtOpenSymbolicLinkObjectOffset = 0x9f3a0,
	NtOpenThreadOffset = 0x9f3c0,
	NtOpenThreadTokenOffset = 0x9d290,
	NtOpenThreadTokenExOffset = 0x9d3f0,
	NtOpenTimerOffset = 0x9f3e0,
	NtOpenTransactionOffset = 0x9f400,
	NtOpenTransactionManagerOffset = 0x9f420,
	NtPlugPlayControlOffset = 0x9f440,
	NtPowerInformationOffset = 0x9d9e0,
	NtPrePrepareCompleteOffset = 0x9f460,
	NtPrePrepareEnlistmentOffset = 0x9f480,
	NtPrepareCompleteOffset = 0x9f4a0,
	NtPrepareEnlistmentOffset = 0x9f4c0,
	NtPrivilegeCheckOffset = 0x9f4e0,
	NtPrivilegeObjectAuditAlarmOffset = 0x9f500,
	NtPrivilegedServiceAuditAlarmOffset = 0x9f520,
	NtPropagationCompleteOffset = 0x9f540,
	NtPropagationFailedOffset = 0x9f560,
	NtProtectVirtualMemoryOffset = 0x9d810,
	NtPssCaptureVaSpaceBulkOffset = 0x9f580,
	NtPulseEventOffset = 0x9f5a0,
	NtQueryAttributesFileOffset = 0x9d5b0,
	NtQueryAuxiliaryCounterFrequencyOffset = 0x9f5c0,
	NtQueryBootEntryOrderOffset = 0x9f5e0,
	NtQueryBootOptionsOffset = 0x9f600,
	NtQueryDebugFilterStateOffset = 0x9f620,
	NtQueryDefaultLocaleOffset = 0x9d0b0,
	NtQueryDefaultUILanguageOffset = 0x9d690,
	NtQueryDirectoryFileOffset = 0x9d4b0,
	NtQueryDirectoryFileExOffset = 0x9f640,
	NtQueryDirectoryObjectOffset = 0x9f660,
	NtQueryDriverEntryOrderOffset = 0x9f680,
	NtQueryEaFileOffset = 0x9f6a0,
	NtQueryEventOffset = 0x9d8d0,
	NtQueryFullAttributesFileOffset = 0x9f6c0,
	NtQueryInformationAtomOffset = 0x9f6e0,
	NtQueryInformationByNameOffset = 0x9f700,
	NtQueryInformationEnlistmentOffset = 0x9f720,
	NtQueryInformationFileOffset = 0x9d030,
	NtQueryInformationJobObjectOffset = 0x9f740,
	NtQueryInformationPortOffset = 0x9f760,
	NtQueryInformationProcessOffset = 0x9d130,
	NtQueryInformationResourceManagerOffset = 0x9f780,
	NtQueryInformationThreadOffset = 0x9d2b0,
	NtQueryInformationTokenOffset = 0x9d230,
	NtQueryInformationTransactionOffset = 0x9f7a0,
	NtQueryInformationTransactionManagerOffset = 0x9f7c0,
	NtQueryInformationWorkerFactoryOffset = 0x9f7e0,
	NtQueryInstallUILanguageOffset = 0x9f800,
	NtQueryIntervalProfileOffset = 0x9f820,
	NtQueryIoCompletionOffset = 0x9f840,
	NtQueryKeyOffset = 0x9d0d0,
	NtQueryLicenseValueOffset = 0x9f860,
	NtQueryMultipleValueKeyOffset = 0x9f880,
	NtQueryMutantOffset = 0x9f8a0,
	NtQueryObjectOffset = 0x9d010,
	NtQueryOpenSubKeysOffset = 0x9f8c0,
	NtQueryOpenSubKeysExOffset = 0x9f8e0,
	NtQueryPerformanceCounterOffset = 0x9d430,
	NtQueryPortInformationProcessOffset = 0x9f900,
	NtQueryQuotaInformationFileOffset = 0x9f920,
	NtQuerySectionOffset = 0x9d830,
	NtQuerySecurityAttributesTokenOffset = 0x9f940,
	NtQuerySecurityObjectOffset = 0x9f960,
	NtQuerySecurityPolicyOffset = 0x9f980,
	NtQuerySemaphoreOffset = 0x9f9a0,
	NtQuerySymbolicLinkObjectOffset = 0x9f9c0,
	NtQuerySystemEnvironmentValueOffset = 0x9f9e0,
	NtQuerySystemEnvironmentValueExOffset = 0x9fa00,
	NtQuerySystemInformationOffset = 0x9d4d0,
	NtQuerySystemInformationExOffset = 0x9fa20,
	NtQuerySystemTimeOffset = 0x9d950,
	NtQueryTimerOffset = 0x9d510,
	NtQueryTimerResolutionOffset = 0x9fa40,
	NtQueryValueKeyOffset = 0x9d0f0,
	NtQueryVirtualMemoryOffset = 0x9d270,
	NtQueryVolumeInformationFileOffset = 0x9d730,
	NtQueryWnfStateDataOffset = 0x9fa60,
	NtQueryWnfStateNameInformationOffset = 0x9fa80,
	NtQueueApcThreadOffset = 0x9d6b0,
	NtQueueApcThreadExOffset = 0x9faa0,
	NtRaiseExceptionOffset = 0x9fac0,
	NtRaiseHardErrorOffset = 0x9fae0,
	NtReadFileOffset = 0x9ced0,
	NtReadFileScatterOffset = 0x9d3d0,
	NtReadOnlyEnlistmentOffset = 0x9fb00,
	NtReadRequestDataOffset = 0x9d890,
	NtReadVirtualMemoryOffset = 0x9d5f0,
	NtRecoverEnlistmentOffset = 0x9fb20,
	NtRecoverResourceManagerOffset = 0x9fb40,
	NtRecoverTransactionManagerOffset = 0x9fb60,
	NtRegisterProtocolAddressInformationOffset = 0x9fb80,
	NtRegisterThreadTerminatePortOffset = 0x9fba0,
	NtReleaseKeyedEventOffset = 0x9fbc0,
	NtReleaseMutantOffset = 0x9d210,
	NtReleaseSemaphoreOffset = 0x9cf50,
	NtReleaseWorkerFactoryWorkerOffset = 0x9fbe0,
	NtRemoveIoCompletionOffset = 0x9cf30,
	NtRemoveIoCompletionExOffset = 0x9fc00,
	NtRemoveProcessDebugOffset = 0x9fc20,
	NtRenameKeyOffset = 0x9fc40,
	NtRenameTransactionManagerOffset = 0x9fc60,
	NtReplaceKeyOffset = 0x9fc80,
	NtReplacePartitionUnitOffset = 0x9fca0,
	NtReplyPortOffset = 0x9cf90,
	NtReplyWaitReceivePortOffset = 0x9cf70,
	NtReplyWaitReceivePortExOffset = 0x9d370,
	NtReplyWaitReplyPortOffset = 0x9fcc0,
	NtRequestPortOffset = 0x9fce0,
	NtRequestWaitReplyPortOffset = 0x9d250,
	NtResetEventOffset = 0x9fd00,
	NtResetWriteWatchOffset = 0x9fd20,
	NtRestoreKeyOffset = 0x9fd40,
	NtResumeProcessOffset = 0x9fd60,
	NtResumeThreadOffset = 0x9d850,
	NtRevertContainerImpersonationOffset = 0x9fd80,
	NtRollbackCompleteOffset = 0x9fda0,
	NtRollbackEnlistmentOffset = 0x9fdc0,
	NtRollbackRegistryTransactionOffset = 0x9fde0,
	NtRollbackTransactionOffset = 0x9fe00,
	NtRollforwardTransactionManagerOffset = 0x9fe20,
	NtSaveKeyOffset = 0x9fe40,
	NtSaveKeyExOffset = 0x9fe60,
	NtSaveMergedKeysOffset = 0x9fe80,
	NtSecureConnectPortOffset = 0x9fea0,
	NtSerializeBootOffset = 0x9fec0,
	NtSetBootEntryOrderOffset = 0x9fee0,
	NtSetBootOptionsOffset = 0x9ff00,
	NtSetCachedSigningLevelOffset = 0x9ff20,
	NtSetCachedSigningLevel2Offset = 0x9ff40,
	NtSetContextThreadOffset = 0x9ff60,
	NtSetDebugFilterStateOffset = 0x9ff80,
	NtSetDefaultHardErrorPortOffset = 0x9ffa0,
	NtSetDefaultLocaleOffset = 0x9ffc0,
	NtSetDefaultUILanguageOffset = 0x9ffe0,
	NtSetDriverEntryOrderOffset = 0xa0000,
	NtSetEaFileOffset = 0xa0020,
	NtSetEventOffset = 0x9cfd0,
	NtSetEventBoostPriorityOffset = 0x9d3b0,
	NtSetHighEventPairOffset = 0xa0040,
	NtSetHighWaitLowEventPairOffset = 0xa0060,
	NtSetIRTimerOffset = 0xa0080,
	NtSetInformationDebugObjectOffset = 0xa00a0,
	NtSetInformationEnlistmentOffset = 0xa00c0,
	NtSetInformationFileOffset = 0x9d2f0,
	NtSetInformationJobObjectOffset = 0xa00e0,
	NtSetInformationKeyOffset = 0xa0100,
	NtSetInformationObjectOffset = 0x9d980,
	NtSetInformationProcessOffset = 0x9d190,
	NtSetInformationResourceManagerOffset = 0xa0120,
	NtSetInformationSymbolicLinkOffset = 0xa0140,
	NtSetInformationThreadOffset = 0x9cfb0,
	NtSetInformationTokenOffset = 0xa0160,
	NtSetInformationTransactionOffset = 0xa0180,
	NtSetInformationTransactionManagerOffset = 0xa01a0,
	NtSetInformationVirtualMemoryOffset = 0xa01c0,
	NtSetInformationWorkerFactoryOffset = 0xa01e0,
	NtSetIntervalProfileOffset = 0xa0200,
	NtSetIoCompletionOffset = 0xa0220,
	NtSetIoCompletionExOffset = 0xa0240,
	NtSetLdtEntriesOffset = 0xa0260,
	NtSetLowEventPairOffset = 0xa0280,
	NtSetLowWaitHighEventPairOffset = 0xa02a0,
	NtSetQuotaInformationFileOffset = 0xa02c0,
	NtSetSecurityObjectOffset = 0xa02e0,
	NtSetSystemEnvironmentValueOffset = 0xa0300,
	NtSetSystemEnvironmentValueExOffset = 0xa0320,
	NtSetSystemInformationOffset = 0xa0340,
	NtSetSystemPowerStateOffset = 0xa0360,
	NtSetSystemTimeOffset = 0xa0380,
	NtSetThreadExecutionStateOffset = 0xa03a0,
	NtSetTimerOffset = 0x9da40,
	NtSetTimer2Offset = 0xa03c0,
	NtSetTimerExOffset = 0xa03e0,
	NtSetTimerResolutionOffset = 0xa0400,
	NtSetUuidSeedOffset = 0xa0420,
	NtSetValueKeyOffset = 0x9da00,
	NtSetVolumeInformationFileOffset = 0xa0440,
	NtSetWnfProcessNotificationEventOffset = 0xa0460,
	NtShutdownSystemOffset = 0xa0480,
	NtShutdownWorkerFactoryOffset = 0xa04a0,
	NtSignalAndWaitForSingleObjectOffset = 0xa04c0,
	NtSinglePhaseRejectOffset = 0xa04e0,
	NtStartProfileOffset = 0xa0500,
	NtStopProfileOffset = 0xa0520,
	NtSubscribeWnfStateChangeOffset = 0xa0540,
	NtSuspendProcessOffset = 0xa0560,
	NtSuspendThreadOffset = 0xa0580,
	NtSystemDebugControlOffset = 0xa05a0,
	NtTerminateEnclaveOffset = 0xa05c0,
	NtTerminateJobObjectOffset = 0xa05e0,
	NtTerminateProcessOffset = 0x9d390,
	NtTerminateThreadOffset = 0x9d870,
	NtTestAlertOffset = 0xa0600,
	NtThawRegistryOffset = 0xa0620,
	NtThawTransactionsOffset = 0xa0640,
	NtTraceControlOffset = 0xa0660,
	NtTraceEventOffset = 0x9d9c0,
	NtTranslateFilePathOffset = 0xa0680,
	NtUmsThreadYieldOffset = 0xa06a0,
	NtUnloadDriverOffset = 0xa06c0,
	NtUnloadKeyOffset = 0xa06e0,
	NtUnloadKey2Offset = 0xa0700,
	NtUnloadKeyExOffset = 0xa0720,
	NtUnlockFileOffset = 0xa0740,
	NtUnlockVirtualMemoryOffset = 0xa0760,
	NtUnmapViewOfSectionOffset = 0x9d350,
	NtUnmapViewOfSectionExOffset = 0xa0780,
	NtUnsubscribeWnfStateChangeOffset = 0xa07a0,
	NtUpdateWnfStateDataOffset = 0xa07c0,
	NtVdmControlOffset = 0xa07e0,
	NtWaitForAlertByThreadIdOffset = 0xa0800,
	NtWaitForDebugEventOffset = 0xa0820,
	NtWaitForKeyedEventOffset = 0xa0840,
	NtWaitForMultipleObjectsOffset = 0x9d960,
	NtWaitForMultipleObjects32Offset = 0x9d150,
	NtWaitForSingleObjectOffset = 0x9ce90,
	NtWaitForWorkViaWorkerFactoryOffset = 0xa0860,
	NtWaitHighEventPairOffset = 0xa0880,
	NtWaitLowEventPairOffset = 0xa08a0,
	NtWorkerFactoryWorkerReadyOffset = 0x9ce30,
	NtWriteFileOffset = 0x9cf10,
	NtWriteFileGatherOffset = 0x9d170,
	NtWriteRequestDataOffset = 0x9d8f0,
	NtWriteVirtualMemoryOffset = 0x9d550,
	NtYieldExecutionOffset = 0x9d6d0
};