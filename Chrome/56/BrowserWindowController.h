//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/TabWindowController.h>

#import <Google Chrome Framework/BookmarkBarControllerDelegate-Protocol.h>
#import <Google Chrome Framework/TabStripControllerDelegate-Protocol.h>
#import <Google Chrome Framework/ViewResizer-Protocol.h>

@class BookmarkBubbleController, NSString, NSWindow, TranslateBubbleController;

__attribute__((visibility("hidden")))
@interface BrowserWindowController : TabWindowController <BookmarkBarControllerDelegate, ViewResizer, TabStripControllerDelegate>
{
    struct unique_ptr<Browser, std::__1::default_delete<Browser>> browser_;
    NSWindow *savedRegularWindow_;
    struct unique_ptr<BrowserWindowCocoa, std::__1::default_delete<BrowserWindowCocoa>> windowShim_;
    struct scoped_nsobject<ToolbarController> toolbarController_;
    struct scoped_nsobject<TabStripController> tabStripController_;
    struct scoped_nsobject<FindBarCocoaController> findBarCocoaController_;
    struct scoped_nsobject<InfoBarContainerController> infoBarContainerController_;
    struct scoped_nsobject<DownloadShelfController> downloadShelfController_;
    struct scoped_nsobject<BookmarkBarController> bookmarkBarController_;
    struct scoped_nsobject<DevToolsController> devToolsController_;
    struct scoped_nsobject<OverlayableContentsController> overlayableContentsController_;
    struct scoped_nsobject<FullscreenToolbarController> fullscreenToolbarController_;
    struct unique_ptr<ExclusiveAccessController, std::__1::default_delete<ExclusiveAccessController>> exclusiveAccessController_;
    struct scoped_nsobject<BrowserWindowFullscreenTransition> fullscreenTransition_;
    struct unique_ptr<FullscreenLowPowerCoordinatorCocoa, std::__1::default_delete<FullscreenLowPowerCoordinatorCocoa>> fullscreenLowPowerCoordinator_;
    struct StatusBubbleMac *statusBubble_;
    struct unique_ptr<BookmarkBubbleObserverCocoa, std::__1::default_delete<BookmarkBubbleObserverCocoa>> bookmarkBubbleObserver_;
    BookmarkBubbleController *bookmarkBubbleController_;
    BOOL initializing_;
    BOOL ownsBrowser_;
    TranslateBubbleController *translateBubbleController_;
    double windowTopGrowth_;
    double windowBottomGrowth_;
    BOOL isShrinkingFromZoomed_;
    struct scoped_nsobject<AvatarBaseController> avatarButtonController_;
    scoped_nsobject_7ff2efe9 floatingBarBackingView_;
    struct scoped_nsobject<NSWindow> fullscreenWindow_;
    BOOL enteringAppKitFullscreen_;
    BOOL exitingAppKitFullscreen_;
    BOOL enteringImmersiveFullscreen_;
    BOOL enteringAppKitFullscreenOnPrimaryScreen_;
    BOOL isUsingCustomAnimation_;
    BOOL shouldExitAfterEnteringFullscreen_;
    BOOL appKitDidExitFullscreen_;
    struct CGRect savedRegularWindowFrame_;
    double floatingBarShownFraction_;
    BOOL blockLayoutSubviews_;
    struct unique_ptr<ExtensionKeybindingRegistryCocoa, std::__1::default_delete<ExtensionKeybindingRegistryCocoa>> extensionKeybindingRegistry_;
}

