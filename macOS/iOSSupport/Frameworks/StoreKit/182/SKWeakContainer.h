//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKWeakContainer : NSObject
{
    BOOL _wasOnScreen;
    UIView *_scrollingView;
    UIView *_trackingView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL wasOnScreen; // @synthesize wasOnScreen=_wasOnScreen;
@property(nonatomic) __weak UIView *trackingView; // @synthesize trackingView=_trackingView;
@property(nonatomic) __weak UIView *scrollingView; // @synthesize scrollingView=_scrollingView;

@end

