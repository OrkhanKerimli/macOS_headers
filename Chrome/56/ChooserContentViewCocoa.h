//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface ChooserContentViewCocoa : NSView
{
    scoped_nsobject_0ef9b51e titleView_;
    scoped_nsobject_6cadfeaf adapterOffHelpButton_;
    scoped_nsobject_0ef9b51e adapterOffMessage_;
    struct scoped_nsobject<NSScrollView> scrollView_;
    struct scoped_nsobject<NSTableColumn> tableColumn_;
    struct scoped_nsobject<NSTableView> tableView_;
    struct scoped_nsobject<SpinnerView> spinner_;
    scoped_nsobject_6cadfeaf connectButton_;
    scoped_nsobject_6cadfeaf cancelButton_;
    scoped_nsobject_02675140 separator_;
    scoped_nsobject_6cadfeaf helpButton_;
    scoped_nsobject_0ef9b51e scanningMessage_;
    scoped_nsobject_0ef9b51e wordConnector_;
    scoped_nsobject_6cadfeaf rescanButton_;
    unique_ptr_5e95954d chooserController_;
    struct unique_ptr<ChooserContentViewController, std::__1::default_delete<ChooserContentViewController>> chooserContentViewController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tableRowViewPairedStatus:(long long)arg1;
- (id)tableRowViewText:(long long)arg1;
- (id)tableRowViewImage:(long long)arg1;
- (void)updateContentRowColor;
- (void)onHelpPressed:(id)arg1;
- (void)onRescan:(id)arg1;
- (void)onAdapterOffHelp:(id)arg1;
- (void)close;
- (void)cancel;
- (void)accept;
- (void)updateTableView;
- (id)optionAtIndex:(long long)arg1;
- (long long)numberOfOptions;
- (id)rescanButton;
- (id)wordConnector;
- (id)scanningMessage;
- (id)helpButton;
- (id)cancelButton;
- (id)connectButton;
- (id)spinner;
- (id)tableView;
- (id)adapterOffHelpButton;
- (scoped_nsobject_6cadfeaf)createHyperlinkButtonWithText:(id)arg1;
- (scoped_nsobject_02675140)createSeparator;
- (scoped_nsobject_6cadfeaf)createCancelButton;
- (scoped_nsobject_6cadfeaf)createConnectButton;
- (scoped_nsobject_6cadfeaf)createButtonWithTitle:(id)arg1;
- (double)tableRowViewHeight:(long long)arg1;
- (scoped_nsobject_7ff2efe9)createTableRowView:(long long)arg1;
- (scoped_nsobject_0ef9b51e)createChooserTitle:(id)arg1;
- (id)initWithChooserTitle:(id)arg1 chooserController:(unique_ptr_5e95954d)arg2;

@end

