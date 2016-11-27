//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSMenuDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BrowserExtensionMenuDelegate : NSObject <NSMenuDelegate>
{
    struct ExtensionMenu *_extensionMenu;
    BOOL _menuNeedsUpdate;
}

- (void)clearMenu:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setMenuNeedsUpdate:(BOOL)arg1;
- (struct ExtensionMenu *)extensionMenu;
- (id)initWithExtensionMenu:(struct ExtensionMenu *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

