//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ReadingListTableViewContentProvider;

__attribute__((visibility("hidden")))
@interface ContinuousReadingListDataSourceBase : NSObject
{
    id <ReadingListTableViewContentProvider> _contentProvider;
}

+ (id)continuousReadingListPageItemForReadingListItem:(id)arg1;
@property(readonly, retain, nonatomic) id <ReadingListTableViewContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (void).cxx_destruct;
- (id)continuousReadingListPageItemFollowingPageItem:(id)arg1;
- (id)continuousReadingListPageItemPrecedingPageItem:(id)arg1;
- (id)initWithReadingListTableViewContentProvider:(id)arg1;

@end

