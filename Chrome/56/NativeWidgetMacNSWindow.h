//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import <Google Chrome Framework/CommandDispatchingWindow-Protocol.h>

__attribute__((visibility("hidden")))
@interface NativeWidgetMacNSWindow : NSWindow <CommandDispatchingWindow>
{
    struct scoped_nsobject<CommandDispatcher> commandDispatcher_;
    struct scoped_nsprotocol<id<UserInterfaceItemCommandHandler>> commandHandler_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)commandDispatchUsingKeyModifiers:(id)arg1;
- (void)commandDispatch:(id)arg1;
- (BOOL)defaultPerformKeyEquivalent:(id)arg1;
- (BOOL)redispatchKeyEvent:(id)arg1;
- (void)setCommandHandler:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)sendEvent:(id)arg1;
- (BOOL)hasKeyAppearance;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_isTitleHidden;
- (BOOL)hasViewsMenuActive;
- (struct Widget *)viewsWidget;
- (id)viewsNSWindowDelegate;
- (void)setCommandDispatcherDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

