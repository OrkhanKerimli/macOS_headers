//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ManagedPlugInHostPolicy, NSArray, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ManagedPlugIn : NSObject
{
    NSMutableDictionary *_hostnamesToPolicies;
    struct HashMap<Safari::BrowserContentViewController *, WTF::RetainPtr<NSURL>, WTF::PtrHash<Safari::BrowserContentViewController *>, WTF::HashTraits<Safari::BrowserContentViewController *>, WTF::HashTraits<WTF::RetainPtr<NSURL>>> _browserContentViewControllerToPageURL;
    ManagedPlugInHostPolicy *_appleWildcardPolicyForAppleConnectPlugIn;
    BOOL _hasCheckedIsAppleConnectPlugIn;
    BOOL _isAppleConnectPlugIn;
    BOOL _runUnsandboxedOnFirstVisit;
    BOOL _updateWasAvailableWhenUnavailableDialogWasLastShown;
    BOOL _disallowPromptBeforeUseDialog;
    BOOL _firstVisitPolicyManagedByAdmin;
    BOOL _changingPolicyPerSitePreventedByAdmin;
    BOOL _blockedForSecurity;
    BOOL _blockedForCompatibility;
    BOOL _pluginUpdateAvailable;
    BOOL _sandboxed;
    BOOL _isOffByDefault;
    int _firstVisitPolicy;
    unsigned int _loadPolicy;
    NSString *_identifier;
    NSString *_name;
    NSString *_version;
    NSString *_path;
    NSString *_urlString;
    NSString *_mimeType;
    NSString *_pluginVersionWhenUnavailableDialogWasLastShown;
    NSDate *_lastUsedDate;
}

+ (BOOL)_plugInAtURL:(id)arg1 meetsCodeSigningRequirement:(id)arg2 andMatchesIdentifier:(id)arg3;
@property(readonly, nonatomic) BOOL isOffByDefault; // @synthesize isOffByDefault=_isOffByDefault;
@property(retain, nonatomic) NSDate *lastUsedDate; // @synthesize lastUsedDate=_lastUsedDate;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(nonatomic, getter=isPluginUpdateAvailable) BOOL pluginUpdateAvailable; // @synthesize pluginUpdateAvailable=_pluginUpdateAvailable;
@property(nonatomic, getter=isBlockedForCompatibility) BOOL blockedForCompatibility; // @synthesize blockedForCompatibility=_blockedForCompatibility;
@property(nonatomic, getter=isBlockedForSecurity) BOOL blockedForSecurity; // @synthesize blockedForSecurity=_blockedForSecurity;
@property(nonatomic, getter=isChangingPolicyPerSitePreventedByAdmin) BOOL changingPolicyPerSitePreventedByAdmin; // @synthesize changingPolicyPerSitePreventedByAdmin=_changingPolicyPerSitePreventedByAdmin;
@property(nonatomic, getter=isFirstVisitPolicyManagedByAdmin) BOOL firstVisitPolicyManagedByAdmin; // @synthesize firstVisitPolicyManagedByAdmin=_firstVisitPolicyManagedByAdmin;
@property(nonatomic) BOOL disallowPromptBeforeUseDialog; // @synthesize disallowPromptBeforeUseDialog=_disallowPromptBeforeUseDialog;
@property(nonatomic) BOOL updateWasAvailableWhenUnavailableDialogWasLastShown; // @synthesize updateWasAvailableWhenUnavailableDialogWasLastShown=_updateWasAvailableWhenUnavailableDialogWasLastShown;
@property(copy, nonatomic) NSString *pluginVersionWhenUnavailableDialogWasLastShown; // @synthesize pluginVersionWhenUnavailableDialogWasLastShown=_pluginVersionWhenUnavailableDialogWasLastShown;
@property(nonatomic) BOOL runUnsandboxedOnFirstVisit; // @synthesize runUnsandboxedOnFirstVisit=_runUnsandboxedOnFirstVisit;
@property(nonatomic) unsigned int loadPolicy; // @synthesize loadPolicy=_loadPolicy;
@property(nonatomic) int firstVisitPolicy; // @synthesize firstVisitPolicy=_firstVisitPolicy;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isAppleConnectPlugIn; // @synthesize isAppleConnectPlugIn=_isAppleConnectPlugIn;
- (id)appleWildcardPolicyForAppleConnectPlugIn;
- (void)createWildcardAppleSubdomainPoliciesForAppleConnectPlugInIfNecessary;
@property(readonly, nonatomic) NSArray *nonBlockHostPolicies;
- (BOOL)expirePoliciesIfNecessary;
- (BOOL)_isHostPolicyAllowAndExpired:(id)arg1;
- (BOOL)_isPolicyAllowAndExpired:(int)arg1 lastVisitedDate:(id)arg2;
- (BOOL)clearBlockPolicies;
- (BOOL)clearExpiredAllowPolicies;
- (BOOL)clearBlockPolicyForPageURL:(id)arg1;
- (BOOL)clearAllPolicies;
- (void)pruneSyntheticPoliciesIfNeeded;
- (BOOL)_clearHostPoliciesPassingTest:(CDUnknownBlockType)arg1;
- (id)activePolicyForBrowserContentViewController:(struct BrowserContentViewController *)arg1;
- (BOOL)browserContentViewControllerWillClose:(struct BrowserContentViewController *)arg1;
- (BOOL)browserContentViewController:(struct BrowserContentViewController *)arg1 didFinishUsingPlugInOnPageWithURL:(id)arg2;
- (BOOL)browserContentViewController:(struct BrowserContentViewController *)arg1 didBeginUsingPlugInOnPageWithURL:(id)arg2;
- (BOOL)_removeUnusedPolicyForHostnameIfNeeded:(id)arg1;
- (BOOL)_openPageIsUsingPlugInForHostname:(id)arg1;
@property(readonly, nonatomic) int defaultFirstVisitPolicy;
- (id)policyForPageURL:(id)arg1 wasCreated:(char *)arg2;
- (id)existingPolicyForPageURL:(id)arg1;
- (id)_hostnameForPageURL:(id)arg1;
- (void)clearPolicy:(id)arg1;
- (void)appendPoliciesInDictionaryRepresentation:(id)arg1 isManagedByAdmin:(BOOL)arg2;
- (void)addPolicy:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic, getter=isBlockedByXProtect) BOOL blockedByXProtect;
- (BOOL)isUnsafe;
- (id)blockedPluginHostPoliciesForDisplayIncludingSyntheticPoliciesForOpenURLs:(id)arg1;
@property(readonly, nonatomic) NSArray *blockedPluginHostPolicies;
- (id)initWithPlugInInfo:(id)arg1;
- (id)init;

@end

