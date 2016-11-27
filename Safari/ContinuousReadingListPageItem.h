//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSCopying-Protocol.h>

@class NSAttributedString, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface ContinuousReadingListPageItem : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *reposterScreenName;
@property(readonly, nonatomic) NSString *reposterDisplayName;
@property(readonly, nonatomic, getter=isRepostedByAuthenticatedUser) BOOL repostedByAuthenticatedUser;
@property(readonly, nonatomic, getter=isSocial) BOOL social;
@property(readonly, nonatomic) BOOL hasDefaultSiteIcon;
@property(readonly, nonatomic) NSImage *secondaryIcon;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) NSString *screenName;
@property(readonly, nonatomic) NSString *itemDescription;
@property(readonly, nonatomic) NSAttributedString *title;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSObject *representedReadingListItem;

@end

