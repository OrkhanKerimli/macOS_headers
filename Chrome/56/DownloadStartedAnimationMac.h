//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AnimatableImage;

__attribute__((visibility("hidden")))
@interface DownloadStartedAnimationMac : NSObject
{
    double imageWidth_;
    AnimatableImage *animation_;
}

+ (void)startAnimationWithWebContents:(struct WebContents *)arg1;
- (void)windowWillClose:(id)arg1;
- (void)parentWindowDidResize:(id)arg1;
- (void)dealloc;
- (id)initWithWebContents:(struct WebContents *)arg1;

@end

