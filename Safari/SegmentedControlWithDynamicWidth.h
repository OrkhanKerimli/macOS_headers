//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface SegmentedControlWithDynamicWidth : NSSegmentedControl
{
    NSIndexSet *_indexesOfSegmentsWithDynamicWidths;
}

@property(copy, nonatomic) NSIndexSet *indexesOfSegmentsWithDynamicWidths; // @synthesize indexesOfSegmentsWithDynamicWidths=_indexesOfSegmentsWithDynamicWidths;
- (void).cxx_destruct;
- (void)_updateSegmentWidths;
- (double)_endCapWidth;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setSegmentCount:(long long)arg1;
- (struct CGRect)frameForSegment:(long long)arg1;
- (void)awakeFromNib;

@end

