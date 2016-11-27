//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BrowserContentViewControllerObjCAdapter, FavoritesPickerVisibilityManager, NSTextInputContext;

@protocol FavoritesPickerVisibilityManagerDataSource
- (NSTextInputContext *)visibilityManagerInputContextForKeyboardMethodsBarVisibility:(FavoritesPickerVisibilityManager *)arg1;
- (BOOL)visibilityManagerIsUnifiedFieldBeingEdited:(FavoritesPickerVisibilityManager *)arg1;
- (BOOL)visibilityManager:(FavoritesPickerVisibilityManager *)arg1 isBrowserContentViewControllerCurrentlyActive:(BrowserContentViewControllerObjCAdapter *)arg2;
- (BOOL)visibilityManagerIsCurrentWindowMain:(FavoritesPickerVisibilityManager *)arg1;
- (BOOL)visibilityManagerWantsFavoritesInCompletionList:(FavoritesPickerVisibilityManager *)arg1;
- (BOOL)visibilityManagerIsWindowCurrentlySwitchingTabs:(FavoritesPickerVisibilityManager *)arg1;
@end

