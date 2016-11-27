//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Google Chrome Framework/BookmarkBarState-Protocol.h>
#import <Google Chrome Framework/BookmarkBarToolbarViewController-Protocol.h>
#import <Google Chrome Framework/BookmarkButtonControllerProtocol-Protocol.h>
#import <Google Chrome Framework/BookmarkButtonDelegate-Protocol.h>
#import <Google Chrome Framework/HasWeakBrowserPointer-Protocol.h>
#import <Google Chrome Framework/NSDraggingDestination-Protocol.h>

@class BookmarkBarFolderController, BookmarkBarView, BookmarkButton, NSString;
@protocol BookmarkBarControllerDelegate;

__attribute__((visibility("hidden")))
@interface BookmarkBarController : NSViewController <BookmarkBarState, BookmarkBarToolbarViewController, BookmarkButtonDelegate, BookmarkButtonControllerProtocol, NSDraggingDestination, HasWeakBrowserPointer>
{
    int currentState_;
    int lastState_;
    BOOL isAnimationRunning_;
    struct Browser *browser_;
    struct BookmarkModel *bookmarkModel_;
    struct ManagedBookmarkService *managedBookmarkService_;
    double initialWidth_;
    int seedId_;
    struct map<int, long long, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, long long>>> menuTagMap_;
    scoped_nsobject_9420f295 buttons_;
    struct scoped_nsobject<NSImage> folderImage_;
    struct scoped_nsobject<NSImage> folderImageWhite_;
    struct scoped_nsobject<NSImage> defaultImage_;
    struct scoped_nsobject<NSImage> defaultImageIncognito_;
    BOOL barIsEnabled_;
    struct unique_ptr<BookmarkBarBridge, std::__1::default_delete<BookmarkBarBridge>> bridge_;
    id <BookmarkBarControllerDelegate> delegate_;
    struct scoped_nsobject<BookmarkFolderTarget> folderTarget_;
    BookmarkBarFolderController *folderController_;
    id exitEventTap_;
    BookmarkBarView *buttonView_;
    BookmarkButton *offTheSideButton_;
    struct CGRect originalNoItemsRect_;
    struct CGRect originalImportBookmarksRect_;
    struct scoped_nsobject<BookmarkButton> appsPageShortcutButton_;
    struct scoped_nsobject<BookmarkButton> managedBookmarksButton_;
    struct scoped_nsobject<BookmarkButton> supervisedBookmarksButton_;
    struct scoped_nsobject<BookmarkButton> otherBookmarksButton_;
    struct scoped_nsobject<BookmarkButton> hoverButton_;
    double savedFrameWidth_;
    int displayedButtonCount_;
    BOOL showFolderMenus_;
    BOOL stateAnimationsEnabled_;
    BOOL innerContentAnimationsEnabled_;
    BOOL hasInsertionPos_;
    double insertionPos_;
    struct scoped_nsobject<BookmarkContextMenuCocoaController> contextMenuController_;
    BookmarkButton *pulsingButton_;
    struct unique_ptr<BookmarkModelObserverForCocoa, std::__1::default_delete<BookmarkModelObserverForCocoa>> pulsingBookmarkObserver_;
}

