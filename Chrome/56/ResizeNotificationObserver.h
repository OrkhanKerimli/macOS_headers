//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ResizeNotificationObserver : NSObject
{
    struct ChromeNativeAppWindowViewsMac *nativeAppWindow_;
}

- (void)stopObserving;
- (void)onWindowDidExitFullScreen:(id)arg1;
- (void)onWindowWillExitFullScreen:(id)arg1;
- (void)onWindowWillStartLiveResize:(id)arg1;
- (id)initForNativeAppWindow:(struct ChromeNativeAppWindowViewsMac *)arg1;

@end

