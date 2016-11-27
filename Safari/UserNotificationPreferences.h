//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

#import <Safari/NSTableViewDataSource-Protocol.h>
#import <Safari/TableViewPlusDelegate-Protocol.h>

@class NSArray, NSButton, NSString, NSTableView, NSTextField;

__attribute__((visibility("hidden")))
@interface UserNotificationPreferences : PreferencesModule <TableViewPlusDelegate, NSTableViewDataSource>
{
    NSTableView *tableView;
    NSButton *removeButton;
    NSButton *removeAllButton;
    NSArray *_permissionData;
    NSButton *_canPromptForPushNotificationsCheckbox;
    NSTextField *_emptyTablePlaceholderText;
}

@property(nonatomic) __weak NSTextField *emptyTablePlaceholderText; // @synthesize emptyTablePlaceholderText=_emptyTablePlaceholderText;
@property(retain, nonatomic) NSArray *permissionData; // @synthesize permissionData=_permissionData;
- (void).cxx_destruct;
- (id)helpAnchor;
- (BOOL)tableView:(id)arg1 keyDown:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)toggleCanPromptForPushNotifications:(id)arg1;
- (BOOL)_canRemoveAllItems;
- (BOOL)_canRemoveSelectedItems;
- (void)_updateRemoveButtons;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_reloadTableData;
- (void)removeAllItems:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)_notificationPermissionsChanged:(id)arg1;
- (void)willBeDisplayed;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)openUserNotificationPreferences:(id)arg1;
- (void)_updatePermissionDataAndReloadTable;
- (void)_processRemotePermissions:(id)arg1 withLocalPermissions:(id)arg2 intoCombinedPermissionData:(id)arg3;
- (id)imageForPreferenceNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

