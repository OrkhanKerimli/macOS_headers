//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/BookmarkSource-Protocol.h>
#import <Safari/NSMenuDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BookmarkSource : NSObject <BookmarkSource, NSMenuDelegate>
{
    NSMutableSet *_updatedBookmarkSourceMenus;
    NSMapTable *_tabPlacementHintsForBookmarkSourceMenus;
}

- (void).cxx_destruct;
- (id)bookmarkSourceMenuTitle;
- (id)imageForContentItem:(id)arg1;
- (id)titleStringForContentItem:(id)arg1;
- (id)addressStringForContentItem:(id)arg1;
- (id)bookmarkSourceImage;
- (id)bookmarksFromContentItems:(id)arg1;
- (id)bookmarksFromHistoryItems:(id)arg1;
- (BOOL)canGoToContentItem:(id)arg1;
- (void)openDescendantsOfContentItemInNewTabs:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)replaceTabsWithDescendantsOfContentItem:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToContentItemInNewWindow:(id)arg1;
- (void)goToContentItem:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (id)bookmarkFromContentItem:(id)arg1;
- (id)contentItemsToExpandOnReload;
- (id)contentItemsToInitiallyExpand;
- (void)didExpandContentItem:(id)arg1;
- (void)didCollapseContentItem:(id)arg1;
- (id)parentOfContentItem:(id)arg1;
- (unsigned int)numberOfChildrenOfContentItem:(id)arg1;
- (id)child:(unsigned int)arg1 ofContentItem:(id)arg2;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (BOOL)contentItemCanBeSearchResult:(id)arg1;
- (BOOL)deleteContentItems:(id)arg1 withParentWindow:(id)arg2 undoManager:(id)arg3;
- (BOOL)canDeleteContents;
- (BOOL)canCopyContents;
- (void)refreshContents;
- (BOOL)menuHasKeyEquivalent:(id)arg1 forEvent:(id)arg2 target:(id *)arg3 action:(SEL *)arg4;
- (BOOL)menuNeedsRealUpdate:(id)arg1;
- (void)setMenu:(id)arg1 needsRealUpdate:(BOOL)arg2;
- (void)setAllMenusNeedRealUpdate;
- (void)removeBookmarkSourceMenu:(id)arg1;
- (struct TabPlacementHint)tabPlacementHintForMenu:(id)arg1;
- (void)addBookmarkSourceMenu:(id)arg1 withTabPlacementHint:(const struct TabPlacementHint *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

