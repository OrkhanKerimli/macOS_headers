//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _DeferredTabScrubberOperation : NSObject
{
    long long _operationType;
    long long _insertionIndex;
    long long _removalIndex;
    long long _selectionIndex;
    long long _sourceIndex;
    long long _targetIndex;
}

+ (id)moveOperationFromIndex:(long long)arg1 toIndex:(long long)arg2;
+ (id)removalOperationForIndex:(long long)arg1 selectingItemAtIndex:(long long)arg2;
+ (id)insertionOperationForIndex:(long long)arg1;
- (void)applyToVisualScrubberViewController:(id)arg1;
- (id)init;

@end

