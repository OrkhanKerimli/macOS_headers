//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ECEventHandlingDelegate.h"
#import "ECModalEventHandler.h"
#import "ECSBActionHandling.h"
#import "ECSBDataSource.h"
#import "ECSBDelegate.h"

@class CALayer, ECSBSpringboard, ECShadowTextLayer, ECTextLayer, LPAppManager, LPLayout, LPRoot, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSString, WALayerKitWindow;

@interface Springboard : NSObject <ECModalEventHandler, ECEventHandlingDelegate, ECSBDelegate, ECSBDataSource, ECSBActionHandling>
{
    WALayerKitWindow *_window;
    CALayer *_layer;
    CALayer *_backgroundLayer;
    ECTextLayer *_labelEditLayer;
    ECSBSpringboard *_springboard;
    unsigned long long _numberOfRowsPerPage;
    unsigned long long _numberOfColumnsPerPage;
    unsigned long long _iconSize;
    unsigned long long _miniIconSize;
    NSMutableSet *_observedItems;
    NSMapTable *_itemToExtra;
    struct OpaqueCoreDrag *_dragRef;
    double _savedItemLayerOpacity;
    NSMapTable *_staleProperties;
    LPAppManager *_appManager;
    LPLayout *_appLayout;
    LPRoot *_rootPage;
    NSMutableSet *_itemsToRemove;
    NSMutableSet *_delayedStoreItems;
    double _startTime;
    NSObject<OS_dispatch_source> *_addTimer;
    NSArray *_searchResults;
    NSObject<OS_dispatch_source> *_purgeItemsTimer;
    NSMutableArray *_searchPages;
    NSMutableSet *_appsWithDeletionAction;
    CALayer *_loadingContainerLayer;
    ECShadowTextLayer *_loadingLayer;
    CALayer *_desktopContainerLayer;
    CALayer *_desktopLayer;
    NSArray *_desktopFilters;
    long long _currentFilter;
    unsigned int _openCount;
    unsigned int _iconCacheOpenReferences;
    unsigned int _axGenerationCount;
    NSMutableDictionary *_axObservers;
    NSString *_desktopLastUUID;
    float _visibility;
    _Bool _gesturing;
    int _gestureType;
    unsigned int _lastDisplay;
    unsigned int _visible:1;
    unsigned int _autoHideWasEnabled:1;
    unsigned int _forcedDockWindowToShow:1;
    unsigned int _lastEventShouldBeHandledByDock:1;
    unsigned int _editCancelled:1;
    unsigned int _appAnimatingIn:1;
    unsigned int _scanningComplete:1;
    unsigned int _rebuildingModel:1;
    unsigned int _isDraggingApp:1;
    unsigned int _dragInDock:1;
    unsigned int _dragEnteredDock:1;
    unsigned int _desktopStale:1;
    unsigned int _resumedDownloadingApp:1;
    unsigned int _searchStale:1;
    unsigned int _searching:1;
    unsigned int _ensuringSize:1;
    unsigned int _forcedDockHidden:1;
    id _debugDumpNotification;
}

