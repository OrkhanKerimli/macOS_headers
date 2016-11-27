//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface AppExtensionContextMenu : NSObject
{
    NSMapTable *_userInfo;
    NSUUID *_extensionUUID;
    NSMutableArray *_contextMenuItems;
}

@property(readonly, nonatomic) NSMutableArray *contextMenuItems; // @synthesize contextMenuItems=_contextMenuItems;
@property(retain, nonatomic) NSUUID *extensionUUID; // @synthesize extensionUUID=_extensionUUID;
- (void).cxx_destruct;
- (void)invalidateContextMenuUserInfoForContentViewController:(id)arg1;
- (id)userInfoForContentViewController:(id)arg1;
- (void)setUserInfo:(id)arg1 forContentViewController:(id)arg2;
- (void)addContextMenuItem:(id)arg1;

@end

