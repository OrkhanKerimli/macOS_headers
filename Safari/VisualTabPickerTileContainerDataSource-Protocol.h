//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSString, NSView, VisualTabPickerTileContainerView;

@protocol VisualTabPickerTileContainerDataSource <NSObject>
- (int)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 muteButtonStateForTileAtIndex:(unsigned long long)arg2;
- (BOOL)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 shouldShowMuteButtonForTileAtIndex:(unsigned long long)arg2;
- (struct CGRect)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 visibleBoundsForTileAtIndex:(unsigned long long)arg2;
- (NSView *)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 viewForTileAtIndex:(unsigned long long)arg2;
- (NSString *)visualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1 titleForTileAtIndex:(unsigned long long)arg2;
- (NSString *)titleForVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
- (unsigned long long)numberOfTilesInVisualTabPickerTileContainerView:(VisualTabPickerTileContainerView *)arg1;
@end