@property(nonatomic) BOOL innerContentAnimationsEnabled; // @synthesize innerContentAnimationsEnabled=innerContentAnimationsEnabled_;
@property(nonatomic) BOOL stateAnimationsEnabled; // @synthesize stateAnimationsEnabled=stateAnimationsEnabled_;
@property(nonatomic) id <BookmarkBarControllerDelegate> delegate; // @synthesize delegate=delegate_;
@property(readonly, nonatomic) BOOL isAnimationRunning; // @synthesize isAnimationRunning=isAnimationRunning_;
@property(readonly, nonatomic) int lastState; // @synthesize lastState=lastState_;
@property(readonly, nonatomic) int currentState; // @synthesize currentState=currentState_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)controllerForNode:(const struct BookmarkNode *)arg1;
- (void)removeButton:(long long)arg1 animate:(BOOL)arg2;
- (void)moveButtonFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)addURLs:(id)arg1 withTitles:(id)arg2 at:(struct CGPoint)arg3;
- (void)addButtonForNode:(const struct BookmarkNode *)arg1 atIndex:(long long)arg2;
- (void)openAll:(const struct BookmarkNode *)arg1 disposition:(int)arg2;
- (void)addNewFolderControllerWithParentButton:(id)arg1;
- (void)childFolderWillClose:(id)arg1;
- (void)childFolderWillShow:(id)arg1;
- (double)indicatorPosForDragToPoint:(struct CGPoint)arg1;
- (BOOL)shouldShowIndicatorShownForPoint:(struct CGPoint)arg1;
- (vector_600feb86)retrieveBookmarkNodeData;
- (BOOL)dragBookmarkData:(id)arg1;
- (BOOL)dragButton:(id)arg1 to:(struct CGPoint)arg2 copy:(BOOL)arg3;
- (BOOL)dragShouldLockBarVisibility;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)draggingAllowed:(id)arg1;
- (struct BookmarkModel *)bookmarkModel;
- (void)closeBookmarkFolder:(id)arg1;
- (void)closeAllBookmarkFolders;
- (void)bookmarkDragDidEnd:(id)arg1 operation:(unsigned long long)arg2;
- (void)didDragBookmarkToTrash:(id)arg1;
- (BOOL)canDragBookmarkButtonToTrash:(id)arg1;
- (id)browserWindow;
- (void)mouseExitedButton:(id)arg1 event:(id)arg2;
- (void)mouseEnteredButton:(id)arg1 event:(id)arg2;
- (id)pasteboardItemForDragOfButton:(id)arg1;
- (struct Profile *)profile;
- (int)currentTabContentsHeight;
- (double)detachedMorphProgress;
- (BOOL)isAnimatingBetweenState:(int)arg1 andState:(int)arg2;
- (BOOL)isAnimatingFromState:(int)arg1 toState:(int)arg2;
- (BOOL)isAnimatingFromState:(int)arg1;
- (BOOL)isAnimatingToState:(int)arg1;
- (BOOL)isInState:(int)arg1;
- (BOOL)isVisible;
- (void)nodeChildrenReordered:(struct BookmarkModel *)arg1 node:(const struct BookmarkNode *)arg2;
- (void)nodeFaviconLoaded:(struct BookmarkModel *)arg1 node:(const struct BookmarkNode *)arg2;
- (void)nodeRemoved:(struct BookmarkModel *)arg1 parent:(const struct BookmarkNode *)arg2 index:(int)arg3;
- (void)nodeMoved:(struct BookmarkModel *)arg1 oldParent:(const struct BookmarkNode *)arg2 oldIndex:(int)arg3 newParent:(const struct BookmarkNode *)arg4 newIndex:(int)arg5;
- (void)nodeChanged:(struct BookmarkModel *)arg1 node:(const struct BookmarkNode *)arg2;
- (void)nodeAdded:(struct BookmarkModel *)arg1 parent:(const struct BookmarkNode *)arg2 index:(int)arg3;
- (void)beingDeleted:(struct BookmarkModel *)arg1;
- (void)loaded:(struct BookmarkModel *)arg1;
- (void)clearDropInsertionPos;
- (void)resetAllButtonPositionsWithAnimation:(BOOL)arg1;
- (void)setDropInsertionPos:(double)arg1;
- (void)draggingEnded:(id)arg1;
- (BOOL)dragBookmark:(const struct BookmarkNode *)arg1 to:(struct CGPoint)arg2 copy:(BOOL)arg3;
- (int)indexForDragToPoint:(struct CGPoint)arg1;
- (id)buttonForDroppingOnAtPoint:(struct CGPoint)arg1;
- (id)buttonForDroppingOnAtPoint:(struct CGPoint)arg1 fromArray:(id)arg2;
- (BOOL)isEventAnExitEvent:(id)arg1;
- (void)updateTheme:(const struct ThemeProvider *)arg1;
- (int)menuTagFromNodeId:(long long)arg1;
- (long long)nodeIdFromMenuTag:(int)arg1;
- (void)frameDidChange;
- (void)checkForBookmarkButtonGrowth:(id)arg1;
- (struct CGRect)frameForBookmarkButtonFromCell:(id)arg1 xOffset:(int *)arg2;
- (id)cellForCustomButtonWithText:(id)arg1 image:(id)arg2;
- (id)cellForBookmarkNode:(const struct BookmarkNode *)arg1;
- (void)clearBookmarkBar;
- (int)displayedButtonCount;
- (id)folderTarget;
- (id)folderController;
- (id)otherBookmarksButton;
- (BOOL)appsPageShortcutButtonIsHidden;
- (BOOL)offTheSideButtonIsHidden;
- (id)buttons;
- (id)buttonView;
- (void)redistributeButtonsOnBarAsNeeded;
- (double)buttonViewMaxXWithOffTheSideButtonIsVisible:(BOOL)arg1;
- (struct CGRect)finalRectOfLastButton;
- (struct CGRect)finalRectOfButton:(id)arg1;
- (void)adjustNoItemContainerForMaxX:(double)arg1;
- (void)unhighlightBookmark:(const struct BookmarkNode *)arg1;
- (BOOL)shrinkOrHideView:(id)arg1 forMaxX:(double)arg2;
- (void)reconfigureBookmarkBar;
- (void)animationDidEnd:(id)arg1;
- (void)stopCurrentAnimation;
- (void)finalizeState;
- (void)updateState:(int)arg1 changeType:(int)arg2;
- (void)moveToState:(int)arg1 withAnimation:(BOOL)arg2;
- (void)cancelMenuTracking;
- (void)openAppsPage:(id)arg1;
- (void)createAppsPageShortcutButton;
- (void)createOtherBookmarksButton;
- (void)createSupervisedBookmarksButton;
- (void)createManagedBookmarksButton;
- (id)createCustomBookmarkButtonForCell:(id)arg1;
- (BOOL)setAppsPageShortcutButtonVisibility;
- (BOOL)setOtherBookmarksButtonVisibility;
- (BOOL)setSupervisedBookmarksButtonVisibility;
- (BOOL)setManagedBookmarksButtonVisibility;
- (BOOL)setBookmarkButtonVisibility:(id)arg1 canShow:(BOOL)arg2 resetAllButtonPositions:(BOOL)arg3;
- (void)addButtonsToView;
- (id)buttonForNode:(const struct BookmarkNode *)arg1 xOffset:(int *)arg2;
- (void)addNodesToButtonList:(const struct BookmarkNode *)arg1;
- (void)showOrHideNoItemContainerForNode:(const struct BookmarkNode *)arg1;
- (void)openBookmarkMenuItem:(id)arg1;
- (double)widthForBookmarkButtonCell:(id)arg1;
- (id)menuForFolderNode:(const struct BookmarkNode *)arg1;
- (void)addFolderNode:(const struct BookmarkNode *)arg1 toMenu:(id)arg2;
- (void)tagEmptyMenu:(id)arg1;
- (void)addNode:(const struct BookmarkNode *)arg1 toMenu:(id)arg2;
- (int)preferredHeight;
- (void)clearMenuTagMap;
- (void)openURL:(struct GURL)arg1 disposition:(int)arg2;
- (BOOL)doBookmarkBarAnimation;
- (void)showBookmarkBarWithAnimation:(BOOL)arg1;
- (void)centerNoItemsLabel;
- (void)watchForExitEvent:(BOOL)arg1;
- (void)stopObservingMenubar;
- (void)startObservingMenubar;
- (void)begunTracking:(id)arg1;
- (void)configureOffTheSideButtonContentsAndVisibility;
- (void)positionRightSideButtons;
- (int)bookmarkLaunchLocation;
- (void)themeDidChangeNotification:(id)arg1;
- (id)offTheSideButtonImage:(BOOL)arg1;
- (id)offTheSideButton;
- (id)appsPageShortcutButton;
- (void)importBookmarks:(id)arg1;
- (void)openOffTheSideFolderFromButton:(id)arg1;
- (void)openBookmarkFolderFromButton:(id)arg1;
- (void)openOrCloseBookmarkFolderForOffTheSideButton;
- (void)openBookmarkFolder:(id)arg1;
- (void)openBookmark:(id)arg1;
- (void)doMenuFlashOnSeparateThread:(id)arg1;
- (void)runMenuFlashThread:(id)arg1;
- (void)cleanupAfterMenuFlashThread:(id)arg1;
- (void)setButtonFlashStateOff:(id)arg1;
- (void)setButtonFlashStateOn:(id)arg1;
- (BOOL)canEditBookmark:(const struct BookmarkNode *)arg1;
- (BOOL)canEditBookmarks;
- (void)closeFolderAndStopTrackingMenus;
- (id)faviconForNode:(const struct BookmarkNode *)arg1 forADarkTheme:(BOOL)arg2;
- (double)toolbarDividerOpacity;
- (double)getDesiredToolbarHeightCompression;
- (void)setBookmarkBarEnabled:(BOOL)arg1;
- (void)updateHiddenState;
- (void)updateExtraButtonsVisibility;
- (void)updateVisibility;
- (void)layoutSubviews;
- (void)layoutToFrame:(struct CGRect)arg1;
- (void)parentWindowDidResignMain:(id)arg1;
- (void)parentWindowWillClose:(id)arg1;
- (void)willEnterOrLeaveFullscreen:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)browserWillBeDestroyed;
- (void)dealloc;
- (void)stopPulsingBookmarkNode;
- (void)startPulsingBookmarkNode:(const struct BookmarkNode *)arg1;
- (id)bookmarkButtonToPulseForNode:(const struct BookmarkNode *)arg1;
- (id)menuController;
- (id)controlledView;
- (struct Browser *)browser;
- (id)initWithBrowser:(struct Browser *)arg1 initialWidth:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

