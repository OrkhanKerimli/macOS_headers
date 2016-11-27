//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/NSWindowDelegate-Protocol.h>

@class NSPopUpButton, NSString, NSTextField, WebBookmark, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface BookmarkEditSheetController : NSWindowController <NSWindowDelegate>
{
    NSPopUpButton *locationPopUp;
    NSTextField *promptField;
    NSTextField *titleField;
    NSTextField *descriptionField;
    BOOL _titleOnly;
    BOOL _inModalDelegateCallback;
    BOOL _restrictedToBookmarksBar;
    WebBookmark *_bookmark;
    NSString *_suggestedTitle;
}

+ (id)_suggestedTitleForBookmark:(id)arg1;
+ (id)beginBookmarkEditSheetWithBookmark:(id)arg1 restrictedToBookmarksBar:(BOOL)arg2 titleOnly:(BOOL)arg3 modalForWindow:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) NSString *suggestedTitle; // @synthesize suggestedTitle=_suggestedTitle;
@property(readonly, nonatomic, getter=isRestrictedToBookmarksBar) BOOL restrictedToBookmarksBar; // @synthesize restrictedToBookmarksBar=_restrictedToBookmarksBar;
@property(readonly, nonatomic) WebBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (void).cxx_destruct;
- (id)_uuidOfSelectedBookmarkLocationInPopup;
- (void)_stopObservingBookmarkChanges;
- (void)_startObservingBookmarkChanges;
- (void)_populateLocationPopUp;
- (long long)_menuIndexForBookmarkLocationUUID:(id)arg1;
- (void)_bookmarksChanged:(id)arg1;
- (void)_sheetDidEnd;
@property(readonly, nonatomic) BOOL shouldAddBookmarkToTopSites;
@property(readonly, nonatomic) WebBookmarkList *bookmarkParent;
- (void)cancelNewBookmark:(id)arg1;
- (void)acceptNewBookmark:(id)arg1;
- (id)windowNibName;
- (void)windowDidLoad;
- (id)_initWithBookmark:(id)arg1 restrictedToBookmarksBar:(BOOL)arg2 titleOnly:(BOOL)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

