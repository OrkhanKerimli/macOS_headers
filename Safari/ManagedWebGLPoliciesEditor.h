//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/SheetWithTableController.h>

#import <Safari/NSMenuDelegate-Protocol.h>
#import <Safari/NSOutlineViewDataSource-Protocol.h>
#import <Safari/OutlineViewPlusDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSOutlineView, NSPopUpButton, NSSegmentedControl, NSString, NSTextField, NSView, SegmentedControlWithDynamicWidth;

__attribute__((visibility("hidden")))
@interface ManagedWebGLPoliciesEditor : SheetWithTableController <NSOutlineViewDataSource, OutlineViewPlusDelegate, NSMenuDelegate>
{
    NSArray *_openWebPagePolicies;
    NSArray *_configuredPolicies;
    BOOL _didAwakeFromNib;
    SegmentedControlWithDynamicWidth *_removePolicySegmentedControl;
    NSOutlineView *_policyOutlineView;
    NSSegmentedControl *_removeButtonSegmentedControl;
    NSView *_policiesPlaceholderView;
    NSPopUpButton *_defaultPolicyPopUpButton;
    NSView *_warningContentView;
    NSTextField *_warningTextField;
    NSLayoutConstraint *_warningContentViewTopVerticalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewBottomVerticalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewLeadingHorizontalSpacingConstraint;
    NSLayoutConstraint *_warningContentViewTrailingHorizontalSpacingConstraint;
}

+ (id)_policyItems;
+ (id)_allowNoSecurityRestrictionsPolicyString;
+ (id)_allowWithSecurityRestrictionsPolicyString;
+ (id)_askPolicyString;
+ (id)_blockPolicyString;
+ (id)cautionImage;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewTrailingHorizontalSpacingConstraint; // @synthesize warningContentViewTrailingHorizontalSpacingConstraint=_warningContentViewTrailingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewLeadingHorizontalSpacingConstraint; // @synthesize warningContentViewLeadingHorizontalSpacingConstraint=_warningContentViewLeadingHorizontalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewBottomVerticalSpacingConstraint; // @synthesize warningContentViewBottomVerticalSpacingConstraint=_warningContentViewBottomVerticalSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningContentViewTopVerticalSpacingConstraint; // @synthesize warningContentViewTopVerticalSpacingConstraint=_warningContentViewTopVerticalSpacingConstraint;
@property(retain, nonatomic) NSTextField *warningTextField; // @synthesize warningTextField=_warningTextField;
@property(retain, nonatomic) NSView *warningContentView; // @synthesize warningContentView=_warningContentView;
@property(nonatomic) __weak NSPopUpButton *defaultPolicyPopUpButton; // @synthesize defaultPolicyPopUpButton=_defaultPolicyPopUpButton;
@property(nonatomic) __weak NSView *policiesPlaceholderView; // @synthesize policiesPlaceholderView=_policiesPlaceholderView;
@property(nonatomic) __weak NSSegmentedControl *removeButtonSegmentedControl; // @synthesize removeButtonSegmentedControl=_removeButtonSegmentedControl;
@property(nonatomic) __weak NSOutlineView *policyOutlineView; // @synthesize policyOutlineView=_policyOutlineView;
@property(nonatomic) __weak SegmentedControlWithDynamicWidth *removePolicySegmentedControl; // @synthesize removePolicySegmentedControl=_removePolicySegmentedControl;
- (void).cxx_destruct;
- (void)_allIconsChanged:(id)arg1;
- (void)_iconDidChange:(id)arg1;
- (void)_didChangeManagedWebGLPolicies:(id)arg1;
- (void)_setUpPolicyPopUpButtonIfNeeded:(id)arg1;
- (void)_setCautionImageOnMenuItemsIfNeeded:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)_setUpOutlineHeaderView;
- (void)_setUpPolicies;
- (void)_updateClearButtonState;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)policyDidChange:(id)arg1;
- (void)defaultPolicyDidChange:(id)arg1;
- (void)clear:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

