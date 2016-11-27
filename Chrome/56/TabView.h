//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Google Chrome Framework/ThemedWindowDrawing-Protocol.h>

@class GTMFadeTruncatingTextFieldCell, HoverCloseButton, NSColor, NSString, TabController;

__attribute__((visibility("hidden")))
@interface TabView : NSView <ThemedWindowDrawing>
{
    TabController *controller_;
    scoped_nsobject_0ef9b51e titleView_;
    GTMFadeTruncatingTextFieldCell *titleViewCell_;
    HoverCloseButton *closeButton_;
    BOOL closing_;
    BOOL isMouseInside_;
    int alertState_;
    double hoverAlpha_;
    double hoverHoldEndTime_;
    double alertAlpha_;
    double alertHoldEndTime_;
    double lastGlowUpdate_;
    struct CGPoint hoverPoint_;
    struct CGPoint mouseDownPoint_;
    long long state_;
    struct scoped_nsobject<NSString> toolTipText_;
}

+ (double)maskImageFillHeight;
@property(nonatomic, getter=isClosing) BOOL closing; // @synthesize closing=closing_;
@property(nonatomic) double alertAlpha; // @synthesize alertAlpha=alertAlpha_;
@property(nonatomic) double hoverAlpha; // @synthesize hoverAlpha=hoverAlpha_;
@property(nonatomic) long long state; // @synthesize state=state_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (int)viewID;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsIgnored;
- (int)widthOfLargestSelectableRegion;
- (void)cancelAlert;
- (void)startAlert;
- (void)updateLabelFont;
- (void)accessibilityOptionsDidChange:(id)arg1;
- (unsigned int)iconColor;
@property(nonatomic) BOOL titleHidden;
@property(retain, nonatomic) NSColor *titleColor;
@property(nonatomic) struct CGRect titleFrame;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL isActiveTab;
- (void)viewDidMoveToWindow;
@property(copy, nonatomic) NSString *toolTipText;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawStroke:(struct CGRect)arg1;
- (void)drawGlow:(struct CGRect)arg1;
- (void)drawFill:(struct CGRect)arg1;
- (id)backgroundColorForSelected:(_Bool)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setTrackingEnabled:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (id)menu;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2 closeButton:(id)arg3;
- (void)setController:(id)arg1;
- (void)adjustGlowValue;
- (double)timeElapsedSinceLastGlowUpdate;
- (void)resetLastGlowUpdateTime;

@end