+ (void)makeSpringboards;
@property(readonly, nonatomic) _Bool gesturing; // @synthesize gesturing=_gesturing;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) ECSBSpringboard *ecspringboard; // @synthesize ecspringboard=_springboard;
@property(readonly, nonatomic) WALayerKitWindow *containerWindow; // @synthesize containerWindow=_window;
- (void).cxx_destruct;
- (void)selectionDidChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)selectionWillChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)searchTextCleared;
- (void)searchTextChanged:(id)arg1;
- (id)searchResultsForTerm:(id)arg1;
- (unsigned long long)_wordFromTitle:(id)arg1 matchesTerm:(id)arg2;
- (void)_uninstallRunnable:(id)arg1;
- (void)_refreshItem:(id)arg1 property:(id)arg2;
- (void)_rebuildStateFromDisk;
- (void)_setupApplicationSources:(BOOL)arg1;
- (void)_checkPurgatoryItemsAndAddBackIn;
- (void)_removeLoadingLayer;
- (void)_displayLoadingLayer;
- (void)_appManagerInvalidated:(id)arg1;
- (void)_appStoreLoginRequested:(id)arg1;
- (void)_appStorePurchaseDone:(id)arg1;
- (void)_processCompleteStoreItems;
- (void)_appStorePurchaseStarted:(id)arg1;
- (void)_doFlyAnimationIntoSpringboard:(id)arg1;
- (void)_doAnimationToLaunchPadIcon:(id)arg1;
- (void)_removeAllRemovedItems;
- (void)_addItemToRemove:(id)arg1;
- (void)_runnableRemoved:(id)arg1;
- (void)_runnableAdded:(id)arg1;
- (void)_postChangedNotification;
- (void)_addUnplacedItems;
- (void)_addItemsToNextAvailableSpace:(id)arg1 firstPage:(id *)arg2;
- (BOOL)unregisterObservationOfItem:(id)arg1;
- (BOOL)registerObservationOfItem:(id)arg1;
- (void)_requestImagesForRunnable:(id)arg1;
- (void)_ensureIconSizes;
- (double)getZoomFactorFromPrefs;
- (void)cancelActionWithEvent:(id)arg1 sender:(id)arg2;
- (void)performRemoveActionForItem:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (void)performActionForItem:(id)arg1 withEvent:(id)arg2 sender:(id)arg3;
- (BOOL)isStoreAppForThisLaunchpad:(id)arg1;
- (void)didChangeToPage:(id)arg1;
- (void)willChangeToPage:(id)arg1;
- (id)alertPanelInfoForAction:(id)arg1 ofItem:(id)arg2;
- (id)alertPanelMessageForAction:(id)arg1 ofItem:(id)arg2;
- (BOOL)shouldPresentAlertPanelForAction:(id)arg1 ofItem:(id)arg2 withEvent:(id)arg3;
- (id)rootLayerForAlertPanel;
- (void)cancelDragOfItem:(id)arg1 andLayer:(id)arg2;
- (void)dragOfItemCompleted;
- (void)didEndDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (BOOL)willEndDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (BOOL)didDragItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (void)didBeginDragOfItem:(id)arg1 withEvent:(id)arg2 andLayer:(id)arg3;
- (id)rootLayerForDragging;
- (void)groupHiddenForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)groupShownForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)nameForGroupUsingItem:(id)arg1 withItem:(id)arg2;
- (BOOL)canMakeGroupUsingItem:(id)arg1 withItem:(id)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)pagesOfGroup:(id)arg1;
- (id)makeGroupUsingItem:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 onPage:(id)arg4;
- (id)rootLayerForGroups;
- (void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 ofGroup:(id)arg3 onPage:(id)arg4;
- (void)removePage:(id)arg1 fromGroup:(id)arg2;
- (id)addPageToGroup:(id)arg1;
- (id)addPage;
- (void)removePage:(id)arg1;
- (void)removeItem:(id)arg1 onPage:(id)arg2;
- (void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 onPage:(id)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 ofItem:(id)arg3;
- (id)valueForKey:(id)arg1 ofItem:(id)arg2 withInfo:(id)arg3;
- (struct CGRect)convertRectToGlobal:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromGlobal:(struct CGPoint)arg1;
- (void)lostKeyFocus:(id)arg1;
- (BOOL)flagsChanged:(id)arg1;
- (BOOL)keyUp:(id)arg1;
- (BOOL)keyDown:(id)arg1;
- (BOOL)leftMouseDown:(id)arg1;
- (void)updateDesktopImages;
- (void)processPendingUpdates;
- (void)initialSetupComplete;
- (void)bounceDockIcon;
- (void)flyStoreIconComplete;
- (void)flyStoreIconBegin;
- (void)uninstallRunnable:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)performOpenAnimationForRunnable:(id)arg1 withImage:(id)arg2 atFrame:(struct CGRect)arg3 toFrame:(struct CGRect)arg4;
- (BOOL)handleRunnableOpen:(id)arg1 atURL:(id)arg2 fromFrame:(struct CGRect)arg3 toFrame:(struct CGRect *)arg4;
- (void)setVisible:(BOOL)arg1 slow:(BOOL)arg2;
- (void)purgeItemContentsLater;
- (void)checkAndUpdateIfDisplayChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleInitialSourceScanCompletion;
- (void)zoomFactorChanged:(double)arg1;
- (id)zoomFactorsPrefKey;
- (void)scaleFactorChanged;
- (void)displayChanged;
- (int)handleDragEvent:(struct OpaqueCoreDrag *)arg1 type:(int)arg2;
- (BOOL)handleEvent:(id)arg1;
- (unsigned int)springboardType;
- (void)iconSizesChanged;
- (void)layout;
- (id)_newDesktopLayer;
- (void)_enterExitAnimation:(BOOL)arg1 slow:(BOOL)arg2;
- (void)_cleanupAfterExitAnimation:(id)arg1 openCount:(unsigned int)arg2;
- (void)cleanupBeforeExitAnimation;
- (void)_cleanupBeforeExitAnimation;
- (void)cleanupAfterExitAnimation;
- (void)performExitAnimation:(BOOL)arg1;
- (void)performEnterAnimation:(BOOL)arg1;
- (void)prepareForEnterAnimation;
- (void)_launchRunnable:(id)arg1 withImageRect:(struct CGRect)arg2 withEvent:(id)arg3;
- (void)_desktopPictureChanged:(id)arg1;
@property(readonly) BOOL filtersWithBlacklist;
@property(nonatomic) BOOL groupShown; // @dynamic groupShown;
- (float)backgroundBlurRadius:(_Bool)arg1;
- (void)_applyDesktopFilters;
@property(readonly, nonatomic) WALayerKitWindow *flyWindow;
@property(readonly, nonatomic) NSArray *allApps;
@property(readonly, nonatomic) struct CGRect totalScreenBounds;
@property(readonly, nonatomic) unsigned int display;
@property(readonly, nonatomic) _Bool searching; // @dynamic searching;
@property(readonly, nonatomic) BOOL dragging; // @dynamic dragging;
@property(nonatomic) BOOL deleting; // @dynamic deleting;
@property(nonatomic) BOOL editing; // @dynamic editing;
- (void)modalEventProcessed;
- (BOOL)handlesModalDragEvents;
@property(readonly, nonatomic) CALayer *modalEventLayer; // @dynamic modalEventLayer;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (CDStruct_3d7de378)axElementDataForClientItem:(id)arg1;
- (struct __AXUIElement *)axCopyElementAtPoint:(struct CGPoint)arg1;
- (struct __AXUIElement *)axCopyFocusedElement;
- (struct __AXUIElement *)axCopyElement;
- (void)axPostNotification:(struct __CFString *)arg1 withSpringboardData:(CDStruct_5f224500 *)arg2;
- (void)_postNotification:(struct __CFString *)arg1 observerKey:(id)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (void)axObserverDied:(void *)arg1 withSpringboardData:(CDStruct_5f224500 *)arg2;
- (int)axRemoveObserver:(void *)arg1 notification:(struct __CFString *)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)_removeObserver:(void *)arg1 withObserverKey:(id)arg2;
- (int)axAddObserver:(void *)arg1 notification:(struct __CFString *)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)_addObserver:(void *)arg1 withObserverKey:(id)arg2;
- (int)axPerformAction:(struct __CFString *)arg1 withSpringboardData:(CDStruct_5f224500 *)arg2;
- (int)axCopyActionDescription:(struct __CFString *)arg1 description:(const struct __CFString **)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)axCopyActionNames:(const struct __CFArray **)arg1 withSpringboardData:(CDStruct_5f224500 *)arg2;
- (int)axIsAttributeSettable:(struct __CFString *)arg1 settable:(const struct __CFBoolean **)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)axSetAttributeValue:(struct __CFString *)arg1 value:(void *)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValues:(struct __CFString *)arg1 index:(long long)arg2 maxValues:(long long)arg3 values:(const struct __CFArray **)arg4 withSpringboardData:(CDStruct_5f224500 *)arg5;
- (int)axGetAttributeValueCount:(struct __CFString *)arg1 count:(long long *)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeValue:(struct __CFString *)arg1 value:(const void **)arg2 withSpringboardData:(CDStruct_5f224500 *)arg3;
- (int)axCopyAttributeNames:(const struct __CFArray **)arg1 withSpringboardData:(CDStruct_5f224500 *)arg2;
- (int)_validateSpringboardData:(CDStruct_5f224500 *)arg1;
- (id)_currentGroupPager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL showsDock; // @dynamic showsDock;
@property(readonly) Class superclass;

@end

