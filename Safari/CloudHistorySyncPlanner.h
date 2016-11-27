//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, WBSCloudHistory;

__attribute__((visibility("hidden")))
@interface CloudHistorySyncPlanner : NSObject
{
    WBSCloudHistory *_cloudHistory;
    _Bool _isMonitoringForTriggersAndSyncAttemptNotifications;
    NSTimer *_historyItemsAddedOrChangedIdleTimer;
    NSTimer *_historyItemsRemovedIdleTimer;
    _Bool _ignoresDisplaysDidSleepNotification;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _pendingCloudOperationSuddenTerminationDisabler;
    NSTimer *_saveChangesBeforeTerminationTimeoutTimer;
}

+ (id)sharedPlanner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)syncForDebugPurposesBypassingThrottler:(BOOL)arg1;
- (void)_saveAttemptDuringTerminationDidFinish;
- (void)_saveChangesBeforeTerminationTimerFired:(id)arg1;
- (BOOL)_isDeferringTerminationToSaveChanges;
- (void)savePendingChangesToCloudAndTerminate;
- (BOOL)shouldDeferTerminationToSaveChangesToCloud;
- (void)_displaysDidWake:(id)arg1;
- (void)_displaysDidSleep:(id)arg1;
- (void)_systemWillSleep:(id)arg1;
- (void)_invalidateHistoryTimers;
- (void)_historyWasCleared:(id)arg1;
- (void)_historyItemsWereRemovedTimerFired:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyItemsWereAddedOrChangedTimerFired:(id)arg1;
- (void)_historyItemsWereAddedOrChanged:(id)arg1;
- (void)_cloudHistorySaveAttemptDidComplete:(id)arg1;
- (void)_sync;
- (void)_saveChanges;
- (void)_stopMonitoringForTriggersAndSyncAttemptNotifications;
- (void)_startMonitoringForTriggersAndSyncAttemptNotifications;
- (void)_resetCloudHistoryIfNecessary;
- (void)_safariSyncStatusMayHaveChanged:(id)arg1;
- (void)_cloudHistoryConfigurationDidFullyConfigure:(id)arg1;
- (BOOL)_syncOnAppStartupIfReady;
- (void)syncOnAppStartup;
@property(readonly, nonatomic, getter=isCloudHistoryEnabled) BOOL cloudHistoryEnabled;
- (id)init;

@end

