//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/ChromeEventProcessingWindow.h>

__attribute__((visibility("hidden")))
@interface InfoBubbleWindow : ChromeEventProcessingWindow
{
    BOOL closing_;
    unsigned long long allowedAnimations_;
    BOOL infoBubbleCanBecomeKeyWindow_;
    BOOL allowShareParentKeyState_;
    struct unique_ptr<AppNotificationBridge, std::__1::default_delete<AppNotificationBridge>> notificationBridge_;
}

@property(nonatomic) BOOL allowShareParentKeyState; // @synthesize allowShareParentKeyState=allowShareParentKeyState_;
@property(nonatomic) BOOL infoBubbleCanBecomeKeyWindow; // @synthesize infoBubbleCanBecomeKeyWindow=infoBubbleCanBecomeKeyWindow_;
@property(nonatomic) unsigned long long allowedAnimations; // @synthesize allowedAnimations=allowedAnimations_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addChildWindow:(id)arg1 ordered:(long long)arg2;
- (BOOL)isClosing;
- (void)sendEvent:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)finishCloseAfterAnimation;
- (void)appIsTerminating;
- (void)close;
- (BOOL)_sharesParentKeyState;
- (BOOL)canBecomeKeyWindow;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

