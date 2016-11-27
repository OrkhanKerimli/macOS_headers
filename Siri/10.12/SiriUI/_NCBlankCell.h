//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

__attribute__((visibility("hidden")))
@interface _NCBlankCell : NSButtonCell
{
    struct CGPoint _trackingStart;
    BOOL _ignoreNextStateChange;
}

@property(nonatomic) BOOL ignoreNextStateChange; // @synthesize ignoreNextStateChange=_ignoreNextStateChange;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setNextState;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)layoutLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;

@end

