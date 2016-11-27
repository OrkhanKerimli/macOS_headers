//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/TabButton.h>

#import <Safari/ButtonInTabSyncGroup-Protocol.h>

@class NSString;
@protocol ButtonInTabSyncGroupDelegate;

__attribute__((visibility("hidden")))
@interface TabBarEmptyRegionPlaceholderButton : TabButton <ButtonInTabSyncGroup>
{
    BOOL _syncedWithOtherButton;
    id <ButtonInTabSyncGroupDelegate> _buttonInTabSyncGroupDelegate;
}

@property(nonatomic, getter=isSyncedWithOtherButton) BOOL syncedWithOtherButton; // @synthesize syncedWithOtherButton=_syncedWithOtherButton;
@property(nonatomic) __weak id <ButtonInTabSyncGroupDelegate> buttonInTabSyncGroupDelegate; // @synthesize buttonInTabSyncGroupDelegate=_buttonInTabSyncGroupDelegate;
- (void).cxx_destruct;
- (void)_setHasPressedHighlight:(BOOL)arg1 notifyButtonInTabSyncGroupDelegate:(BOOL)arg2;
- (void)_setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2 notifyButtonInTabSyncGroupDelegate:(BOOL)arg3;
- (void)setHighlightStateToPressed:(BOOL)arg1 hovered:(BOOL)arg2;
- (void)setHasPressedHighlight:(BOOL)arg1;
- (void)setHasMouseOverHighlight:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tabBarViewItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

