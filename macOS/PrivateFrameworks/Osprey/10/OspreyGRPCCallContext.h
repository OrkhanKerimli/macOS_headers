//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSObject<OS_dispatch_queue>;

@interface OspreyGRPCCallContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_currentChunk;
    unsigned int _length;
    BOOL _hasLength;
    unsigned char _compressedFlag;
    unsigned int _logSequenceNumber;
}

- (void).cxx_destruct;
- (void)_handleData:(id)arg1;
- (void)_fireCompletionWithError:(id)arg1;
- (id)_initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end

