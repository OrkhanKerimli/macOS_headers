//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPXPeopleUtilities : NSObject
{
}

+ (CDUnknownBlockType)manualOrderComparator;
+ (CDUnknownBlockType)_allPeopleComparator;
+ (id)peopleQueryForFetchType:(unsigned long long)arg1 database:(id)arg2;
+ (id)allPeopleOnPeopleHome:(id)arg1;
+ (id)peopleOnPeopleHomeForType:(long long)arg1 database:(id)arg2;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1 database:(id)arg2;
+ (BOOL)isPersonHiddenFromPeopleHome:(id)arg1;
+ (id)personWithUUID:(id)arg1 database:(id)arg2;
+ (id)personWithPersonUri:(id)arg1 database:(id)arg2;
+ (id)sharedContactStore;
+ (id)peopleDetailControllerForEditorialModel:(id)arg1;
+ (id)alertForResettingPeople;
+ (id)alertForRemovingNumberOfPeople:(long long)arg1;
+ (void)requestImageWithTargetSize:(struct CGSize)arg1 keyFace:(id)arg2 cropFactor:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)_setDaysDictionary:(id)arg1;
+ (id)_daysDictionary;
+ (BOOL)_hasRecentlyHandledBootstrapForPerson:(id)arg1;
+ (void)markHandledBootstrapForPerson:(id)arg1;
+ (BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromViewController:(id)arg2 force:(BOOL)arg3 delegate:(id)arg4;
+ (BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromViewController:(id)arg2 delegate:(id)arg3;
+ (BOOL)showBootstrapIfNeededWithContext:(id)arg1 fromViewController:(id)arg2;
+ (id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2;
+ (BOOL)shouldShowBootstrapForPerson:(id)arg1;

@end

