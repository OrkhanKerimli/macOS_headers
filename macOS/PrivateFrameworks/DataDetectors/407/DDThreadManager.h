//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface DDThreadManager : NSObject
{
    NSOperationQueue *_queue;
    BOOL _stopping;
}

- (void).cxx_destruct;
- (void)cancelOperationForIdentifier:(id)arg1;
- (id)queueTextToScanInController:(id)arg1 identifier:(id)arg2 delegate:(id)arg3 retryCount:(int)arg4;
- (void)deactivate;
- (id)init;

@end

