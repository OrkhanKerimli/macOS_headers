//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WAWindow;

@interface _WVGestureWindowInfo : NSObject
{
    WAWindow *_window;
    struct CGRect _destRect;
    struct CGRect _startRect;
}

@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
@property(nonatomic) struct CGRect destRect; // @synthesize destRect=_destRect;
@property(retain, nonatomic) WAWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (struct CGRect)nextFrameForEase:(double)arg1;
- (id)initWithWindow:(id)arg1 destRect:(struct CGRect)arg2;

@end

