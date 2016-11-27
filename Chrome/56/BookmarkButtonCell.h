//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/GradientButtonCell.h>

#import <Google Chrome Framework/NSMenuDelegate-Protocol.h>

@class BookmarkContextMenuCocoaController, NSString;

__attribute__((visibility("hidden")))
@interface BookmarkButtonCell : GradientButtonCell <NSMenuDelegate>
{
    BookmarkContextMenuCocoaController *menuController_;
    BOOL empty_;
    int startingChildIndex_;
    BOOL drawFolderArrow_;
    struct scoped_nsobject<NSImage> arrowImage_;
    struct scoped_nsobject<NSColor> textColor_;
}

+ (id)buttonCellWithText:(id)arg1 image:(id)arg2 menuController:(id)arg3;
+ (id)buttonCellForNode:(const struct BookmarkNode *)arg1 text:(id)arg2 image:(id)arg3 menuController:(id)arg4;
@property(nonatomic) BOOL drawFolderArrow; // @synthesize drawFolderArrow=drawFolderArrow_;
@property(nonatomic) int startingChildIndex; // @synthesize startingChildIndex=startingChildIndex_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)hoverBackgroundVerticalOffsetInControlView:(id)arg1;
- (int)verticalTextOffset;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (double)textStartXOffset;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (id)visibleTitle;
- (id)titleTextAttributes;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)applyTextColor;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)menu;
@property(nonatomic) const struct BookmarkNode *bookmarkNode;
- (void)setBookmarkCellText:(id)arg1 image:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setEmpty:(BOOL)arg1;
- (BOOL)empty;
- (void)configureBookmarkButtonCell;
- (BOOL)isOffTheSideButtonCell;
- (BOOL)isFolderButtonCell;
- (void)awakeFromNib;
- (id)initTextCell:(id)arg1;
- (id)initWithText:(id)arg1 image:(id)arg2 menuController:(id)arg3;
- (id)initForNode:(const struct BookmarkNode *)arg1 text:(id)arg2 image:(id)arg3 menuController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

