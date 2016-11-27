//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/ChromeBrowserWindow.h>

@class NSButton;

__attribute__((visibility("hidden")))
@interface FramedBrowserWindow : ChromeBrowserWindow
{
    BOOL shouldHideTitle_;
    BOOL hasTabStrip_;
    NSButton *closeButton_;
    NSButton *miniaturizeButton_;
    NSButton *zoomButton_;
    BOOL styleMaskLock_;
    double windowButtonsInterButtonSpacing_;
}

+ (BOOL)drawWindowThemeInDirtyRect:(struct CGRect)arg1 forView:(id)arg2 bounds:(struct CGRect)arg3 forceBlackBackground:(BOOL)arg4;
+ (double)browserFrameViewPaintHeight;
- (void)childWindowsDidChange;
- (void)removeChildWindow:(id)arg1;
- (void)addChildWindow:(id)arg1 ordered:(long long)arg2;
- (id)titleColor;
- (struct CGPoint)fullScreenButtonOriginAdjustment;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (double)windowButtonsInterButtonSpacing;
- (BOOL)_isTitleHidden;
- (void)setStyleMaskLock:(BOOL)arg1;
- (void)setShouldHideTitle:(BOOL)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)adjustButton:(id)arg1 ofKind:(unsigned long long)arg2;
- (void)adjustZoomButton:(id)arg1;
- (void)adjustMiniaturizeButton:(id)arg1;
- (void)adjustCloseButton:(id)arg1;
- (void)setLeadingOffset:(double)arg1 toButton:(unsigned long long)arg2;
- (void)titlebarDidChangeFrameNotification:(id)arg1;
- (void)forbidAddingWindowButtonsTrackingArea;
- (void)setWindowButtonsConstraints;
- (void)adjustTitlebarContainer:(id)arg1;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 hasTabStrip:(BOOL)arg2;
- (void)setStyleMask:(unsigned long long)arg1;

@end

