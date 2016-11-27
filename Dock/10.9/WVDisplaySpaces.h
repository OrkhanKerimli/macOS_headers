//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, WVDashboardSpace, WVSpace, WVSpaceSwitcher;

@interface WVDisplaySpaces : NSObject
{
    NSString *_displayUUID;
    NSMutableArray *_spaces;
    WVSpace *_currentSpace;
    unsigned long long _lastSpaceSPID;
    unsigned long long _dashboardReturnSPID;
    NSMutableArray *_delayedSpaceChanges;
    NSObject<OS_dispatch_source> *_windowOrderTimer;
    WVSpaceSwitcher *_spaceSwitcher;
    double _startPosition;
    NSObject<OS_dispatch_queue> *_switcherQueue;
    NSObject<OS_dispatch_source> *_switcherUpdateSource;
    NSObject<OS_dispatch_source> *_switcherUpdateTimer;
    float _switcherScrollProgress;
    _Bool _fluidSwitching;
    unsigned int _startGestureCount;
    _Bool _performingJumpToAnimation;
    _Bool _preventMRUForNextCall;
    _Bool _bringSpacesToCurrentSpace;
    _Bool _spacesPerDisplay;
}

@property(readonly, nonatomic) NSArray *spaces; // @synthesize spaces=_spaces;
@property(nonatomic) _Bool bringSpacesToCurrentSpace; // @synthesize bringSpacesToCurrentSpace=_bringSpacesToCurrentSpace;
@property(nonatomic) unsigned int startGestureCount; // @synthesize startGestureCount=_startGestureCount;
@property(readonly, nonatomic) _Bool fluidSwitching; // @synthesize fluidSwitching=_fluidSwitching;
@property(readonly, nonatomic) WVSpace *currentSpace; // @synthesize currentSpace=_currentSpace;
@property(readonly, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (void).cxx_destruct;
- (void)_updateScrollPosition;
- (void)_stopDirectScroll:(BOOL)arg1 velocity:(double)arg2 forward:(BOOL)arg3 startGestureCount:(unsigned int)arg4;
- (void)_startDirectScroll:(id)arg1 index:(unsigned long long)arg2 fromDashboardSpace:(BOOL)arg3 systemControlValues:(id)arg4 draggedWindow:(unsigned int)arg5;
- (struct CPSProcessSerNum)_setCurrentPSNAndFocusInternal:(id)arg1 draggedWindow:(id)arg2 process:(struct CPSProcessSerNum *)arg3 selectedWindow:(unsigned int *)arg4 stickyWindows:(CDStruct_21f6099b *)arg5 forSpace:(id)arg6;
- (void)_finalizeSpaceSwitch:(BOOL)arg1 stickyWindows:(CDStruct_21f6099b)arg2 previousSpaceDashboard:(BOOL)arg3 forSpace:(id)arg4;
- (void)_forceToSpace:(id)arg1;
- (void)_removeFullscreenSpaces:(id)arg1;
- (struct CPSProcessSerNum)topPSNFromWindows:(id)arg1 ofSpace:(id)arg2;
- (struct CPSProcessSerNum)setCurrentPSNandFocus:(id)arg1 forSpace:(id)arg2;
- (id)spaceWithSPID:(unsigned long long)arg1;
- (id)spaceWithUUID:(id)arg1;
- (void)fluidGestureSwipe:(float)arg1;
- (void)fluidGestureStop:(BOOL)arg1 velocity:(double)arg2 forward:(BOOL)arg3;
- (_Bool)fluidGestureStart;
- (void)switchToSpaceFromWindowOrdering:(id)arg1 psn:(struct CPSProcessSerNum)arg2;
- (_Bool)exitFullscreen:(id)arg1 returnSpaceUUID:(id)arg2 windowsToIgnore:(id)arg3 backgroundWindows:(id)arg4 animatingWindow:(unsigned int)arg5 duration:(double)arg6 exitForClose:(_Bool)arg7;
- (_Bool)takeFullscreen:(id)arg1 backgroundWindows:(id)arg2 duration:(double)arg3 windowsToIgnore:(id)arg4;
- (void)toggleDashboardSpace:(_Bool)arg1;
- (_Bool)switchToSpace:(id)arg1 fromServer:(BOOL)arg2 updatePSN:(BOOL)arg3;
- (_Bool)switchToNextSpaceForApplication:(struct CPSProcessSerNum)arg1;
- (void)switchForWindowDrag:(_Bool)arg1;
- (_Bool)switchToNextSpace:(_Bool)arg1;
- (_Bool)switchToPreviousSpace:(_Bool)arg1;
- (void)switchToLastSpace;
- (_Bool)canAddUserSpace;
- (void)insertSpace:(id)arg1 afterSpace:(id)arg2;
- (void)moveSpace:(id)arg1 afterSpace:(id)arg2;
- (void)removeSpace:(id)arg1;
- (_Bool)doesSpace:(id)arg1 comeBeforeSpace:(id)arg2;
- (void)spaceModifedWhenNotFront:(id)arg1;
- (_Bool)disableDashboardSpace;
- (void)addFullscreenSpace:(id)arg1 shouldSwitch:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)fadeInFloaterForPSN:(struct CPSProcessSerNum)arg1 onSpace:(id)arg2;
- (_Bool)removeFullscreenSpaceByUUID:(id)arg1;
- (void)performDelayedSpaceChanges;
- (void)addDelayedSpaceChange:(CDUnknownBlockType)arg1;
- (void)appDied:(int)arg1;
- (void)setCurrentSpace:(id)arg1;
- (void)setCurrentSpaceWithSPID:(unsigned long long)arg1;
- (void)addUserSpace:(id)arg1;
- (void)insertSpace:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addSpace:(id)arg1;
@property(readonly, nonatomic) _Bool hasMultipleUserSpaces; // @dynamic hasMultipleUserSpaces;
@property(readonly, nonatomic) WVDashboardSpace *dashboardSpace; // @dynamic dashboardSpace;
@property(readonly, nonatomic) WVSpace *firstUserSpace; // @dynamic firstUserSpace;
@property(readonly, nonatomic) _Bool anySwitchingOccuring; // @dynamic anySwitchingOccuring;
@property(readonly, nonatomic) NSArray *userSpaces; // @dynamic userSpaces;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayUUID:(id)arg1 spacesPerDisplay:(_Bool)arg2;

@end

