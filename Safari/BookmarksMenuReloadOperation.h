//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

#import <Safari/CoalesceableBookmarksOperation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarksMenuReloadOperation : NSBlockOperation <CoalesceableBookmarksOperation>
{
}

+ (double)minimumTimeIntervalBetweenOperations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

