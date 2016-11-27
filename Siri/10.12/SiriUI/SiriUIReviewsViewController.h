//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import <SiriUI/NSCollectionViewDataSource-Protocol.h>
#import <SiriUI/NSCollectionViewDelegateFlowLayout-Protocol.h>

@class NSCollectionView, NSMutableArray, NSString, NSView, SALocalSearchReviewList, SiriUIScrollView;
@protocol SiriUIReviewsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SiriUIReviewsViewController : SiriUISnippetViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout>
{
    SALocalSearchReviewList *_reviewList;
    NSMutableArray *_cellSizeForRowCache;
    NSCollectionView *_collectionView;
    SiriUIScrollView *_scrollView;
    struct {
        unsigned int didLoadCollectionView:1;
        unsigned int viewForRatingForReview:1;
        unsigned int offsetForRatingView:1;
    } _delegateFlags;
    id <SiriUIReviewsViewControllerDelegate> _reviewsDelegate;
    long long _reviewCharacterLimit;
    NSView *_totalRatingView;
    double _verticalSpaceNeededForRatingView;
    NSView *_providerView;
    NSString *_providerName;
    struct UIOffset _totalRatingViewOffset;
    struct UIOffset _providerViewOffset;
}

@property(copy, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(nonatomic) struct UIOffset providerViewOffset; // @synthesize providerViewOffset=_providerViewOffset;
@property(retain, nonatomic) NSView *providerView; // @synthesize providerView=_providerView;
@property(nonatomic) double verticalSpaceNeededForRatingView; // @synthesize verticalSpaceNeededForRatingView=_verticalSpaceNeededForRatingView;
@property(nonatomic) struct UIOffset totalRatingViewOffset; // @synthesize totalRatingViewOffset=_totalRatingViewOffset;
@property(retain, nonatomic) NSView *totalRatingView; // @synthesize totalRatingView=_totalRatingView;
@property(nonatomic) long long reviewCharacterLimit; // @synthesize reviewCharacterLimit=_reviewCharacterLimit;
@property(retain, nonatomic) SALocalSearchReviewList *reviewList; // @synthesize reviewList=_reviewList;
@property(nonatomic) __weak id <SiriUIReviewsViewControllerDelegate> reviewsDelegate; // @synthesize reviewsDelegate=_reviewsDelegate;
- (void).cxx_destruct;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)_punchoutForIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 shouldChangeItemsAtIndexPaths:(id)arg2 toHighlightState:(long long)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)siriDidLayoutSnippetView;
- (void)didEndDisplayingReusableHeaderView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (Class)headerViewClass;
- (double)desiredHeightForWidth:(double)arg1;
- (void)loadView;
- (struct CGSize)_sizeForCellAtIndex:(long long)arg1 forWidth:(double)arg2;
- (long long)_rowForItemAtIndex:(long long)arg1 forWidth:(double)arg2;
- (long long)_numberOfRowsForWidth:(double)arg1;
- (long long)_numberOfColumnsForWidth:(double)arg1;
- (double)_effectiveContentWidthForItemCellsForWidth:(double)arg1;
- (long long)_numberOfCells;
- (struct NSEdgeInsets)_reviewCollectionInsets;
- (double)_horizontalCellSpacing;
- (double)_minCellWidth;
- (id)_displayStringForReviewCount:(long long)arg1 providerName:(id)arg2 providerView:(id)arg3;
- (void)updateSubtitle;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

