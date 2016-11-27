//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class ECShadowTextLayer, NSString;

@interface ECCoverFlowLabelLayer : CALayer
{
    ECShadowTextLayer *_textLayer;
    float _scaleFactor;
}

@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(readonly, nonatomic) ECShadowTextLayer *textLayer; // @synthesize textLayer=_textLayer;
- (void).cxx_destruct;
- (struct CGSize)preferredFrameSize;
- (void)layout;
@property(nonatomic) BOOL shadowHidden; // @dynamic shadowHidden;
@property(retain, nonatomic) NSString *string; // @dynamic string;
- (id)initWithScaleFactor:(float)arg1;

@end

