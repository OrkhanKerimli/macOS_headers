//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSCustomImageRep.h>

@class NSColor, NSView;

__attribute__((visibility("hidden")))
@interface NewTabButtonCustomImageRep : NSCustomImageRep
{
    int overlayOption_;
    NSView *destView_;
    NSColor *fillColor_;
    struct CGPoint patternPhasePosition_;
}

@property(nonatomic) int overlayOption; // @synthesize overlayOption=overlayOption_;
@property(nonatomic) struct CGPoint patternPhasePosition; // @synthesize patternPhasePosition=patternPhasePosition_;
@property(copy, nonatomic) NSColor *fillColor; // @synthesize fillColor=fillColor_;
@property(nonatomic) NSView *destView; // @synthesize destView=destView_;
- (void)dealloc;

@end

