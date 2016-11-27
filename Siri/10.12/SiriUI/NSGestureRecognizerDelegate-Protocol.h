//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSEvent, NSGestureRecognizer;

@protocol NSGestureRecognizerDelegate <NSObject>

@optional
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(NSGestureRecognizer *)arg1;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldAttemptToRecognizeWithEvent:(NSEvent *)arg2;
@end

