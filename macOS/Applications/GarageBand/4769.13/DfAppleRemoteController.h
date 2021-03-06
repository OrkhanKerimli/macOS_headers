//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MACore/MAAppleRemote.h>

#import "MAAppleRemoteProtocol-Protocol.h"

@class NSTimer;

@interface DfAppleRemoteController : MAAppleRemote <MAAppleRemoteProtocol>
{
    NSTimer *_arAutoRepeatTimer;
    int _arRepeatCount;
    id _appleRemoteDelegate;
}

- (void)arAutoRepeat:(id)arg1;
- (void)startAppleRemoteAutoRepeatWithSpinDirection:(int)arg1;
- (void)stopAppleRemoteAutoRepeat;
- (void)appleRemoteUsagePage:(unsigned short)arg1 usage:(unsigned short)arg2 value:(int)arg3;
- (id)appleRemoteDelegate;
- (void)setAppleRemoteDelegate:(id)arg1;

@end

