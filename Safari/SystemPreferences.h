//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SystemPreferences : NSObject
{
}

+ (BOOL)_openPreferencePaneAtPath:(id)arg1 subsection:(id)arg2;
+ (BOOL)openSecurityAndPrivacyPreferences:(id)arg1;
+ (BOOL)openNetworkPreferences:(id)arg1;
+ (BOOL)openInternetAccountsPreferences;
+ (BOOL)openNotificationsPreferences;

@end

