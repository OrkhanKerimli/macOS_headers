//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface DOCKReflectionLayer : CALayer
{
    CALayer *_imageLayer;
    float _reflectionScale;
}

@property(readonly, nonatomic) float reflectionScale; // @synthesize reflectionScale=_reflectionScale;
@property(readonly, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
- (void).cxx_destruct;
- (void)setOrientation:(int)arg1;
- (void)setImage:(id)arg1;
- (void)layoutSublayers;
- (void)dealloc;
- (id)init;

@end