+ (id)browserWindowControllerForView:(id)arg1;
+ (id)browserWindowControllerForWindow:(id)arg1;
+ (BOOL)systemSettingsRequireMavericksAppKitFullscreenHack;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)alertState;
- (void)setAlertState:(int)arg1;
- (void)executeExtensionCommand:(const basic_string_805fe43b *)arg1 command:(const struct Command *)arg2;
- (void)setFullscreenToolbarController:(id)arg1;
- (id)fullscreenToolbarController;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (BOOL)isActiveTabContentsControllerResizeBlocked;
- (BOOL)isLayoutSubviewsBlocked;
- (struct CGRect)omniboxPopupAnchorRect;
- (struct CGSize)overflowFrom:(struct CGRect)arg1 to:(struct CGRect)arg2;
- (void)resetWindowGrowthState;
- (void)bookmarkBar:(id)arg1 willAnimateFromState:(int)arg2 toState:(int)arg3;
- (void)bookmarkBar:(id)arg1 didChangeFromState:(int)arg2 toState:(int)arg3;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)installAvatar;
- (void)translateBubbleWindowWillClose:(id)arg1;
- (void)dismissPermissionBubble;
- (void)showTranslateBubbleForWebContents:(struct WebContents *)arg1 step:(int)arg2 errorType:(int)arg3;
- (void)editBookmarkNode:(id)arg1;
- (void)bookmarkBubbleClosed;
- (void)showBookmarkBubbleForURL:(const struct GURL *)arg1 alreadyBookmarked:(BOOL)arg2;
- (struct CGPoint)bookmarkBubblePoint;
- (struct CGPoint)themeImagePositionForAlignment:(int)arg1;
- (unsigned long long)themedWindowStyle;
- (const struct ThemeProvider *)themeProvider;
- (void)userChangedTheme;
- (void)onTabInsertedInForeground:(BOOL)arg1;
- (void)onTabDetachedWithContents:(struct WebContents *)arg1;
- (void)onTabChanged:(int)arg1 withContents:(struct WebContents *)arg2;
- (void)onActivateTabWithContents:(struct WebContents *)arg1;
- (BOOL)isTabDraggable:(id)arg1;
- (BOOL)hasTabStrip;
- (struct CGRect)regularWindowFrame;
- (id)activeTabTitle;
- (BOOL)hasLiveTabs;
- (long long)numberOfTabs;
- (id)createFullscreenWindow;
- (void)addFindBar:(id)arg1;
- (id)downloadShelf;
- (void)createAndAddDownloadShelf;
- (BOOL)isDownloadShelfVisible;
- (id)devToolsController;
- (id)bookmarkBarController;
- (BOOL)isBookmarkBarAnimating;
- (BOOL)isBookmarkBarVisible;
- (BOOL)shouldUseNewAvatarButton;
- (BOOL)shouldShowAvatar;
- (void)showNewTabButton:(BOOL)arg1;
- (BOOL)isTabFullyVisible:(id)arg1;
- (BOOL)windowMovementAllowed;
- (BOOL)tabTearingAllowed;
- (BOOL)tabDraggingAllowed;
- (BOOL)isDragSessionActive;
- (void)removePlaceholder;
- (void)insertPlaceholderForTab:(id)arg1 frame:(struct CGRect)arg2;
- (void)detachedWindowEnterFullscreenIfNeeded:(id)arg1;
- (id)detachTabsToNewWindow:(id)arg1 draggedTab:(id)arg2;
- (void)layoutTabs;
- (void)focusTabContents;
- (void)focusLocationBar:(BOOL)arg1;
- (void)setIsLoading:(BOOL)arg1 force:(BOOL)arg2;
- (id)activeTabView;
- (id)tabViews;
- (void)detachTabView:(id)arg1;
- (void)moveTabViews:(id)arg1 fromController:(id)arg2;
- (BOOL)canReceiveFrom:(id)arg1;
- (void)zoomChangedForActiveTab:(BOOL)arg1;
- (void)onActiveTabChanged:(struct WebContents *)arg1 to:(struct WebContents *)arg2;
- (void)setCurrentPageIsTranslated:(BOOL)arg1;
- (void)setStarredState:(BOOL)arg1;
- (void)resetTabState:(struct WebContents *)arg1;
- (void)updateToolbarWithContents:(struct WebContents *)arg1;
- (struct CGRect)statusBubbleBaseFrame;
- (BOOL)handledByExtensionCommand:(id)arg1 priority:(int)arg2;
- (void)resizeView:(id)arg1 newHeight:(double)arg2;
- (BOOL)adjustWindowHeightBy:(double)arg1;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)activate;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)updateDevToolsForContents:(struct WebContents *)arg1;
- (void)windowWillClose:(id)arg1;
- (void)destroyBrowser;
- (id)avatarButtonController;
- (struct Profile *)profile;
- (id)overlayableContentsController;
- (id)floatingBarBackingView;
- (struct LocationBarViewMac *)locationBarBridge;
- (struct StatusBubbleMac *)statusBubble;
- (id)infoBarContainerController;
- (id)findBarCocoaController;
- (id)tabStripController;
- (id)toolbarController;
- (struct BrowserWindow *)browserWindow;
- (struct Rect)enforceMinWindowSize:(struct Rect)arg1;
- (void)dealloc;
- (id)initWithBrowser:(struct Browser *)arg1 takeOwnership:(BOOL)arg2;
- (id)initWithBrowser:(struct Browser *)arg1;
- (struct ExclusiveAccessController *)exclusiveAccessController;
- (BOOL)isFullscreenForTabContentOrExtension;
- (BOOL)floatingBarHasFocus;
- (void)releaseToolbarVisibilityForOwner:(id)arg1 withAnimation:(BOOL)arg2;
- (void)lockToolbarVisibilityForOwner:(id)arg1 withAnimation:(BOOL)arg2;
- (BOOL)isToolbarVisibilityLockedForOwner:(id)arg1;
- (void)resizeFullscreenWindow;
- (void)exitFullscreenAnimationFinished;
- (void)exitAnyFullscreen;
- (void)enterWebContentFullscreen;
- (id)avatarView;
- (double)menubarOffset;
- (BOOL)isInAppKitFullscreen;
- (BOOL)isInImmersiveFullscreen;
- (BOOL)isInAnyFullscreenMode;
- (BOOL)exitExtensionFullscreenIfPossible;
- (void)updateFullscreenExitBubble;
- (void)updateUIForTabFullscreen:(int)arg1;
- (void)enterBrowserFullscreen;
- (BOOL)isFullscreenTransitionInProgress;
- (struct CGRect)savedRegularWindowFrame;
- (BOOL)isTabbedWindow;
- (BOOL)supportsBookmarkBar;
- (BOOL)hasLocationBar;
- (BOOL)hasToolbar;
- (BOOL)hasTitleBar;
- (BOOL)supportsWindowFeature:(int)arg1;
- (void)childWindowsDidChange;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (id)fullscreenToolbarVisibilityLockController;
- (struct PermissionRequestManager *)permissionRequestManager;
- (struct WebContents *)webContents;
- (BOOL)shouldConstrainFrameRect;
- (void)window:(id)arg1 startCustomAnimationToExitFullScreenWithDuration:(double)arg2;
- (void)window:(id)arg1 startCustomAnimationToEnterFullScreenWithDuration:(double)arg2;
- (id)customWindowsToExitFullScreenForWindow:(id)arg1;
- (id)customWindowsToEnterFullScreenForWindow:(id)arg1;
- (void)resetCustomAppKitFullscreenVariables;
- (BOOL)shouldUseCustomAppKitFullscreenTransition:(BOOL)arg1;
- (BOOL)shouldUseMavericksAppKitFullscreenHack;
- (void)setContentViewSubviews:(id)arg1;
- (void)updateSubviewZOrderFullscreen;
- (void)updateSubviewZOrderNormal;
- (void)updateSubviewZOrder;
- (void)applyLayout:(id)arg1;
- (void)updateLayoutParameters:(id)arg1;
- (struct CGRect)fullscreenButtonFrame;
- (void)exitAppKitFullscreen;
- (void)enterAppKitFullscreen;
- (long long)pageInfoBubblePointY;
- (void)updateInfoBarTipVisibility;
- (double)toolbarDividerOpacity;
- (void)adjustUIForEnteringFullscreen;
- (void)adjustUIForExitingFullscreen;
- (void)setSheetHiddenForFullscreenTransition:(BOOL)arg1;
- (void)windowDidFailToExitFullScreen:(id)arg1;
- (void)windowDidFailToEnterFullScreen:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (unsigned long long)window:(id)arg1 willUseFullScreenPresentationOptions:(unsigned long long)arg2;
- (struct CGSize)window:(id)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (void)deregisterForContentViewResizeNotifications;
- (void)registerForContentViewResizeNotifications;
- (void)contentViewDidResize:(id)arg1;
- (void)showFullscreenExitBubbleIfNecessary;
- (void)exitImmersiveFullscreen;
- (void)enterImmersiveFullscreen;
- (void)updatePermissionBubbleAnchor;
- (void)moveViewsForImmersiveFullscreen:(BOOL)arg1 regularWindow:(id)arg2 fullscreenWindow:(id)arg3;
- (void)adjustToolbarAndBookmarkBarForCompression:(double)arg1;
- (void)layoutTabContentArea:(struct CGRect)arg1;
- (BOOL)placeBookmarkBarBelowInfoBar;
- (void)applyTabStripLayout:(const struct TabStripLayout *)arg1;
- (void)layoutSubviews;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)saveWindowPositionIfNeeded;
- (void)updateFullscreenCollectionBehavior;
- (void)createTabStripController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

