//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/ButtonPlus.h>

@class NSTrackingArea;
@protocol RolloverTrackingButtonDelegate;

__attribute__((visibility("hidden")))
@interface RolloverTrackingButton : ButtonPlus
{
    NSTrackingArea *_trackingArea;
    id _flagsChangedEventMonitor;
    BOOL _mouseOver;
    BOOL _trackingMouseDown;
    BOOL _trackingRectUpdatePending;
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
    BOOL _usesRolloverAppearanceWhenFirstResponder;
    BOOL _redrawOnMouseEnteredAndExited;
    id <RolloverTrackingButtonDelegate> _delegate;
}

@property(nonatomic) BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
@property(nonatomic) BOOL usesRolloverAppearanceWhenFirstResponder; // @synthesize usesRolloverAppearanceWhenFirstResponder=_usesRolloverAppearanceWhenFirstResponder;
@property(nonatomic) BOOL usesRolloverAppearanceOnMouseDown; // @synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown;
@property(nonatomic) BOOL usesRolloverAppearanceInInactiveWindow; // @synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow;
@property(nonatomic) __weak id <RolloverTrackingButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didResignActiveFirstResponder;
- (void)didBecomeActiveFirstResponder;
- (void)_removeFlagsChangedEventMonitorIfNecessary;
- (void)_addFlagsChangedEventMonitorIfNecessary;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (BOOL)mouseIsOver;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_finishInitialization;

@end

