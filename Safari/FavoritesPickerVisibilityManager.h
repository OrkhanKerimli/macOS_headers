//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextInputContext;
@protocol FavoritesPickerVisibilityController, FavoritesPickerVisibilityManagerDataSource;

__attribute__((visibility("hidden")))
@interface FavoritesPickerVisibilityManager : NSObject
{
    BOOL _observingKeyboardInputSourceOverlayVisibility;
    NSTextInputContext *_textInputContextBeingObserved;
    id <FavoritesPickerVisibilityController> _pickerVisibilityController;
    id <FavoritesPickerVisibilityManagerDataSource> _dataSource;
}

@property(nonatomic) __weak id <FavoritesPickerVisibilityManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FavoritesPickerVisibilityController> pickerVisibilityController; // @synthesize pickerVisibilityController=_pickerVisibilityController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isInputMethodsBarVisible;
- (void)_stopObservingKeyboardInputSourceOverlayVisibility;
- (void)_observeKeyboardInputSourceOverlayVisibilityIfNeeded;
- (void)_dismissFavoritesPicker:(id)arg1;
- (void)_showFavoritesPickerFromFavoritesBeingInstalledNotification:(id)arg1;
- (void)_showFavoritesPickerFromUnifiedFieldNotification:(id)arg1;
- (void)browserContentViewControllerDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)backgroundLoadControllerDidCommitBackgroundLoad;
- (void)stopObservingKeyboardMethodsBarVisibility;
- (void)startObservingKeyboardMethodsBarVisibility;
- (void)unregisterFromNotificationsForUnifiedFieldCompletionController:(id)arg1;
- (void)registerForNotificationsForUnifiedFieldCompletionController:(id)arg1;
- (void)unregisterFromWindowNotifications;
- (void)registerForWindowNotifications;

@end

