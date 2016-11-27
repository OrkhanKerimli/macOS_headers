//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface WVHotCorners : NSObject
{
    int _tlCorner;
    int _trCorner;
    int _blCorner;
    int _brCorner;
    unsigned int _tlModifier;
    unsigned int _trModifier;
    unsigned int _blModifier;
    unsigned int _brModifier;
    unsigned int _cid;
    struct __CFRunLoopSource *_source;
    NSObject<OS_dispatch_source> *_screenSaverTimer;
    NSObject<OS_dispatch_source> *_displaySleepTimer;
    NSObject<OS_dispatch_source> *_exposeTimer;
    struct CGSRegionObject *_cornerRegion;
    unsigned int _displaySleepAssertion;
    float _exposeCornerTime;
    unsigned int _displayIsCaptured:1;
    unsigned int _mouseInCorner:1;
    unsigned int _disabledScreenSaver:1;
    unsigned int _displaySleepStopped:1;
}

@property(nonatomic) BOOL displayIsCaptured; // @synthesize displayIsCaptured=_displayIsCaptured;
- (void).cxx_destruct;
- (void)_setExposeTimer:(CDUnknownBlockType)arg1;
- (void)_setCornerActionWithModifier:(int)arg1 modifier:(unsigned int)arg2 corner:(int)arg3;
- (void)_getCornerActions:(int [4])arg1 modifiers:(unsigned int [4])arg2;
- (void)_updateBackgroundEventMask;
- (void)_postScreenSaverNotification:(int)arg1;
- (void)_handleEvent:(struct _CGSEventRecord)arg1;
- (void)_handleEvents;
- (int)_cornerActionForMouseEnter:(struct CGPoint)arg1 modifiers:(unsigned int)arg2;
- (BOOL)anyCornersActive;
- (void)_initialize;
- (void)update;
- (void)mouseMoved:(struct _CGSEventRecord)arg1;
- (id)init;

@end

