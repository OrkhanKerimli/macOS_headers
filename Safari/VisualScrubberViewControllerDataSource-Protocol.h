//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, NSView, VisualScrubberViewController;

@protocol VisualScrubberViewControllerDataSource <NSObject>
- (NSString *)visualScrubberViewController:(VisualScrubberViewController *)arg1 accessibilityDescriptionForItemAtIndex:(unsigned long long)arg2;
- (NSView *)visualScrubberViewController:(VisualScrubberViewController *)arg1 viewForItemAtIndex:(unsigned long long)arg2 wantsHugging:(char *)arg3 sizeObservationKey:(id *)arg4;
- (unsigned long long)numberOfItemsForVisualScrubberViewController:(VisualScrubberViewController *)arg1;
@end

