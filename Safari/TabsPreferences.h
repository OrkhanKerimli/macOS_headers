//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class NSArray, NSButton, NSPopUpButton, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface TabsPreferences : PreferencesModule
{
    NSArray *_finePrintConstraints;
    NSPopUpButton *_tabCreationPolicyPopUp;
    NSButton *_commandClickMakesTabsCheckbox;
    NSButton *_selectNewTabsCheckbox;
    NSButton *_command1Through9SwitchesTabsCheckbox;
    NSView *_finePrintContainerView;
    NSTextField *_commandClickLabel;
    NSTextField *_commandShiftClickLabel;
    NSTextField *_commandOptionClickLabel;
    NSTextField *_commandOptionShiftClickLabel;
    NSTextField *_openInNewActiveTabLabel;
    NSTextField *_openInNewTabLabel;
    NSTextField *_openInNewActiveWindowLabel;
    NSTextField *_openInNewWindowLabel;
}

@property(nonatomic) __weak NSTextField *openInNewWindowLabel; // @synthesize openInNewWindowLabel=_openInNewWindowLabel;
@property(nonatomic) __weak NSTextField *openInNewActiveWindowLabel; // @synthesize openInNewActiveWindowLabel=_openInNewActiveWindowLabel;
@property(nonatomic) __weak NSTextField *openInNewTabLabel; // @synthesize openInNewTabLabel=_openInNewTabLabel;
@property(nonatomic) __weak NSTextField *openInNewActiveTabLabel; // @synthesize openInNewActiveTabLabel=_openInNewActiveTabLabel;
@property(nonatomic) __weak NSTextField *commandOptionShiftClickLabel; // @synthesize commandOptionShiftClickLabel=_commandOptionShiftClickLabel;
@property(nonatomic) __weak NSTextField *commandOptionClickLabel; // @synthesize commandOptionClickLabel=_commandOptionClickLabel;
@property(nonatomic) __weak NSTextField *commandShiftClickLabel; // @synthesize commandShiftClickLabel=_commandShiftClickLabel;
@property(nonatomic) __weak NSTextField *commandClickLabel; // @synthesize commandClickLabel=_commandClickLabel;
@property(nonatomic) __weak NSView *finePrintContainerView; // @synthesize finePrintContainerView=_finePrintContainerView;
@property(nonatomic) __weak NSButton *command1Through9SwitchesTabsCheckbox; // @synthesize command1Through9SwitchesTabsCheckbox=_command1Through9SwitchesTabsCheckbox;
@property(nonatomic) __weak NSButton *selectNewTabsCheckbox; // @synthesize selectNewTabsCheckbox=_selectNewTabsCheckbox;
@property(nonatomic) __weak NSButton *commandClickMakesTabsCheckbox; // @synthesize commandClickMakesTabsCheckbox=_commandClickMakesTabsCheckbox;
@property(nonatomic) __weak NSPopUpButton *tabCreationPolicyPopUp; // @synthesize tabCreationPolicyPopUp=_tabCreationPolicyPopUp;
- (void).cxx_destruct;
- (id)helpAnchor;
- (void)initializeFromDefaults;
- (void)toggleCommand1Through9SwitchesTabs:(id)arg1;
- (void)toggleSelectNewTabs:(id)arg1;
- (void)toggleCommandClickMakesTabs:(id)arg1;
- (void)takeTabCreationPolicyFrom:(id)arg1;
- (void)updateViews;
- (void)_updateTabCreationPolicyPopUp;
- (void)_updatePopUp:(id)arg1 toMatchPreferenceWithKey:(id)arg2;
- (id)preferencesNibName;

@end

