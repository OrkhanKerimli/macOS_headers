//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NCNotificationWindowDelegate-Protocol.h"

@class NSString, _TtC21NotificationCenterApp22NotificationActionObjC;
@protocol _TtP21NotificationCenterApp11BannerModel_;

@protocol _TtP21NotificationCenterApp14BannerDelegate_ <NCNotificationWindowDelegate>
- (void)extensionDismissedWithBanner:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1;
- (void)makeKeyWithBanner:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1;
- (void)dismissWithBanner:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1;
- (void)contentClickedOn:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1;
- (void)snoozeWithBanner:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1 forTime:(double)arg2;
- (void)closeWithBanner:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1;
- (void)performReplyActionOn:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1 action:(_TtC21NotificationCenterApp22NotificationActionObjC *)arg2 reply:(NSString *)arg3;
- (void)performActionOn:(id <_TtP21NotificationCenterApp11BannerModel_>)arg1 action:(_TtC21NotificationCenterApp22NotificationActionObjC *)arg2;
@end

