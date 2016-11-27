//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSView;

__attribute__((visibility("hidden")))
@interface BrowserDataImportPanelController : NSWindowController
{
    long long _source;
    NSButton *_importButton;
    NSView *_checkboxContainer;
    NSButton *_bookmarksCheckbox;
    NSButton *_historyCheckbox;
    NSButton *_passwordsCheckbox;
}

+ (void)_importDataTypes:(unsigned long long)arg1 fromSource:(long long)arg2;
+ (unsigned long long)_supportedPreconfiguredDataTypesForSource:(long long)arg1;
+ (unsigned long long)_supportedImportDataTypesForSource:(long long)arg1;
+ (void)runModalPanelForSource:(long long)arg1;
@property(retain, nonatomic) NSButton *passwordsCheckbox; // @synthesize passwordsCheckbox=_passwordsCheckbox;
@property(retain, nonatomic) NSButton *historyCheckbox; // @synthesize historyCheckbox=_historyCheckbox;
@property(retain, nonatomic) NSButton *bookmarksCheckbox; // @synthesize bookmarksCheckbox=_bookmarksCheckbox;
@property(nonatomic) __weak NSView *checkboxContainer; // @synthesize checkboxContainer=_checkboxContainer;
@property(nonatomic) __weak NSButton *importButton; // @synthesize importButton=_importButton;
- (void).cxx_destruct;
- (id)_windowTitle;
- (void)_updateWindowTitle;
- (BOOL)_checkboxIsAvailableAndChecked:(id)arg1;
- (BOOL)_isAnyCheckboxChecked;
- (void)_importFromBrowser;
- (unsigned long long)_selectedDataTypes;
- (void)_addConstraintsForCheckboxes:(id)arg1;
- (void)_updateCheckboxVisibility;
- (void)_updateImportButtonEnabled;
- (id)_defaultSelectedCheckboxes;
- (id)_visibleCheckboxes;
- (id)_allCheckboxes;
- (void)_performImportAfterModalStop;
- (id)_checkboxesForDataTypes:(unsigned long long)arg1;
- (unsigned long long)_defaultSelectedDataTypes;
- (unsigned long long)_supportedImportDataTypes;
- (void)importClicked:(id)arg1;
- (void)checkboxToggled:(id)arg1;
- (id)_initWithImportSource:(long long)arg1;
- (void)awakeFromNib;
- (void)close:(id)arg1;
- (id)windowNibName;

@end

