//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

#import <Safari/FetchableItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BookmarkSummaryRequest : WBSSiteMetadataRequest <FetchableItem>
{
}

- (id)urlString;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

