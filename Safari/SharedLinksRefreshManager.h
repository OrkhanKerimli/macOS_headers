//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface SharedLinksRefreshManager : NSObject
{
    unsigned long long _numberOfSharedLinksViews;
    NSTimer *_refreshTimer;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_invalidateRefreshTimer;
- (void)_scheduleRefreshTimer;
- (void)_refreshTimerFired:(id)arg1;
- (void)updateSharedLinksContent;
- (void)sharedLinksViewWasRemoved;
- (void)sharedLinksViewWasAdded;

@end

