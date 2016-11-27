//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Google Chrome Framework/NSAnimationDelegate-Protocol.h>

@class MCPopupCollection, NSString;

__attribute__((visibility("hidden")))
@interface MCPopupController : NSWindowController <NSAnimationDelegate>
{
    struct MessageCenter *messageCenter_;
    MCPopupCollection *popupCollection_;
    struct scoped_nsobject<MCNotificationController> notificationController_;
    BOOL swipeGestureEnded_;
    struct CGRect originalFrame_;
    BOOL isClosing_;
    struct CGRect bounds_;
    struct scoped_nsobject<NSViewAnimation> boundsAnimation_;
    struct ScopedCrTrackingArea trackingArea_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)markPopupCollectionGone;
- (void)closeWithAnimation;
- (void)showWithAnimation:(struct CGRect)arg1;
- (void)animationDidEnd:(id)arg1;
- (id)animationWithDictionary:(id)arg1;
- (void)setBoundsAnimation:(id)arg1;
- (void)notificationSwipeEnded:(BOOL)arg1 complete:(BOOL)arg2;
- (void)notificationSwipeMoved:(double)arg1;
- (void)notificationSwipeStarted;
- (const basic_string_805fe43b *)notificationID;
- (const struct Notification *)notification;
- (id)notificationController;
- (void)close;
- (id)initWithNotification:(const struct Notification *)arg1 messageCenter:(struct MessageCenter *)arg2 popupCollection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

