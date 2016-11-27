//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/ReopensAtLaunch-Protocol.h>

@class NSArrayController, NSMatrix, NSTextField;

__attribute__((visibility("hidden")))
@interface CacheController : NSWindowController <ReopensAtLaunch>
{
    NSMatrix *webCoreStatisticsMatrix;
    NSMatrix *webFoundationStatisticsMatrix;
    NSMatrix *javaScriptStatisticsMatrix;
    NSArrayController *javaScriptProtectedObjectsArrayController;
    NSArrayController *javaScriptAllObjectsArrayController;
    NSMatrix *siteIconStatisticsMatrix;
    NSMatrix *fontCacheStatisticsMatrix;
    NSMatrix *memoryStatisticsMatrix;
    NSMatrix *javaScriptMemoryStatisticsMatrix;
    NSTextField *webCoreCacheTotalPurgedTextField;
    int _processType;
    struct Dictionary _webProcessStatistics;
}

+ (void)reopen;
+ (id)sharedCacheController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)toggleProcessType:(id)arg1;
- (void)returnFreeMemoryToSystem:(id)arg1;
- (void)garbageCollectJavaScriptObjects:(id)arg1;
- (void)toggleDisableWebCoreCaches:(id)arg1;
- (void)refreshStatistics:(id)arg1;
- (void)setWebProcessStatistics:(const struct Dictionary *)arg1;
- (void)onStatisticsDataReady;
- (void)refreshMemoryStatisticsMatrix;
- (void)refreshFontCacheStatisticsMatrix;
- (void)refreshSiteIconStatisticsMatrix;
- (void)refreshJavaScriptStatisticsMatrix;
- (void)refreshWebFoundationStatisticsMatrix;
- (void)refreshWebCoreStatisticsMatrix;
- (void)refreshWebCoreStatisticsMatrixFromWebProcess;
- (void)setStat:(int)arg1 toKey:(id)arg2 fromWKDict:(const struct Dictionary *)arg3;
- (void)refreshWebCoreStatisticsMatrixFromUIProcess;
- (void)setTotal:(int)arg1;
- (void)setStat:(int)arg1 toKey:(id)arg2 fromDict:(id)arg3;
- (void)purgeInactiveFontData:(id)arg1;
- (void)emptyWebFoundationCaches:(id)arg1;
- (void)emptyWebCoreCaches:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)init;

@end

