//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSAnimation.h>

__attribute__((visibility("hidden")))
@interface Animation : NSAnimation
{
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
- (void)setCurrentProgress:(float)arg1;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3;

@end

