//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriCore/NSObject-Protocol.h>

@class NSData, NSError, NSString, NSURL, SiriCoreAceConnectionAnalysisInfo, SiriCoreConnectionType;
@protocol SiriCoreStreamProviderDelegate;

@protocol SiriCoreStreamProvider <NSObject>
- (NSString *)getResolvedHost;
- (BOOL)shouldFallbackFromError:(NSError *)arg1;
- (BOOL)isPeerConnectionError:(NSError *)arg1;
- (void)close;
- (void)getRemoteMetrics:(void (^)(SiriCoreConnectionMetrics *))arg1;
- (SiriCoreAceConnectionAnalysisInfo *)analysisInfo;
- (SiriCoreConnectionType *)connectionType;
- (BOOL)shouldFallbackQuickly;
- (NSData *)headerData;
- (void)openStreamPairForURL:(NSURL *)arg1 withAceHost:(NSString *)arg2 completion:(void (^)(NSInputStream *, NSOutputStream *, NSError *))arg3;
- (void)setConnectByPOPMethod:(BOOL)arg1;
- (void)setDelegate:(id <SiriCoreStreamProviderDelegate>)arg1;
@end

