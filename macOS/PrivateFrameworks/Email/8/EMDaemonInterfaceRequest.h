//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFSignpostable.h"

@class NSString;

@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>
{
}

+ (unsigned long long)uniqueRequestID;
+ (id)systemScopeSignpostLog;
+ (id)signpostLog;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

