//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage, NSLayoutConstraint, NSTextField, RolloverImageButton;
@protocol BookmarksSidebarTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface BookmarksSidebarTableCellView : NSTableCellView
{
    BOOL _usesFolderStyle;
    BOOL _usesFavoriteStyle;
    id <BookmarksSidebarTableCellViewDelegate> _delegate;
    NSImage *_bookmarkIconImage;
    NSLayoutConstraint *_textFieldRightMarginConstraintWhenEditing;
    NSTextField *_bookmarkTitleTextField;
    RolloverImageButton *_removeButton;
}

@property(nonatomic) __weak RolloverImageButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) __weak NSTextField *bookmarkTitleTextField; // @synthesize bookmarkTitleTextField=_bookmarkTitleTextField;
@property(retain, nonatomic) NSLayoutConstraint *textFieldRightMarginConstraintWhenEditing; // @synthesize textFieldRightMarginConstraintWhenEditing=_textFieldRightMarginConstraintWhenEditing;
@property(retain, nonatomic) NSImage *bookmarkIconImage; // @synthesize bookmarkIconImage=_bookmarkIconImage;
@property(nonatomic) BOOL usesFavoriteStyle; // @synthesize usesFavoriteStyle=_usesFavoriteStyle;
@property(nonatomic) BOOL usesFolderStyle; // @synthesize usesFolderStyle=_usesFolderStyle;
@property(nonatomic) __weak id <BookmarksSidebarTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)bookmarksSidebarTitleTextViewResignFirstResponder:(id)arg1;
- (void)bookmarksSidebarTitleTextViewBecameFirstResponder:(id)arg1;
- (void)didPressRemoveButton:(id)arg1;
- (void)_updateIconImage;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)awakeFromNib;

@end

