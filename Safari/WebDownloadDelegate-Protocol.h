//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSURLDownloadDelegate-Protocol.h>

@class NSWindow, WebDownload;

@protocol WebDownloadDelegate <NSURLDownloadDelegate>

@optional
- (NSWindow *)downloadWindowForAuthenticationSheet:(WebDownload *)arg1;
@end

