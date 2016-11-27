//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSCloudHistoryConfiguration.h>

#import <Safari/RemoteConfigurationConsumer-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration <RemoteConfigurationConsumer>
{
    NSDictionary *_remoteConfiguration;
    BOOL _fullyConfigured;
    double _historyModificationIdleDelayBeforeSyncAttempt;
    double _historyRemovalIdleDelayBeforeSyncAttempt;
    double _saveChangesBeforeTerminationTimeout;
}

+ (id)sharedConfiguration;
@property(readonly, nonatomic) double saveChangesBeforeTerminationTimeout; // @synthesize saveChangesBeforeTerminationTimeout=_saveChangesBeforeTerminationTimeout;
@property(readonly, nonatomic) double historyRemovalIdleDelayBeforeSyncAttempt; // @synthesize historyRemovalIdleDelayBeforeSyncAttempt=_historyRemovalIdleDelayBeforeSyncAttempt;
@property(readonly, nonatomic) double historyModificationIdleDelayBeforeSyncAttempt; // @synthesize historyModificationIdleDelayBeforeSyncAttempt=_historyModificationIdleDelayBeforeSyncAttempt;
@property(readonly, nonatomic, getter=isFullyConfigured) BOOL fullyConfigured; // @synthesize fullyConfigured=_fullyConfigured;
- (void).cxx_destruct;
- (BOOL)remoteConfigurationsController:(id)arg1 didReceiveNewConfiguration:(id)arg2 forKey:(id)arg3;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)remoteConfiguration;
- (id)platformBuiltInConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

