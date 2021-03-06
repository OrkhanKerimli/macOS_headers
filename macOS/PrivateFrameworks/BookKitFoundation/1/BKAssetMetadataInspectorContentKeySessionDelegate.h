//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookKitFoundation/AVContentKeySessionDelegate-Protocol.h>

@class NSString;

@interface BKAssetMetadataInspectorContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate>
{
    int _audibleDRMGroupID;
}

@property(nonatomic) int audibleDRMGroupID; // @synthesize audibleDRMGroupID=_audibleDRMGroupID;
- (void)contentKeySession:(id)arg1 contentKeyRequest:(id)arg2 didFailWithError:(id)arg3;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (id)initWithDRMGroupID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

