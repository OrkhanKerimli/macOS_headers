//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

#import "TransitDirectionsExpandableCell-Protocol.h"

@class MKArtworkImageView, MKMultiPartLabel, NSLayoutGuide, NSMutableDictionary, NSStackView, NSString, NVInlineButton, TransitDirectionsListItem, _MKUILabel, _TransitDirectionsInstructionsCellConstraints;
@protocol TransitDirectionsExpandableCellDelegate, TransitDirectionsListExpandableItem;

__attribute__((visibility("hidden")))
@interface TransitDirectionsInstructionsCell : TransitDirectionsIconCell <TransitDirectionsExpandableCell>
{
    _TransitDirectionsInstructionsCellConstraints *_styleConstraints;
    NSLayoutGuide *_trailingContentLayoutGuide;
    BOOL _checkedItemIsExpandable;
    TransitDirectionsListItem<TransitDirectionsListExpandableItem> *_expandableItem;
    NSMutableDictionary *_layoutItemsByType;
    NSStackView *_textStackView;
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;
    unsigned long long _cellStyle;
    _MKUILabel *_primaryLabel;
    MKMultiPartLabel *_secondaryLabel;
    MKMultiPartLabel *_tertiaryLabel;
    _MKUILabel *_primaryAccessoryLabel;
    _MKUILabel *_secondaryAccessoryLabel;
    MKArtworkImageView *_platformArtworkImageView;
    NVInlineButton *_detailButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NVInlineButton *detailButton; // @synthesize detailButton=_detailButton;
@property(readonly, nonatomic) MKArtworkImageView *platformArtworkImageView; // @synthesize platformArtworkImageView=_platformArtworkImageView;
@property(readonly, nonatomic) _MKUILabel *secondaryAccessoryLabel; // @synthesize secondaryAccessoryLabel=_secondaryAccessoryLabel;
@property(readonly, nonatomic) _MKUILabel *primaryAccessoryLabel; // @synthesize primaryAccessoryLabel=_primaryAccessoryLabel;
@property(readonly, nonatomic) MKMultiPartLabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) MKMultiPartLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) _MKUILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)setBackgroundStyle:(long long)arg1;
- (long long)instructionType;
- (id)accessoryLabel;
- (void)setNavigationState:(long long)arg1;
- (id)_textAttributesForInstructionType:(long long)arg1;
- (id)_labelForInstructionType:(long long)arg1;
- (id)_fontForInstructionType:(long long)arg1;
- (double)_availableWidthForInstructionType:(long long)arg1;
- (id)_platformArtworkHorizontalPositioningConstraint;
- (id)_layoutItemForInstructionType:(long long)arg1;
- (void)setAccessibilityOrder;
- (void)configureWithItem:(id)arg1;
- (void)_updateAccessoryLabelCompressionHuggingPriorities;
- (void)_detailButtonTapped:(id)arg1;
- (double)_instructionsLabelToTrailingLayoutGuideDistance;
- (double)_minPlatformArtworkBottomToBottomDistance;
- (double)_secondaryFirstBaselineToBottomPlatformArtworkDistance;
- (double)bottomSpacerHeight;
- (CDStruct_a6fa95e6)_metrics;
- (BOOL)_hasTrailingContent;
- (void)updateExpandButton;
@property(readonly, nonatomic) __weak TransitDirectionsListItem<TransitDirectionsListExpandableItem> *expandableItem;
- (void)layout;
- (void)_updateConstraintValues;
- (void)updateConstraints;
- (id)_imageViewPositionConstraints;
- (id)_constraintsForCellStyle:(unsigned long long)arg1;
- (id)_fontForView:(id)arg1;
- (double)_baselineSpacingAboveView:(id)arg1;
- (void)_cellStyleDidChange;
- (void)_setCellStyle:(unsigned long long)arg1;
- (unsigned long long)_bestCellStyleForCurrentState;
- (void)_createSubviews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

