//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Google Chrome Framework/HandoffActiveURLObserverBridgeDelegate-Protocol.h>
#import <Google Chrome Framework/NSApplicationDelegate-Protocol.h>
#import <Google Chrome Framework/NSMenuDelegate-Protocol.h>
#import <Google Chrome Framework/NSUserInterfaceValidations-Protocol.h>

@class NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface AppController : NSObject <HandoffActiveURLObserverBridgeDelegate, NSUserInterfaceValidations, NSMenuDelegate, NSApplicationDelegate>
{
    struct unique_ptr<CommandUpdater, std::__1::default_delete<CommandUpdater>> menuState_;
    struct Profile *lastProfile_;
    struct unique_ptr<AppControllerProfileObserver, std::__1::default_delete<AppControllerProfileObserver>> profileAttributesStorageObserver_;
    struct BookmarkMenuBridge *bookmarkMenuBridge_;
    struct map<base::FilePath, std::__1::unique_ptr<BookmarkMenuBridge, std::__1::default_delete<BookmarkMenuBridge>>, std::__1::less<base::FilePath>, std::__1::allocator<std::__1::pair<const base::FilePath, std::__1::unique_ptr<BookmarkMenuBridge, std::__1::default_delete<BookmarkMenuBridge>>>>> profileBookmarkMenuBridgeMap_;
    struct unique_ptr<HistoryMenuBridge, std::__1::default_delete<HistoryMenuBridge>> historyMenuBridge_;
    struct scoped_nsobject<AppShimMenuController> appShimMenuController_;
    struct scoped_nsobject<ProfileMenuController> profileMenuController_;
    vector_4943d1d3 startupUrls_;
    BOOL startupComplete_;
    NSMenuItem *closeTabMenuItem_;
    NSMenuItem *closeWindowMenuItem_;
    NSMenu *helpMenu_;
    struct TimeTicks reopenTime_;
    struct ObserverList<ui::WorkAreaWatcherObserver, false> workAreaChangeObservers_;
    struct unique_ptr<PrefChangeRegistrar, std::__1::default_delete<PrefChangeRegistrar>> profilePrefRegistrar_;
    struct PrefChangeRegistrar localPrefRegistrar_;
    struct scoped_refptr<QuitWithAppsController> quitWithAppsController_;
    struct scoped_nsobject<HandoffManager> handoffManager_;
    struct unique_ptr<HandoffActiveURLObserverBridge, std::__1::default_delete<HandoffActiveURLObserverBridge>> handoff_active_url_observer_bridge_;
    BOOL isPoweringOff_;
    struct unique_ptr<ScopedKeepAlive, std::__1::default_delete<ScopedKeepAlive>> keep_alive_;
}

@property(readonly, nonatomic) BOOL startupComplete; // @synthesize startupComplete=startupComplete_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handoffActiveURLChanged:(struct WebContents *)arg1;
- (struct GURL)handoffURLFromWebContents:(struct WebContents *)arg1;
- (void)updateHandoffManager:(struct WebContents *)arg1;
- (void)passURLToHandoffManager:(const struct GURL *)arg1;
- (BOOL)shouldUseHandoff;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)delayedScreenParametersUpdate;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)windowChangedToProfile:(struct Profile *)arg1;
- (void)initAppShimMenuController;
- (void)removeObserverForWorkAreaChange:(struct WorkAreaWatcherObserver *)arg1;
- (void)addObserverForWorkAreaChange:(struct WorkAreaWatcherObserver *)arg1;
- (struct HistoryMenuBridge *)historyMenuBridge;
- (struct BookmarkMenuBridge *)bookmarkMenuBridge;
- (const vector_4943d1d3 *)startupUrls;
- (id)applicationDockMenu:(id)arg1;
- (void)commandFromDock:(id)arg1;
- (void)toggleConfirmToQuit:(id)arg1;
- (void)orderFrontStandardAboutPanel:(id)arg1;
- (void)showPreferences:(id)arg1;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)getUrl:(id)arg1 withReply:(id)arg2;
- (void)openUrls:(const vector_4943d1d3 *)arg1;
- (_Bool)canOpenNewBrowser;
- (struct Profile *)safeLastProfileForNewWindows;
@property(readonly, nonatomic) struct Profile *lastProfile;
- (void)registerServicesMenuTypesTo:(id)arg1;
- (void)updateConfirmToQuitPrefMenuItem:(id)arg1;
- (void)initProfileMenu;
- (void)initMenuState;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)commandDispatchUsingKeyModifiers:(id)arg1;
- (void)executeApplication:(id)arg1;
- (void)commandDispatch:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)keyWindowIsModal;
- (void)profileWasRemoved:(const struct FilePath *)arg1;
- (BOOL)canRestoreTab;
- (BOOL)shouldQuitWithInProgressDownloads;
- (BOOL)userWillWaitForInProgressDownloads:(int)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)openUrlsReplacingNTP:(const vector_4943d1d3 *)arg1;
- (void)openStartupUrls;
- (void)setUpdateCheckInterval;
- (void)checkForAnyKeyWindows;
- (void)willPowerOff:(id)arg1;
- (void)activeSpaceDidChange:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)adjustCloseTabMenuItemKeyEquivalent:(BOOL)arg1;
- (void)adjustCloseWindowMenuItemKeyEquivalent:(BOOL)arg1;
- (void)didEndMainMessageLoop;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)stopTryingToTerminateApplication:(id)arg1;
- (BOOL)tryToTerminateApplication:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)unregisterEventHandlers;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

