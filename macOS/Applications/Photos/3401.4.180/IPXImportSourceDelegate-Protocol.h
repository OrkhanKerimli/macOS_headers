//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray;

@protocol IPXImportSourceDelegate
- (void)sort;
- (void)importAssetsImported:(NSArray *)arg1;
- (void)importAssetsRemoved:(NSArray *)arg1;
- (void)importAssetsLoaded:(unsigned long long)arg1;
- (void)importAssetsAddedUnimported:(NSArray *)arg1 alreadyImported:(NSArray *)arg2 removeFromOther:(BOOL)arg3;
@end

