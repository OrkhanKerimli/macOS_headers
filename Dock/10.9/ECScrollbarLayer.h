//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "ECEventHandlingDelegate.h"

@interface ECScrollbarLayer : CALayer <ECEventHandlingDelegate>
{
    id <ECScrollbarHandler> _handler;
    int _variant;
    CALayer *_trackLayer;
    CALayer *_trackTopLayer;
    CALayer *_trackCenterLayer;
    CALayer *_trackBottomLayer;
    CALayer *_thumbLayer;
    CALayer *_thumbTopLayer;
    CALayer *_thumbCenterLayer;
    CALayer *_thumbBottomLayer;
    double _viewSize;
    double _contentSize;
    double _minimumThumbSize;
    double _value;
    double _dragStartValue;
    double _trackTopLayerHeight;
    double _trackCenterLayerHeight;
    double _trackBottomLayerHeight;
    double _thumbTopLayerHeight;
    double _thumbCenterLayerHeight;
    double _thumbBottomLayerHeight;
    float _scaleFactor;
    unsigned int _enabled:1;
    unsigned int _highlighted:1;
    unsigned int _mouseInLayer:1;
    unsigned int _draggingThumb:1;
    float _scrollFactor;
}

@property(nonatomic) float scrollFactor; // @synthesize scrollFactor=_scrollFactor;
@property(readonly, nonatomic) CALayer *thumbLayer; // @synthesize thumbLayer=_thumbLayer;
@property(readonly, nonatomic) BOOL mouseInLayer; // @synthesize mouseInLayer=_mouseInLayer;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) double minimumThumbSize; // @synthesize minimumThumbSize=_minimumThumbSize;
@property(nonatomic) double viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) double contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) int variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) id <ECScrollbarHandler> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (BOOL)leftMouseUp:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDragged:(id)arg1 inLayer:(id)arg2;
- (BOOL)leftMouseDown:(id)arg1 inLayer:(id)arg2;
- (BOOL)mouseExited:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseEntered:(id)arg1;
- (void)layoutSublayers;
- (void)layout;
- (struct CGPoint)_thumbPosition;
- (struct CGSize)_thumbSize;
- (BOOL)_isVertical;
- (void)_highlightThumb:(BOOL)arg1;
@property(nonatomic) BOOL highlighted; // @dynamic highlighted;
- (id)initWithHandler:(id)arg1 usingVariant:(int)arg2 scaleFactor:(float)arg3;

@end

