//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPropertyTableViewController.h"

#import "NSMenuDelegate-Protocol.h"
#import "TIdentityPickerDelegate-Protocol.h"
#import "TStdAlertSheetClientProtocol-Protocol.h"

@class NSString, TInfoWindowViewController, TPrivsAuthButtonController;

@interface TPrivsTableViewMainController : TPropertyTableViewController <NSMenuDelegate, TStdAlertSheetClientProtocol, TIdentityPickerDelegate>
{
    TInfoWindowViewController *_controller;
    TPrivsAuthButtonController *_authButtonController;
    struct TNSRef<NSArray<TNodePermissionsInfo *>, void> _initialNodePermissionsInfoArray;
    _Bool _isAuthenticated;
    _Bool _shouldEnableRevertMenuItem;
    _Bool _shouldEnableMinusButton;
    struct TKeyValueBinder _isAuthenticatedBinder;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
@property(nonatomic) _Bool shouldEnableMinusButton; // @synthesize shouldEnableMinusButton=_shouldEnableMinusButton;
@property(nonatomic) _Bool shouldEnableRevertMenuItem; // @synthesize shouldEnableRevertMenuItem=_shouldEnableRevertMenuItem;
@property(nonatomic) _Bool isAuthenticated; // @synthesize isAuthenticated=_isAuthenticated;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)identityPickerDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;
- (void)revertChangesPressed:(id)arg1;
- (void)applyToEnclosedPressed:(id)arg1;
- (void)chooseNewGroupPressed:(id)arg1;
- (void)chooseNewOwnerPressed:(id)arg1;
- (void)makeUserOwnerPressed:(id)arg1;
- (void)minusButtonPressed;
- (void)plusButtonPressed;
- (int)changePermissionsTo:(id)arg1;
- (void)applyToEnclosed;
- (_Bool)setPrivilegesForIdentity:(const struct TIdentity *)arg1 from:(const struct TAccessControlInfo *)arg2 to:(const struct TAccessControlInfo *)arg3;
- (void)privsPopupPressed:(id)arg1;
- (void)changeGroupTo:(const struct TIdentity *)arg1;
- (void)changeOwnerTo:(const struct TIdentity *)arg1;
- (void)removeSelection;
- (void)removeIdentities:(const vector_5fd34a1b *)arg1 withAccessControlInfo:(const vector_27cb8753 *)arg2;
- (void)addIdentities:(const vector_5fd34a1b *)arg1;
- (void)getDisplayedIdentities:(vector_5fd34a1b *)arg1;
- (void)tableViewSelectionDidChange;
- (void)menuNeedsUpdate:(id)arg1 privsButton:(id)arg2;
- (void)populate;
- (void)targetNodesChanging;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldBeVisible;
- (void)setValue:(id)arg1;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

