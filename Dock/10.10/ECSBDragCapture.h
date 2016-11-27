//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ECEventHandlingDelegate.h"

@class CALayer, CAScrollLayer, ECSBBeginningDragState, ECSBEventHandler, ECSBGroupItem, ECSBItem, ECSBItemLayer, ECSBPager, NSMutableArray, NSObject<OS_dispatch_source>, NSString;

@interface ECSBDragCapture : NSObject <ECEventHandlingDelegate>
{
    ECSBEventHandler *_eventHandler;
    id <ECModalEventHandler> _modalEventHandler;
    ECSBItem *_item;
    ECSBItemLayer *_itemLayer;
    ECSBPager *_pager;
    id <ECSBDelegate><ECSBDataSource> _pagerHandler;
    CAScrollLayer *_pagerScrollLayer;
    ECSBPager *_mainPager;
    id <ECSBDelegate><ECSBDataSource> _mainPagerHandler;
    CAScrollLayer *_mainPagerScrollLayer;
    CALayer *_rootLayer;
    struct CGPoint _lastLocation;
    unsigned long long _lastTime;
    NSMutableArray *_stateStack;
    ECSBBeginningDragState *_beginningState;
    unsigned long long _newGroupIndex;
    ECSBItemLayer *_minimizedItemLayer;
    ECSBGroupItem *_removedGroupItem;
    ECSBItem *_lastItemInGroup;
    unsigned long long _lastGroupIndex;
    NSMutableArray *_groupsToProcess;
    struct CGRect _imageFrame;
    NSObject<OS_dispatch_source> *_velocityTimer;
    NSObject<OS_dispatch_source> *_closeGroupTimer;
    NSObject<OS_dispatch_source> *_openGroupTimer;
    unsigned int _dragging:1;
    unsigned int _dragStarted:1;
    unsigned int _dragCanceled:1;
    unsigned int _fromInLockedRange:1;
    unsigned int _removingFilter:1;
    unsigned int _didDragIntoGroup:1;
    unsigned int _canStartGroup:1;
    unsigned int _madeNewGroup:1;
    unsigned int _shouldCallDragComplete:1;
    unsigned int _dragCanceledWhileFiltering:1;
    unsigned int _externalDrag:1;
    unsigned int _removeWhenClosed:1;
}

@property(nonatomic) _Bool shouldCallDragComplete; // @synthesize shouldCallDragComplete=_shouldCallDragComplete;
@property(nonatomic) _Bool madeNewGroup; // @synthesize madeNewGroup=_madeNewGroup;
@property(retain, nonatomic) ECSBItem *lastItemInGroup; // @synthesize lastItemInGroup=_lastItemInGroup;
@property(nonatomic) _Bool removeWhenClosed; // @synthesize removeWhenClosed=_removeWhenClosed;
@property(retain, nonatomic) ECSBGroupItem *removedGroupItem; // @synthesize removedGroupItem=_removedGroupItem;
@property(retain, nonatomic) ECSBItemLayer *minimizedItemLayer; // @synthesize minimizedItemLayer=_minimizedItemLayer;
@property(nonatomic) unsigned long long newGroupIndex; // @synthesize newGroupIndex=_newGroupIndex;
@property(nonatomic) unsigned long long lastGroupIndex; // @synthesize lastGroupIndex=_lastGroupIndex;
@property(readonly, nonatomic) ECSBPager *mainPager; // @synthesize mainPager=_mainPager;
@property(readonly, nonatomic) ECSBPager *pager; // @synthesize pager=_pager;
@property(readonly, nonatomic) __weak ECSBEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) __weak id <ECModalEventHandler> modalEventHandler; // @synthesize modalEventHandler=_modalEventHandler;
@property(readonly, nonatomic) _Bool fromInLockedRange; // @synthesize fromInLockedRange=_fromInLockedRange;
@property(readonly, nonatomic) _Bool dragCanceled; // @synthesize dragCanceled=_dragCanceled;
@property(readonly, nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
@property(readonly, nonatomic) ECSBItemLayer *itemLayer; // @synthesize itemLayer=_itemLayer;
- (void).cxx_destruct;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (_Bool)shouldRemoveGroup:(id)arg1;
- (void)addGroupToProcess:(id)arg1;
- (void)cancelDrag:(_Bool)arg1;
- (_Bool)_groupActionInProgress;
- (id)_dragStateForEvent:(id)arg1 itemFrame:(struct CGRect)arg2;
- (void)_endDragOfItemLayerWithEvent:(id)arg1;
- (void)_dragItemLayerWithEvent:(id)arg1 itemFrame:(struct CGRect)arg2;
- (void)_beginDragOfItemLayerWithEvent:(id)arg1 itemFrame:(struct CGRect)arg2;
- (void)_cancelFiltering;
- (void)_switchToPager:(id)arg1;
- (void)dealloc;
- (id)initWithItemLayer:(id)arg1 fromPage:(id)arg2 usingEventHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

