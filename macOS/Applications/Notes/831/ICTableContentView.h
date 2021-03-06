//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableDictionary;

@interface ICTableContentView : NSView
{
    NSMutableDictionary *_horizontalStrokes;
    NSMutableDictionary *_verticalStrokes;
    struct NSView *_topBorder;
    struct NSView *_bottomBorder;
    struct NSView *_leftBorder;
    struct NSView *_rightBorder;
    struct CGRect _exclusionRect;
}

@property(retain, nonatomic) NSView *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) NSView *leftBorder; // @synthesize leftBorder=_leftBorder;
@property(retain, nonatomic) NSView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) NSView *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) NSMutableDictionary *verticalStrokes; // @synthesize verticalStrokes=_verticalStrokes;
@property(retain, nonatomic) NSMutableDictionary *horizontalStrokes; // @synthesize horizontalStrokes=_horizontalStrokes;
@property(nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
- (void).cxx_destruct;
- (void)unsplitStroke:(struct NSView *)arg1;
- (BOOL)splitStroke:(struct NSView *)arg1 atRect:(struct CGRect)arg2;
- (id)addSubstrokeWithFrame:(struct CGRect)arg1 toStroke:(struct NSView *)arg2;
- (void)setHorizontalLinePosition:(id)arg1 forKey:(id)arg2;
- (void)setVerticalLinePosition:(id)arg1 forKey:(id)arg2;
- (struct NSView *)createStroke;
@property(readonly, nonatomic) NSColor *borderColor;
@property(readonly, nonatomic) double borderWidth;
- (struct NSColor *)borderColorForScaleFactor:(double)arg1;
- (double)borderWidthForScaleFactor:(double)arg1;
- (void)sharedLayout;
- (void)layout;
- (BOOL)isFlipped;
- (void)sharedInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

