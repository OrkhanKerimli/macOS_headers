//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class WKWebProcessPlugInBrowserContextController, WKWebProcessPlugInController;

@protocol WKWebProcessPlugIn <NSObject>

@optional
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 willDestroyBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 didCreateBrowserContextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (void)webProcessPlugIn:(WKWebProcessPlugInController *)arg1 initializeWithObject:(id)arg2;
@end

