//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECTextLayer.h"

@interface ECShadowTextLayer : ECTextLayer
{
    id _textShadowColor;
    struct CGSize _textShadowOffset;
    BOOL _textShadowHidden;
    double _cachedHeight;
    double _textShadowBlur;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL textShadowHidden; // @synthesize textShadowHidden=_textShadowHidden;
@property(nonatomic) double textShadowBlur; // @synthesize textShadowBlur=_textShadowBlur;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(retain, nonatomic) id textShadowColor; // @synthesize textShadowColor=_textShadowColor;
- (void).cxx_destruct;
- (struct CGSize)preferredFrameSize;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFontSize:(double)arg1;
- (void)setFont:(void *)arg1;
- (id)init;

@end

