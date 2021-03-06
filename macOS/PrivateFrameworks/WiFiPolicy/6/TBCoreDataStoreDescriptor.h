//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSPersistentStoreDescription, NSURL;

@interface TBCoreDataStoreDescriptor : NSObject
{
    unsigned long long _type;
    NSURL *_storeURL;
    NSURL *_modelURL;
    NSDictionary *_storeOptions;
    NSPersistentStoreDescription *_storeDescription;
}

+ (id)defaultModelURL;
+ (id)tempStoresDirectoryURL;
+ (id)defaultStoresDirectoryURL;
+ (id)defaultPersistentStoreURLWithDirectory:(id)arg1;
+ (id)tempStoreDescriptor;
+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)clientStoreDescriptor;
@property(readonly, nonatomic) NSPersistentStoreDescription *storeDescription; // @synthesize storeDescription=_storeDescription;
@property(retain, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(retain, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(retain, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3;

@end

