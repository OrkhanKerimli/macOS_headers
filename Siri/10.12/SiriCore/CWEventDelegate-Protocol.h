//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol CWEventDelegate

@optional
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(NSString *)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(NSString *)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)rangingReportEventForWiFiInterfaceWithName:(NSString *)arg1 data:(NSArray *)arg2 error:(NSError *)arg3;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(NSString *)arg1;
- (void)countryCodeDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)bssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)clientConnectionInvalidated;
- (void)clientConnectionInterrupted;
@end

