//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface _WKSessionState : NSObject
{
    struct SessionState _sessionState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data;
- (id)_initWithSessionState:(struct SessionState)arg1;
- (id)initWithData:(id)arg1;

@end

