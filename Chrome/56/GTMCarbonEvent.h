//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Google Chrome Framework/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GTMCarbonEvent : NSObject <NSCopying>
{
    struct OpaqueEventRef *event_;
}

+ (id)currentEvent;
+ (id)eventWithEvent:(struct OpaqueEventRef *)arg1;
+ (id)eventWithClass:(unsigned int)arg1 kind:(unsigned int)arg2;
- (unsigned long long)sizeOfParameterNamed:(unsigned int)arg1 type:(unsigned int)arg2;
- (BOOL)getParameterNamed:(unsigned int)arg1 type:(unsigned int)arg2 size:(unsigned long long)arg3 data:(void *)arg4;
- (void)setParameterNamed:(unsigned int)arg1 type:(unsigned int)arg2 size:(unsigned long long)arg3 data:(const void *)arg4;
- (void)postToMainQueue;
- (void)postToCurrentQueue;
- (int)postToQueue:(struct OpaqueEventQueueRef *)arg1 priority:(short)arg2;
- (int)sendToTarget:(id)arg1 options:(unsigned int)arg2;
- (struct OpaqueEventRef *)event;
- (double)time;
- (void)setTime:(double)arg1;
- (unsigned int)eventKind;
- (unsigned int)eventClass;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEvent:(struct OpaqueEventRef *)arg1;
- (id)initWithClass:(unsigned int)arg1 kind:(unsigned int)arg2;
- (BOOL)getEventHotKeyIDParameterNamed:(unsigned int)arg1 data:(struct EventHotKeyID *)arg2;
- (void)setEventHotKeyIDParameterNamed:(unsigned int)arg1 data:(struct EventHotKeyID *)arg2;
- (BOOL)getUInt32ParameterNamed:(unsigned int)arg1 data:(unsigned int *)arg2;
- (void)setUInt32ParameterNamed:(unsigned int)arg1 data:(unsigned int *)arg2;

@end

