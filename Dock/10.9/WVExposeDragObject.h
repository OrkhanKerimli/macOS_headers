//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WVAppIconWindow, WVExposeCluster, _CGSSpace;

@interface WVExposeDragObject : NSObject
{
    struct CGPoint _originalPoint;
    float _scale;
    BOOL _resetting;
    BOOL _movesWholeCluster;
    BOOL _hasStickyWindows;
    NSArray *_windows;
    NSArray *_originalExposeWindows;
    WVExposeCluster *_cluster;
    WVAppIconWindow *_appIconWindow;
    struct CGRect *_originalFrames;
    struct CGPoint *_deltas;
    int *_windowLevels;
    _CGSSpace *_dragSpace;
    float _baseScale;
}

@property(readonly, nonatomic) NSArray *windows; // @synthesize windows=_windows;
@property(readonly, nonatomic) float baseScale; // @synthesize baseScale=_baseScale;
@property(readonly, nonatomic) WVExposeCluster *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_originalPoint;
@property(retain, nonatomic) NSArray *originalExposeWindows; // @synthesize originalExposeWindows=_originalExposeWindows;
@property(readonly, nonatomic) BOOL hasStickyWindows; // @synthesize hasStickyWindows=_hasStickyWindows;
@property(readonly, nonatomic) BOOL movesWholeCluster; // @synthesize movesWholeCluster=_movesWholeCluster;
- (void).cxx_destruct;
- (void)resetWindowLevels;
- (void)reset;
- (void)moveToLocation:(struct CGPoint)arg1 andScale:(float)arg2;
- (void)moveToLocation:(struct CGPoint)arg1 andScale:(float)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) NSArray *applicationWindows;
@property(readonly, nonatomic) WVAppIconWindow *appIconWindow;
- (void)dealloc;
- (id)initWithCluster:(id)arg1 window:(id)arg2 atOrigin:(struct CGPoint)arg3;

@end

