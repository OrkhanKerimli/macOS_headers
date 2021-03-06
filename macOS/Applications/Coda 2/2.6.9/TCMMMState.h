//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<TCMMMStateClientProtocol>, NSTimer;

__attribute__((visibility("hidden")))
@interface TCMMMState : NSObject
{
    long long I_numberOfClientMessages;
    long long I_numberOfServerMessages;
    NSMutableArray *I_messageBuffer;
    NSMutableArray *I_incomingMessages;
    BOOL I_isServer;
    BOOL I_isSendingNoOps;
    NSObject<TCMMMStateClientProtocol> *I_client;
    NSTimer *I_timer;
    id I_delegate;
}

- (void)sendNoOperation:(id)arg1;
- (id)lastIncomingMessage;
- (void)handleOperation:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)appendOperationToIncomingMessageQueue:(id)arg1;
- (void)processAllUserChangeMessages;
- (BOOL)processMessage;
- (BOOL)hasMessagesAvailable;
- (id)client;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setClient:(id)arg1;
- (BOOL)isServer;
- (void)setIsSendingNoOps:(BOOL)arg1;
- (BOOL)isSendingNoOps;
- (void)dealloc;
- (id)initAsServer:(BOOL)arg1;

@end

