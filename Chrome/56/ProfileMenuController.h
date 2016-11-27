//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMenuItem;

__attribute__((visibility("hidden")))
@interface ProfileMenuController : NSObject
{
    struct unique_ptr<AvatarMenu, std::__1::default_delete<AvatarMenu>> avatarMenu_;
    struct unique_ptr<ProfileMenuControllerInternal::Observer, std::__1::default_delete<ProfileMenuControllerInternal::Observer>> observer_;
    NSMenuItem *mainMenuItem_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createItemWithTitle:(id)arg1 action:(SEL)arg2;
- (void)rebuildMenu;
- (void)activeBrowserChangedTo:(struct Browser *)arg1;
- (void)initializeMenu;
- (id)menu;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)insertItemsIntoMenu:(id)arg1 atOffset:(long long)arg2 fromDock:(BOOL)arg3;
- (void)newProfile:(id)arg1;
- (void)editProfile:(id)arg1;
- (void)switchToProfileFromDock:(id)arg1;
- (void)switchToProfileFromMenu:(id)arg1;
- (id)initWithMainMenuItem:(id)arg1;

@end

