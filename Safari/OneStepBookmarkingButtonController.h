//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSMenuDelegate-Protocol.h>

@class NSMenu, NSString, OneStepBookmarkingButton;

__attribute__((visibility("hidden")))
@interface OneStepBookmarkingButtonController : NSObject <NSMenuDelegate>
{
    NSMenu *_dynamicOneStepBookmarkingMenu;
    OneStepBookmarkingButton *_oneStepBookmarkingButton;
}

@property(nonatomic) __weak OneStepBookmarkingButton *oneStepBookmarkingButton; // @synthesize oneStepBookmarkingButton=_oneStepBookmarkingButton;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)handleButtonDrag:(id)arg1 mouseDownEvent:(id)arg2;
- (id)oneStepBookmarkingButtonActionDescription;
- (void)updateOneStepBookmarkingButton;
- (void)_addBookmarkToFolder:(id)arg1;
- (void)_addBookmarkToTopSites:(id)arg1;
- (void)_addBookmarkToReadingList:(id)arg1;
- (void)oneClickAddBookmark:(id)arg1;
- (unsigned long long)_oneStepBookmarkingDefaultDestination;
- (unsigned long long)_bookmarkDestinationForRepresentedObject:(id)arg1;
- (void)_didSelectOneStepBookmarkMenuItemWithIdentifier:(id)arg1 makeDefault:(BOOL)arg2;
- (unsigned long long)_insertionLocationForNewBookmarkInFolder:(id)arg1 destinationFolder:(id *)arg2;
- (void)_addBookmarkWithoutAskingToFolder:(id)arg1 andMakeDefault:(BOOL)arg2;
- (void)_addBookmarkToTopSitesWithoutAskingAndMakeDefault:(BOOL)arg1;
- (void)_addBookmarkToReadingListWithoutAskingAndMakeDefault:(BOOL)arg1;
- (void)_addOneStepBookmarkingMenuItemsForBookmarkFolder:(id)arg1 toMenu:(id)arg2 indentationLevel:(unsigned long long)arg3;
- (id)_representedObjectForOneStepBookmarkingMenuItemWithUserDefaultKey:(id)arg1;
- (void)_addTopSitesMenuItemToMenu:(id)arg1;
- (void)_setUpOneStepBookmarkingMenu:(id)arg1;
- (id)_oneStepBookmarkingTopSiteMenuItemIcon;
- (id)_oneStepBookmarkingBookmarkMenuItemIcon;
- (id)_oneStepBookmarkingReadingListMenuItemIcon;
- (BOOL)_canAddBookmark;
- (id)_dynamicOneStepBookmarkingMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

