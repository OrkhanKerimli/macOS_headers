//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BrowserWindowController, NSArray;

__attribute__((visibility("hidden")))
@interface PinnedTabsManager : NSObject
{
    BrowserWindowController *_browserWindowControllerForMainWindow;
    NSArray *_pinnedTabsStatesToRestore;
    long long _pinnedTabsChangesSuppressionCounter;
    BOOL _applicationDidFinishLaunching;
    BOOL _isMergingWindows;
    BOOL _shouldReleaseIconsAfterStatesAreRestored;
    NSArray *_pinnedTabs;
    NSArray *_privatePinnedTabs;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSArray *privatePinnedTabs; // @synthesize privatePinnedTabs=_privatePinnedTabs;
@property(readonly, nonatomic) NSArray *pinnedTabs; // @synthesize pinnedTabs=_pinnedTabs;
- (void).cxx_destruct;
- (void)_releaseTemplateIconsInTabs:(id)arg1;
- (void)_retainTemplateIconsInTabs:(id)arg1;
- (void)_attachAnyDetachedPinnedTabsToExistingWindowWithPrivateBrowsingEnabled:(BOOL)arg1;
- (id)_firstWindowWithPrivateBrowsingEnabled:(BOOL)arg1;
- (BOOL)_hasMoreThanOneWindowWithPrivateBrowsingEnabled:(BOOL)arg1;
- (void)_enumerateBrowserWindowControllersWithPrivateBrowsingEnabled:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_shouldRestoreLastSessionOnLaunch;
- (void)_syncCurrentPinnedTabsWithBrowserWindowController:(id)arg1;
- (BOOL)_isSuppressingPinnedTabsChanges;
- (void)_stopSuppressingPinnedTabsChanges;
- (void)_startSuppressingPinnedTabsChanges;
- (void)_restorePinnedTabsInWindow:(id)arg1 withStates:(id)arg2;
- (id)_tabsStatesFromBrowserTabViewItems:(id)arg1 resetToPinnedPage:(BOOL)arg2;
- (void)_closePlaceholdersAndDetachPinnedTabsInBrowserWindowController:(id)arg1;
- (void)updatePinnedTabSiteIconsNow;
- (id)findPinnedTabMatchingURL:(id)arg1 inBrowserWindowController:(id)arg2;
- (void)enumeratePlaceholderTabsForPinnedTab:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)pinnedTabContentDidMoveFromBrowserTabViewItem:(id)arg1 toBrowserTabViewItem:(id)arg2;
@property(readonly, nonatomic) NSArray *currentPinnedTabsStates;
- (void)applicationDidLaunchWithPinnedTabsToRestore:(id)arg1;
- (void)applicationWillTerminate;
- (void)tabsDidChangeInBrowserWindowController:(id)arg1;
- (void)windowsWereMerged;
- (void)windowsWillBeMerged;
- (void)attachAnyDetachedPinnedTabsToExistingWindow;
- (BOOL)browserWindowControllerCanContainPinnedTabs:(id)arg1;
- (void)browserWindowControllerDidLoad:(id)arg1;
- (void)browserWindowControllerDidBecomeMain:(id)arg1;
- (void)browserWindowControllerWillClose:(id)arg1;
- (void)windowShouldCloseWasInvokedForBrowserWindowController:(id)arg1;
- (BOOL)shouldTryClosingPinnedTabsWhenClosingBrowserWindowController:(id)arg1;

@end

