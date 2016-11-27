//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECItemListItemLayer.h"

@class CALayer, CAPluginLayer;

@interface WVMinimizedAndRecentsItemLayer : ECItemListItemLayer
{
    CALayer *_innerImageLayer;
    unsigned int _imageBaseline;
    CAPluginLayer *_pluginLayer;
}

@property(readonly, nonatomic) CALayer *innerImageLayer; // @synthesize innerImageLayer=_innerImageLayer;
@property(readonly, nonatomic) __weak CAPluginLayer *pluginLayer; // @synthesize pluginLayer=_pluginLayer;
- (void).cxx_destruct;
- (void)layout;
- (struct CGRect)_frameForHighlight;
- (id)_maskLayerForHighlight;
- (void)setImageContents:(id)arg1;
- (struct CGRect)pluginFrameForWindowSize:(struct CGSize)arg1;
- (void)setContentFromDataSource:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;

@end

