//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseQueryDrivenObjectsController.h"

@class IPXDatabaseAlbumQuery, NSDictionary, PFCoalescer, PFDispatchQueue, PFSerialQueue, RDAlbum, RDVersionQueryOptions;
@protocol PFDispatchQueueRunBlock;

@interface IPXDatabaseSparseAlbumController : IPXDatabaseQueryDrivenObjectsController
{
    PFDispatchQueue<PFDispatchQueueRunBlock> *_processingQueue;
    RDAlbum *_album;
    RDVersionQueryOptions *_queryOptions;
    IPXDatabaseAlbumQuery *_query;
    NSDictionary *_cachedAspectRatios;
    PFSerialQueue *_contentSerialProcessingQueue;
    PFCoalescer *_previewUpdatesCoalescer;
}

@property(readonly, nonatomic) PFCoalescer *previewUpdatesCoalescer; // @synthesize previewUpdatesCoalescer=_previewUpdatesCoalescer;
@property(readonly, nonatomic) PFSerialQueue *contentSerialProcessingQueue; // @synthesize contentSerialProcessingQueue=_contentSerialProcessingQueue;
@property(retain, nonatomic) NSDictionary *cachedAspectRatios; // @synthesize cachedAspectRatios=_cachedAspectRatios;
@property(readonly, nonatomic) IPXDatabaseAlbumQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) RDVersionQueryOptions *queryOptions; // @synthesize queryOptions=_queryOptions;
@property(readonly, nonatomic) RDAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)_invalidateImageProxyStatesForModelsAtIndexes:(id)arg1;
- (void)_performPreviewUpdatesCoalescerActionWithBufferSnapshot:(id)arg1;
- (CDUnknownBlockType)_previewUpdatesCoalescerAction;
- (void)locked_processSmallPAPreviewImagesUpdatedFromLiveEditForVersionAddress:(id)arg1;
- (void)locked_processSmallPAPreviewImagesUpdatedForVersionAddress:(id)arg1;
- (void)databaseContainerQuery:(id)arg1 didUpdateVersionQueryResult:(id)arg2;
- (void)applyQueryResultChange:(id)arg1;
- (void)updateDatabaseContainerQuery:(id)arg1;
- (BOOL)isLibraryMessageReceiver;
- (BOOL)monitorsPAPreviewImageUpdates;
- (id)locked_updateDatabaseModels:(id)arg1 reportMetdataChanges:(id)arg2 removeUpdates:(BOOL)arg3;
- (id)locked_updateDatabaseModels:(id)arg1 reportMetdataChanges:(id)arg2;
- (id)locked_latestDateForCollectionObjects;
- (id)locked_earliestDateForCollectionObjects;
- (BOOL)collectionObjectDateRangeIsCalculatedFromArrangedObjects;
- (CDUnknownBlockType)objectsCollectionSortingComparator;
- (CDUnknownBlockType)assignedObjectsComparator;
- (id)newCollectionWithUUID:(id)arg1 name:(id)arg2 lifetimeSequence:(unsigned long long)arg3 objects:(id)arg4 userInfo:(id)arg5;
- (Class)objectsCollectionClass;
- (id)objectsCollectionName;
- (id)specificProcessingQueue;
- (id)prepareContentAroundItemAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAlbum:(id)arg1 queryOptions:(id)arg2;
- (id)initWithAlbum:(id)arg1;

@end

