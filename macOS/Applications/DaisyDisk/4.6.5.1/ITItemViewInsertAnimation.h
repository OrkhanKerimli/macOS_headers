//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IITItemGroupAnimationDelegate-Protocol.h"

@class ITItemGroup, ITItemLayerPool, NSMutableArray;
@protocol IITItemViewInsertAnimationDelegate;

@interface ITItemViewInsertAnimation : NSObject <IITItemGroupAnimationDelegate>
{
    ITItemGroup *m_rootGroup;
    ITItemGroup *m_group;
    int m_animationPhase;
    id <IITItemViewInsertAnimationDelegate> m_delegate;
    NSMutableArray *m_insertedItemViews;
    ITItemLayerPool *m_itemLayerPool;
    BOOL m_isSplitAnimation;
    int m_splitAnimationInitialPhase;
    double m_splitAnimationInitialProgress;
}

- (void)updateInsertedItemsLayersForVisibleItemRange:(struct _NSRange)arg1;
- (void)dispose;
- (unsigned long long)firstInsertedItemIndex;
- (void)removeInsertedItemViewsStartingFromIndex:(unsigned long long)arg1;
- (id)insertedItemViews;
- (void)itemGroupOpacityAnimationDidComplete:(id)arg1;
- (void)itemGroupMoveAnimationDidComplete:(id)arg1;
- (id)splitAtIndex:(unsigned long long)arg1;
- (double)animationProgress;
- (void)startAnimationWithMemento:(id)arg1;
- (void)startAnimationWithMemento:(id)arg1 isSplit:(BOOL)arg2;
- (void)stopAnimation;
- (void)startAnimationWithInsertedItemViews:(id)arg1 firstInsertedItemIndex:(unsigned long long)arg2;
- (void)setGroup:(id)arg1;
- (void)startNextAnimationPhaseWithProgress:(double)arg1 fadeOnly:(BOOL)arg2;
- (BOOL)isMovable;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)initWithRootGroup:(id)arg1 itemLayerPool:(id)arg2 delegate:(id)arg3;

@end

