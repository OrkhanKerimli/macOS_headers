//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/OldSpotlightDataSource-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol SpotlightCacheController;

__attribute__((visibility("hidden")))
@interface HistorySpotlightDataSource : NSObject <OldSpotlightDataSource>
{
    id <SpotlightCacheController> _spotlightCacheController;
    NSMutableSet *_pendingSpotlightCacheAdditions;
    NSMutableSet *_pendingSpotlightCacheDeletions;
    NSMutableDictionary *_fullTextPendingSpotlightCacheAddition;
    BOOL _deleteEntireSpotlightCache;
}

- (void).cxx_destruct;
- (void)_addHistoryItem:(id)arg1 toSpotlightCacheArray:(id)arg2;
- (void)_addHistoryItemsFromSet:(id)arg1 toSpotlightCacheArray:(id)arg2;
- (void)_resetPendingSpotlightItems;
- (void)_deleteEntireSpotlightCache;
- (void)_removeItemsFromSpotlightCache:(id)arg1;
- (void)_addItemsToSpotlightCache:(id)arg1;
- (void)updateWillBeginForSpotlightDataType:(id)arg1;
- (void)updateDidEndForSpotlightDataType:(id)arg1;
- (void)resetAdditionsAndDeletionsForSpotlightDataType:(id)arg1;
- (id)itemsToDeleteForSpotlightDataType:(id)arg1;
- (id)itemsToAddForSpotlightDataType:(id)arg1;
- (id)allItemsForSpotlightDataType:(id)arg1;
- (void)didCachePageText:(id)arg1 forHistoryItem:(id)arg2;
- (void)savePendingChangesBeforeTermination;
- (id)initWithSpotlightCacheController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

