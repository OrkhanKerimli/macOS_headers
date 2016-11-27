//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import <Safari/LockableFirstResponder-Protocol.h>

__attribute__((visibility("hidden")))
@interface Window : NSWindow <LockableFirstResponder>
{
    BOOL _unresizable;
    unsigned long long _firstResponderLockedCount;
    struct CGSize _savedMinContentSize;
    struct CGSize _savedMaxContentSize;
}

- (BOOL)canCycle;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)unlockFirstResponder;
- (void)lockFirstResponder;
- (BOOL)firstResponderIsLocked;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)setResizable:(BOOL)arg1;
- (BOOL)isResizable;
- (struct CGPoint)cascadeTopLeftFromPoint:(struct CGPoint)arg1;
- (struct CGRect)adjustedFrameForCascade:(struct CGRect)arg1 fromWindow:(id)arg2;
- (id)findFrontmostOtherWindowOfWidth:(float)arg1;
- (void)_setFrameAfterMove:(struct CGRect)arg1;
- (void)sendEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)becomeKeyWindow;
- (void)close;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end

