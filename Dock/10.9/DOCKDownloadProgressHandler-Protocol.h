//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol DOCKDownloadProgressHandler <NSObject>
- (struct CGRect)dockDownloadFlyToRect;
- (void)dockDownloadProgress:(float)arg1 cancelable:(BOOL)arg2 forFile:(NSString *)arg3;
- (void)dockDownloadProgress:(float)arg1;
@end

