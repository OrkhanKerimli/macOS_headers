//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@protocol _WKFullscreenDelegate <NSObject>

@optional
- (void)_webViewDidExitFullscreen:(NSView *)arg1;
- (void)_webViewWillExitFullscreen:(NSView *)arg1;
- (void)_webViewDidEnterFullscreen:(NSView *)arg1;
- (void)_webViewWillEnterFullscreen:(NSView *)arg1;
@end

