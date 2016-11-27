//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/CAAnimationDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKAnimationDelegate : NSObject <CAAnimationDelegate>
{
    unsigned long long _layerID;
    struct RemoteLayerTreeHost *_layerTreeHost;
}

- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (void)invalidate;
- (id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(struct RemoteLayerTreeHost *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

