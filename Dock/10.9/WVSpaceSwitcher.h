//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, WVSpace, _CGSSpace;

@interface WVSpaceSwitcher : NSObject
{
    NSString *_displayUUID;
    NSArray *_spaces;
    NSArray *_realSpaces;
    NSArray *_displays;
    _CGSSpace *_spaceToReset;
    _CGSSpace *_dragWindowSpace;
    NSMutableArray *_proxyWindows;
    double _scrollPosition;
    unsigned int _shieldWindow;
    unsigned long long _currentSpaceIndex;
    unsigned long long _spacesCount;
    unsigned long long _previousSpaceIndex;
    double _previousSystemControlValue;
    const float *_systemControlValues;
    double _lastAnimateTime;
    double _velocity;
    double _singlePixelScrollAmount;
    BOOL _universalMode;
    double _startScrollPosition;
    BOOL _allowBounce;
    BOOL _setMenuBarBounds;
    BOOL _fromDashboardSpace;
    BOOL _resetMenuBarToFrontMostApp;
    BOOL _spaceStyleSwitching;
    _Bool _ignoreSystemControlValues;
    unsigned int _draggedWindow;
    struct CGRect _displayFrame;
    _CGSSpace *_tabDockSpace;
}

+ (void)initializeConnection;
@property(readonly, nonatomic) BOOL fromDashboardSpace; // @synthesize fromDashboardSpace=_fromDashboardSpace;
@property(nonatomic) double startScrollPosition; // @synthesize startScrollPosition=_startScrollPosition;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double lastAnimationTime; // @synthesize lastAnimationTime=_lastAnimateTime;
@property(readonly, nonatomic) unsigned long long currentSpaceIndex; // @synthesize currentSpaceIndex=_currentSpaceIndex;
@property(nonatomic) double scrollPosition; // @synthesize scrollPosition=_scrollPosition;
- (void).cxx_destruct;
- (void)_setupDragWindow;
- (void)_updateTransforms:(double)arg1;
- (void)_sublayersResetWindows;
- (void)_firstFrame;
- (void)animateScrollPositionComplete;
- (BOOL)animateScrollPosition;
- (void)advanceDestionDirection:(BOOL)arg1;
- (void)resetWindows;
@property(readonly, nonatomic) WVSpace *currentSpace; // @dynamic currentSpace;
- (void)dealloc;
- (id)initWithSpaces:(id)arg1 currentIndex:(unsigned long long)arg2 fromDashboardSpace:(BOOL)arg3 systemControlValues:(const float *)arg4 draggedWindow:(unsigned int)arg5 display:(unsigned int)arg6 displayUUID:(id)arg7;
- (id)init;
- (BOOL)_initializeNewSpaceModel:(unsigned long long)arg1;

@end

