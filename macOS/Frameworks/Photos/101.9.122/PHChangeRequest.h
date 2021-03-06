//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHUpdateChangeRequest-Protocol.h>

@class NSManagedObjectID, NSString, PHChangeRequestHelper, PHPhotoLibrary;

@interface PHChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest>
{
    PHChangeRequestHelper *_helper;
    PHPhotoLibrary *_photoLibrary;
}

+ (BOOL)canGenerateUUIDWithoutEntitlements;
@property(readonly, nonatomic) __weak PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PHChangeRequestHelper *helper; // @synthesize helper=_helper;
- (void).cxx_destruct;
- (BOOL)prepareForServicePreflightCheck:(id *)arg1;
- (BOOL)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initForNewObject;
- (id)init;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (void)didMutate;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, getter=isMutated) BOOL mutated;
@property(readonly) BOOL isNewRequest;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (BOOL)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property(readonly, nonatomic) NSManagedObjectID *objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

