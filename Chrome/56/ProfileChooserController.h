//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/BaseBubbleController.h>

#import <Google Chrome Framework/NSTextViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ProfileChooserController : BaseBubbleController <NSTextViewDelegate>
{
    struct unique_ptr<AvatarMenu, std::__1::default_delete<AvatarMenu>> avatarMenu_;
    struct unique_ptr<ActiveProfileObserverBridge, std::__1::default_delete<ActiveProfileObserverBridge>> observer_;
    struct Browser *browser_;
    basic_string_805fe43b accountIdToRemove_;
    int viewMode_;
    int tutorialMode_;
    struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char>>>> currentProfileAccounts_;
    struct unique_ptr<content::WebContents, std::__1::default_delete<content::WebContents>> webContents_;
    struct unique_ptr<GaiaWebContentsDelegate, std::__1::default_delete<GaiaWebContentsDelegate>> webContentsDelegate_;
    BOOL isGuestSession_;
    int serviceType_;
    int accessPoint_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)shouldShowGoIncognito;
- (void)postActionPerformed:(int)arg1;
- (id)accountButtonWithRect:(struct CGRect)arg1 accountId:(const basic_string_805fe43b *)arg2 tag:(int)arg3 reauthRequired:(BOOL)arg4;
- (id)linkButtonWithTitle:(id)arg1 frameOrigin:(struct CGPoint)arg2 action:(SEL)arg3;
- (id)hoverButtonWithRect:(struct CGRect)arg1 text:(id)arg2 action:(SEL)arg3;
- (id)hoverButtonWithRect:(struct CGRect)arg1 text:(id)arg2 image:(id)arg3 action:(SEL)arg4;
- (id)hoverButtonWithRect:(struct CGRect)arg1 text:(id)arg2 imageResourceId:(int)arg3 action:(SEL)arg4;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)buildSwitchUserView;
- (id)buildAccountRemovalView;
- (id)buildGaiaEmbeddedView;
- (id)createAccountsListWithRect:(struct CGRect)arg1;
- (id)createMaterialDesignOptionsViewWithFrame:(struct CGRect)arg1 showLock:(BOOL)arg2;
- (id)createCurrentProfileAccountsView:(struct CGRect)arg1;
- (id)createOptionsViewWithRect:(struct CGRect)arg1 showLock:(BOOL)arg2;
- (id)createOtherProfileView:(int)arg1;
- (id)createGuestProfileView;
- (id)createSupervisedUserDisclaimerView;
- (id)createCurrentProfileLinksForItem:(const struct Item *)arg1 rect:(struct CGRect)arg2;
- (id)createMaterialDesignCurrentProfileView:(const struct Item *)arg1;
- (id)createCurrentProfileView:(const struct Item *)arg1;
- (id)buildSyncErrorViewIfNeeded;
- (id)tutorialViewWithMode:(int)arg1 titleMessage:(id)arg2 contentMessage:(id)arg3 linkMessage:(id)arg4 buttonMessage:(id)arg5 stackButton:(BOOL)arg6 hasCloseButton:(BOOL)arg7 linkAction:(SEL)arg8 buttonAction:(SEL)arg9;
- (id)buildTutorialViewIfNeededForItem:(const struct Item *)arg1;
- (id)buildRightClickTutorialView;
- (id)buildWelcomeUpgradeTutorialView:(const struct Item *)arg1;
- (id)buildSigninErrorView;
- (id)buildSigninConfirmationView;
- (id)buildProfileChooserView;
- (void)buildProfileChooserViewWithProfileView:(id)arg1 tutorialView:(id)arg2 syncErrorView:(id)arg3 otherProfiles:(id)arg4 atYOffset:(double)arg5 inContainer:(id)arg6 showLock:(_Bool)arg7;
- (double)buildFastUserSwitcherViewWithProfiles:(id)arg1 atYOffset:(double)arg2 inContainer:(id)arg3;
- (double)addSeparatorToContainer:(id)arg1 atYOffset:(double)arg2;
- (void)initMenuContentsWithView:(int)arg1;
- (id)initWithBrowser:(struct Browser *)arg1 anchoredAt:(struct CGPoint)arg2 viewMode:(int)arg3 tutorialMode:(int)arg4 serviceType:(int)arg5 accessPoint:(int)arg6;
- (void)cleanUpEmbeddedViewContents;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)dismissTutorial:(id)arg1;
- (void)navigateBackFromSwitchUserView:(id)arg1;
- (void)disconnectProfile:(id)arg1;
- (void)syncSettingsConfirmed:(id)arg1;
- (void)configureSyncSettings:(id)arg1;
- (void)showLearnMorePage:(id)arg1;
- (void)showSwitchUserView:(id)arg1;
- (void)seeWhatsNew:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)showSyncPassphraseSetupView:(id)arg1;
- (void)showUpdateChromeView:(id)arg1;
- (void)showAccountReauthenticationView:(id)arg1;
- (void)showSignoutSigninView:(id)arg1;
- (void)showSignoutView:(id)arg1;
- (void)showAccountRemovalView:(id)arg1;
- (void)navigateBackFromSigninPage:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)showInlineSigninPage:(id)arg1;
- (void)showSigninUIForMode:(int)arg1;
- (void)lockProfile:(id)arg1;
- (void)hideAccountManagement:(id)arg1;
- (void)showAccountManagement:(id)arg1;
- (void)goIncognito:(id)arg1;
- (void)closeAllWindows:(id)arg1;
- (void)exitGuest:(id)arg1;
- (void)showUserManager:(id)arg1;
- (void)switchToGuest:(id)arg1;
- (void)switchToProfile:(id)arg1;
- (void)editProfile:(id)arg1;
- (void)setTutorialMode:(int)arg1;
- (int)viewMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

