//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LPItem.h"

#import "LPItemContainer.h"
#import "LPItemProgress.h"
#import "LPLayoutItem.h"

@class LPRunnable, NSMutableArray, NSString;

@interface LPDownloadingApp : LPItem <LPItemContainer, LPItemProgress, LPLayoutItem>
{
    NSString *_storeID;
    NSString *_bundleID;
    NSString *_categoryUTI;
    NSString *_installPath;
    NSString *_statusString;
    struct CGRect _flyFromRect;
    id _flyInImage;
    LPRunnable *_representedRunnable;
    float _progress;
    double _progressTotalBytes;
    double _progressDownloadedBytes;
    int _state;
    int _action;
    unsigned int _isWidget:1;
    unsigned int _isApplication:1;
}

+ (id)bundleIDForXPCMessage:(id)arg1;
+ (id)storeIDForXPCMessage:(id)arg1;
@property(readonly, nonatomic) BOOL isApplication; // @synthesize isApplication=_isApplication;
@property(readonly, nonatomic) BOOL isWidget; // @synthesize isWidget=_isWidget;
@property(readonly, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(readonly, nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) id flyFromImage; // @synthesize flyFromImage=_flyInImage;
@property(readonly, nonatomic) struct CGRect flyFromRect; // @synthesize flyFromRect=_flyFromRect;
@property(readonly, nonatomic) double progressDownloadedBytes; // @synthesize progressDownloadedBytes=_progressDownloadedBytes;
@property(readonly, nonatomic) double progressTotalBytes; // @synthesize progressTotalBytes=_progressTotalBytes;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) LPRunnable *representedRunnable; // @synthesize representedRunnable=_representedRunnable;
@property(readonly, nonatomic) NSString *categoryUTI; // @synthesize categoryUTI=_categoryUTI;
@property(readonly, nonatomic) NSString *installPath; // @synthesize installPath=_installPath;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
- (void).cxx_destruct;
- (void)_updateStateFromXPCProductStatus:(id)arg1;
- (BOOL)_loadImageAtPath:(id)arg1;
- (void)retrieveImageOfLargeSize:(unsigned long long)arg1 andMiniSize:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)retrieveImageOfLargeSize:(unsigned long long)arg1 andMiniSize:(unsigned long long)arg2;
- (void)processProgressXPCMessage:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSMutableArray *children;
- (void)removeObjectFromSynthesizedChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inSynthesizedChildrenAtIndex:(unsigned long long)arg2;
- (id)objectInSynthesizedChildrenAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSynthesizedChildren;
@property(readonly, nonatomic) NSString *blacklistName;
@property(readonly, nonatomic) BOOL addedByUser;
@property(readonly, nonatomic) BOOL isStoreApp;
@property(readonly, nonatomic) NSString *likelyInstallPath;
- (id)category;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) int progressState; // @dynamic progressState;
- (id)snapshotForStorage:(_Bool)arg1 deepCopy:(_Bool)arg2;
- (id)initWithInitialXPCMessage:(id)arg1;
- (void)insertIntoStorage:(id)arg1 parent:(id)arg2 withOrder:(long long)arg3;
- (id)storageCreationProperties;
- (id)storageColumnForProperty:(id)arg1;
- (id)storageTable;
- (int)storageType;
- (id)initWithSQLStatement:(struct sqlite3_stmt *)arg1 withColumn:(int *)arg2;

@end

