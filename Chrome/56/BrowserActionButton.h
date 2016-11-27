//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/ToolbarButton.h>

#import <Google Chrome Framework/NSMenuDelegate-Protocol.h>

@class BrowserActionsController, NSMenu, NSString;

__attribute__((visibility("hidden")))
@interface BrowserActionButton : ToolbarButton <NSMenuDelegate>
{
    struct scoped_nsobject<NSViewAnimation> moveAnimation_;
    struct ToolbarActionViewController *viewController_;
    struct unique_ptr<ToolbarActionViewDelegateBridge, std::__1::default_delete<ToolbarActionViewDelegateBridge>> viewControllerDelegate_;
    struct scoped_nsobject<MenuController> contextMenuController_;
    NSMenu *testContextMenu_;
    BrowserActionsController *browserActionsController_;
    BOOL isBeingDragged_;
    BOOL dragCouldStart_;
    struct CGPoint dragStartPoint_;
}

+ (Class)cellClass;
@property(readonly, nonatomic) BOOL isBeingDragged; // @synthesize isBeingDragged=isBeingDragged_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (BOOL)wantsToRunForTesting;
- (void)setTestContextMenu:(id)arg1;
- (id)menu;
- (void)showContextMenu;
- (id)compositedImage;
- (struct ToolbarActionViewController *)viewController;
- (struct CGRect)frameAfterAnimation;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (void)onRemoved;
- (void)updateState;
- (void)setFrame:(struct CGRect)arg1 animate:(BOOL)arg2;
- (void)menuDidClose:(id)arg1;
- (id)contextMenuController;
- (void)updateHighlightedState;
- (void)endDrag;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 viewController:(struct ToolbarActionViewController *)arg2 controller:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

