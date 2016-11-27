//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BrowserParentalControls : NSObject
{
    BOOL _parentalControlsEnabled;
    BOOL _adultContentFilterEnabled;
}

+ (id)sharedParentalControls;
- (void)notifyFamilyControlsParentChangedBookmarks:(id)arg1;
- (BOOL)shouldFillWithBuiltInBookmarks;
- (BOOL)adultContentFilterEnabled;
- (BOOL)parentalControlsEnabled;
- (void)dealloc;
- (id)init;
- (void)_mcxPreferencesChanged:(id)arg1;
- (BOOL)_userHasWebSiteRestrictions;
- (BOOL)_isManagedUser;
- (void *)_familyControlsFramework;
- (void)_updateAdultContentFilterEnabled;
- (BOOL)_adultContentFilterEnabled;
- (void)_updateParentalControlsEnabled;
- (BOOL)_parentalControlsEnabled;

@end

