//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CGSSpace;

@interface _DockNCAnimationData : NSObject
{
    unsigned int *_transformWids;
    unsigned int _transformCount;
    unsigned int *_clipWids;
    unsigned int _clipCount;
    unsigned int *_orderWids;
    unsigned int _orderCount;
    BOOL _windowsOrderedOn;
    BOOL _dockHidden;
    unsigned int _displayID;
    double _centerWidth;
    double _dockWidth;
    _CGSSpace *_currentSpace;
    struct CGRect _displayBounds;
}

@property(retain) _CGSSpace *currentSpace; // @synthesize currentSpace=_currentSpace;
@property double dockWidth; // @synthesize dockWidth=_dockWidth;
@property struct CGRect displayBounds; // @synthesize displayBounds=_displayBounds;
@property unsigned int displayID; // @synthesize displayID=_displayID;
@property double centerWidth; // @synthesize centerWidth=_centerWidth;
@property BOOL dockHidden; // @synthesize dockHidden=_dockHidden;
@property BOOL windowsOrderedOn; // @synthesize windowsOrderedOn=_windowsOrderedOn;
@property(readonly) unsigned int orderCount; // @synthesize orderCount=_orderCount;
@property(readonly) unsigned int *orderWids; // @synthesize orderWids=_orderWids;
@property(readonly) unsigned int clipCount; // @synthesize clipCount=_clipCount;
@property(readonly) unsigned int *clipWids; // @synthesize clipWids=_clipWids;
@property(readonly) unsigned int transformCount; // @synthesize transformCount=_transformCount;
@property(readonly) unsigned int *transformWids; // @synthesize transformWids=_transformWids;
- (void).cxx_destruct;
- (void)setWindowsToOrderOn:(id)arg1;
- (void)setWindowToTransformAndClip:(id)arg1 notClippingWindows:(id)arg2;
- (void)dealloc;

@end

