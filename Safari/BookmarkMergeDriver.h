//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BookmarksUndoController;
@protocol BookmarkMergeDriverDelegate;

__attribute__((visibility("hidden")))
@interface BookmarkMergeDriver : NSObject
{
    BookmarksUndoController *_bookmarksUndoController;
    BOOL _delegateImplementsShouldMergeTitles;
    id <BookmarkMergeDriverDelegate> _delegate;
}

@property(nonatomic) __weak id <BookmarkMergeDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_mergeBookmark:(id)arg1 withExistingBookmark:(id)arg2;
- (void)mergeBookmarkFolder:(id)arg1 withExistingFolder:(id)arg2;
- (id)initWithUndoController:(id)arg1;
- (id)init;

@end

