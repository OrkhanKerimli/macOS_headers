//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSXPCListenerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SafariNotificationAgentDelegate : NSObject <NSXPCListenerDelegate>
{
    NSMutableDictionary *_centers;
}

- (void).cxx_destruct;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)forgetRemoteNotificationPermissionForWebsite:(id)arg1;
- (void)unregisterRemoteNotificationPermission:(id)arg1;
- (BOOL)tryToRegisterRemoteNotificationPermission:(id)arg1;
- (id)_ensureCenterDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

