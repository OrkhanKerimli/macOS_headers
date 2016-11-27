//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSNetServiceBrowserDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSString;

__attribute__((visibility("hidden")))
@interface BonjourServiceCollector : NSObject <NSNetServiceBrowserDelegate>
{
    NSNetServiceBrowser *_serviceBrowser;
    NSMutableArray *_services;
    NSMutableDictionary *_serviceNameToServices;
    id _delegate;
}

- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (unsigned int)countOfServicesNamed:(id)arg1;
- (id)servicesNamed:(id)arg1;
- (id)services;
- (id)initWithServiceType:(id)arg1 inDomain:(id)arg2;
- (id)delegate;
- (void)dealloc;
- (void)_removeServiceFromServiceNamesDictionary:(id)arg1;
- (void)_populateServiceNamesDictionaryIfNeeded;
- (void)_addServiceToServiceNamesDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

