//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSCondition;

@interface _RBFuture
{
    Class isa;
    int _refcountMinusOne;
    id _value;
    NSCondition *_lock;
    BOOL _resolved;
    BOOL _noblock;
}

+ (id)alloc;
+ (void)initialize;
- (id)initWithBlock_RB:(CDUnknownBlockType)arg1 andContext:(id)arg2;
- (void)RB_setValue:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isResolved;
- (BOOL)isFuture;
- (Class)class;
- (id)RB_do;
- (id)init;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)release;
- (void)dealloc;
- (id)retain;
- (BOOL)isProxy;
- (void)finalize;

@end

