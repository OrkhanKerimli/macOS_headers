//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Google Chrome Framework/DesktopMediaPickerObserver-Protocol.h>
#import <Google Chrome Framework/NSTableViewDataSource-Protocol.h>
#import <Google Chrome Framework/NSTableViewDelegate-Protocol.h>
#import <Google Chrome Framework/NSWindowDelegate-Protocol.h>

@class NSButton, NSString;

__attribute__((visibility("hidden")))
@interface DesktopMediaPickerController : NSWindowController <NSWindowDelegate, DesktopMediaPickerObserver, NSTableViewDataSource, NSTableViewDelegate>
{
    struct scoped_nsobject<IKImageBrowserView> screenBrowser_;
    struct scoped_nsobject<IKImageBrowserView> windowBrowser_;
    struct scoped_nsobject<NSTableView> tabBrowser_;
    struct scoped_nsobject<NSScrollView> imageBrowserScroll_;
    struct scoped_nsobject<NSSegmentedControl> sourceTypeControl_;
    NSButton *shareButton_;
    NSButton *cancelButton_;
    scoped_nsobject_6cadfeaf audioShareCheckbox_;
    unique_ptr_95c20f71 screenList_;
    unique_ptr_95c20f71 windowList_;
    unique_ptr_95c20f71 tabList_;
    Callback_f1d8a76d doneCallback_;
    scoped_nsobject_9420f295 screenItems_;
    scoped_nsobject_9420f295 windowItems_;
    scoped_nsobject_9420f295 tabItems_;
    struct unique_ptr<DesktopMediaPickerBridge, std::__1::default_delete<DesktopMediaPickerBridge>> bridge_;
    int lastImageUID_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)sourceThumbnailChangedForList:(struct DesktopMediaList *)arg1 atIndex:(int)arg2;
- (void)sourceNameChangedForList:(struct DesktopMediaList *)arg1 atIndex:(int)arg2;
- (void)sourceMovedForList:(struct DesktopMediaList *)arg1 from:(int)arg2 to:(int)arg3;
- (void)sourceRemovedForList:(struct DesktopMediaList *)arg1 atIndex:(int)arg2;
- (void)sourceAddedForList:(struct DesktopMediaList *)arg1 atIndex:(int)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)setTabBrowserIndex:(long long)arg1;
- (long long)selectedIndexForType:(int)arg1;
- (id)itemSetForType:(int)arg1;
- (id)browserViewForType:(int)arg1;
- (int)sourceTypeForBrowser:(id)arg1;
- (int)sourceTypeForList:(struct DesktopMediaList *)arg1;
- (int)selectedSourceType;
- (void)typeButtonPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)sharePressed:(id)arg1;
- (void)reportResult:(struct DesktopMediaID)arg1;
- (void)showWindow:(id)arg1;
- (id)createImageBrowserWithSize:(struct CGSize)arg1;
- (id)createButtonWithTitle:(id)arg1;
- (id)createTextFieldWithText:(id)arg1 frameWidth:(double)arg2;
- (void)createActionButtonsAtOrigin:(struct CGPoint)arg1;
- (void)createAudioCheckboxAtOrigin:(struct CGPoint)arg1;
- (void)createSourceViewsAtOrigin:(struct CGPoint)arg1;
- (void)createTypeButtonAtOrigin:(struct CGPoint)arg1;
- (void)initializeContentsWithAppName:(const basic_string_61b65554 *)arg1 targetName:(const basic_string_61b65554 *)arg2 requestAudio:(_Bool)arg3;
- (void)dealloc;
- (id)initWithScreenList:(unique_ptr_95c20f71)arg1 windowList:(unique_ptr_95c20f71)arg2 tabList:(unique_ptr_95c20f71)arg3 parent:(id)arg4 callback:(const Callback_f1d8a76d *)arg5 appName:(const basic_string_61b65554 *)arg6 targetName:(const basic_string_61b65554 *)arg7 requestAudio:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

