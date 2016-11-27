//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/InfoBarController.h>

#import <Google Chrome Framework/NSMenuDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TranslateInfoBarControllerBase : InfoBarController <NSMenuDelegate>
{
    scoped_nsobject_0ef9b51e label1_;
    scoped_nsobject_0ef9b51e label2_;
    scoped_nsobject_0ef9b51e label3_;
    struct scoped_nsobject<NSPopUpButton> fromLanguagePopUp_;
    struct scoped_nsobject<NSPopUpButton> toLanguagePopUp_;
    struct scoped_nsobject<NSPopUpButton> optionsPopUp_;
    scoped_nsobject_6cadfeaf showOriginalButton_;
    scoped_nsobject_6cadfeaf translateMessageButton_;
    _Bool swappedLanguagePlaceholders_;
    double spaceBetweenControls_;
    struct unique_ptr<translate::OptionsMenuModel, std::__1::default_delete<translate::OptionsMenuModel>> optionsMenuModel_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuNeedsUpdate:(id)arg1;
- (void)dealloc;
- (void)optionsMenuChanged:(id)arg1;
- (void)languageMenuChanged:(id)arg1;
- (void)showOriginal:(id)arg1;
- (void)messageButtonPressed:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)adjustOptionsButtonSizeAndVisibilityForView:(id)arg1;
- (void)infobarWillClose;
- (void)infobarWillHide;
- (void)addAdditionalControls;
- (void)populateLanguageMenus;
- (BOOL)shouldShowOptionsPopUp;
- (void)rebuildOptionsMenu:(BOOL)arg1;
- (id)visibleControls;
- (void)layout;
- (void)showVisibleControls:(id)arg1;
- (void)clearAllControls;
- (void)removeOkCancelButtons;
- (void)updateState;
- (void)loadLabelText;
- (void)targetLanguageModified:(id)arg1 withLanguageIndex:(long long)arg2;
- (void)sourceLanguageModified:(id)arg1 withLanguageIndex:(long long)arg2;
- (void)constructViews;
- (struct TranslateInfoBarDelegate *)delegate;
- (void)didChangeFrame:(id)arg1;
- (_Bool)verifyLayout;
- (id)translateMessageButton;
- (id)optionsMenu;
- (id)allControls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

