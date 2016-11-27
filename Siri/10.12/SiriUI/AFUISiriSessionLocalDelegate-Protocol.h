//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFDialogPhase, AFUISiriSession, SAUIDelayedActionCancelCommand, SAUIDelayedActionCommand;

@protocol AFUISiriSessionLocalDelegate <NSObject>
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;
- (BOOL)siriSessionCanEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFDialogPhase *)arg2;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(SAUIDelayedActionCancelCommand *)arg1;
- (void)siriSessionDidReceiveDelayedActionCommand:(SAUIDelayedActionCommand *)arg1;
- (void)siriSessionRecordingDidFail:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingDidCancel:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionRecordingWillBegin:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void (^)(long long))arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(BOOL)arg2 withCompletion:(void (^)(long long))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2;
@end

