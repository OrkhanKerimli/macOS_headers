//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField, NSWindow;

__attribute__((visibility("hidden")))
@interface BookmarkNameFolderController : NSWindowController
{
    NSTextField *nameField_;
    NSButton *okButton_;
    NSWindow *parentWindow_;
    struct Profile *profile_;
    const struct BookmarkNode *node_;
    const struct BookmarkNode *parent_;
    int newIndex_;
    struct scoped_nsobject<NSString> initialName_;
    struct unique_ptr<BookmarkModelObserverForCocoa, std::__1::default_delete<BookmarkModelObserverForCocoa>> observer_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)okButton;
- (void)setFolderName:(id)arg1;
- (id)folderName;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)runAsModalSheet;
- (void)awakeFromNib;
- (id)initWithParentWindow:(id)arg1 profile:(struct Profile *)arg2 parent:(const struct BookmarkNode *)arg3 newIndex:(int)arg4;
- (id)initWithParentWindow:(id)arg1 profile:(struct Profile *)arg2 node:(const struct BookmarkNode *)arg3;
- (id)initWithParentWindow:(id)arg1 profile:(struct Profile *)arg2 node:(const struct BookmarkNode *)arg3 parent:(const struct BookmarkNode *)arg4 newIndex:(int)arg5;

@end

