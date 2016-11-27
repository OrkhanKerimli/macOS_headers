//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/CustomKeyViewLoop-Protocol.h>

@class NSButton, NSString, SegmentedControlWithDynamicWidth;
@protocol SidebarTopBarViewDelegate;

__attribute__((visibility("hidden")))
@interface SidebarTopBarView : NSView <CustomKeyViewLoop>
{
    SegmentedControlWithDynamicWidth *_segmentedControl;
    NSButton *_backButton;
    id <SidebarTopBarViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SidebarTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelectedSegmentIdentifier:(id)arg1;
- (id)selectedSegmentIdentifier;
- (void)setMenuForBookmarksSegment:(id)arg1;
- (void)_setUpSegmentedControl;
- (void)_didSelectBackButton:(id)arg1;
- (void)_removeBackButton;
- (void)_addBackButton;
@property(nonatomic) BOOL showsBackButton;
- (id)_imageForSegmentWithIdentifier:(id)arg1;
- (id)_segmentIdentifiersThatCanBeShown;
- (BOOL)_canShowSegmentWithIdentifier:(id)arg1;
- (id)_allSegmentIdentifiers;
- (id)safari_keyViews;
- (void)_segmentedControlSelectionDidChange:(id)arg1;
- (struct CGRect)frameOfTabWithIdentifier:(id)arg1;
- (void)_setUpSeparatorView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

