//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWindow.h"

@class CAContext, CALayer;

@interface WALayerKitWindow : WAWindow
{
    struct _CAView *_view;
    CAContext *_context;
    unsigned int _sid;
    CALayer *_layer;
    int _level;
}

@property(nonatomic) int level; // @synthesize level=_level;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
- (void)updateResolutionForDisplay:(unsigned int)arg1;
- (struct CGRect)convertRectToGlobal:(struct CGRect)arg1;
- (struct CGPoint)convertPointToGlobal:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromGlobal:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromGlobal:(struct CGRect)arg1;
@property(nonatomic) struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forDisplay:(unsigned int)arg2 setTags:(CDUnknownBlockType)arg3;

@end

