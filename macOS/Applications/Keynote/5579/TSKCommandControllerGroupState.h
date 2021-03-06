//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, TSKCommandGroup, TSKCommandSelectionBehavior, TSUIntegerKeyDictionary;

@interface TSKCommandControllerGroupState : NSObject
{
    TSKCommandGroup *_currentGroup;
    unsigned long long _currentGroupOpenCount;
    unsigned long long _indexOfGroupThatSetCurrentGroupActionString;
    BOOL _isAutomaticGroupOpen;
    BOOL _automaticGroupNeedsClose;
    BOOL _isClosingAutomaticGroup;
    NSMutableArray *_automaticGroupCloseHandlers;
    unsigned long long _indexOfGroupThatSetCurrentSelectionBehavior;
    TSKCommandSelectionBehavior *_currentSelectionBehavior;
    TSUIntegerKeyDictionary *_selectionBehaviorsByGroupIndex;
    NSMutableIndexSet *_progressiveEnqueuingEnabledIndexes;
    NSMutableIndexSet *_progressiveSelectionBehaviorEnabledIndexes;
}

@property(retain, nonatomic) NSMutableIndexSet *progressiveSelectionBehaviorEnabledIndexes; // @synthesize progressiveSelectionBehaviorEnabledIndexes=_progressiveSelectionBehaviorEnabledIndexes;
@property(retain, nonatomic) NSMutableIndexSet *progressiveEnqueuingEnabledIndexes; // @synthesize progressiveEnqueuingEnabledIndexes=_progressiveEnqueuingEnabledIndexes;
@property(retain, nonatomic) TSUIntegerKeyDictionary *selectionBehaviorsByGroupIndex; // @synthesize selectionBehaviorsByGroupIndex=_selectionBehaviorsByGroupIndex;
@property(retain, nonatomic) TSKCommandSelectionBehavior *currentSelectionBehavior; // @synthesize currentSelectionBehavior=_currentSelectionBehavior;
@property(nonatomic) unsigned long long indexOfGroupThatSetCurrentSelectionBehavior; // @synthesize indexOfGroupThatSetCurrentSelectionBehavior=_indexOfGroupThatSetCurrentSelectionBehavior;
@property(retain, nonatomic) NSMutableArray *automaticGroupCloseHandlers; // @synthesize automaticGroupCloseHandlers=_automaticGroupCloseHandlers;
@property(nonatomic) BOOL isClosingAutomaticGroup; // @synthesize isClosingAutomaticGroup=_isClosingAutomaticGroup;
@property(nonatomic) BOOL automaticGroupNeedsClose; // @synthesize automaticGroupNeedsClose=_automaticGroupNeedsClose;
@property(nonatomic) BOOL isAutomaticGroupOpen; // @synthesize isAutomaticGroupOpen=_isAutomaticGroupOpen;
@property(nonatomic) unsigned long long indexOfGroupThatSetCurrentGroupActionString; // @synthesize indexOfGroupThatSetCurrentGroupActionString=_indexOfGroupThatSetCurrentGroupActionString;
@property(nonatomic) unsigned long long currentGroupOpenCount; // @synthesize currentGroupOpenCount=_currentGroupOpenCount;
@property(retain, nonatomic) TSKCommandGroup *currentGroup; // @synthesize currentGroup=_currentGroup;
- (void)dealloc;
- (id)init;

@end

