//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Safari/NSAccessibilityGroup-Protocol.h>

@class GridCellView, NSButton, NSString;
@protocol TopSitesGridCellAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface TopSitesGridCellAccessoryView : NSView <NSAccessibilityGroup>
{
    NSButton *_removeButton;
    NSButton *_pinButton;
    BOOL _showsAsPinned;
    id <TopSitesGridCellAccessoryViewDelegate> _delegate;
    GridCellView *_cellView;
}

@property(nonatomic) BOOL showsAsPinned; // @synthesize showsAsPinned=_showsAsPinned;
@property(nonatomic) __weak GridCellView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) __weak id <TopSitesGridCellAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeButtonPressed:(id)arg1;
- (void)_pinButtonPressed:(id)arg1;
- (void)_updatePinButtonToolTip;
- (id)_createButtonWithImage:(id)arg1 pressedImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

