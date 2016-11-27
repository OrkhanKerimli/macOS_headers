//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class BookmarkBarFolderController, BookmarkButton, NSArray;
@protocol BookmarkButtonControllerProtocol, NSDraggingInfo;

@protocol BookmarkButtonControllerProtocol
- (id <BookmarkButtonControllerProtocol>)controllerForNode:(const struct BookmarkNode *)arg1;
- (void)removeButton:(long long)arg1 animate:(BOOL)arg2;
- (void)moveButtonFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)addURLs:(NSArray *)arg1 withTitles:(NSArray *)arg2 at:(struct CGPoint)arg3;
- (void)addButtonForNode:(const struct BookmarkNode *)arg1 atIndex:(long long)arg2;
- (void)openAll:(const struct BookmarkNode *)arg1 disposition:(int)arg2;
- (void)addNewFolderControllerWithParentButton:(BookmarkButton *)arg1;
- (BookmarkBarFolderController *)folderController;
- (void)childFolderWillClose:(id <BookmarkButtonControllerProtocol>)arg1;
- (void)childFolderWillShow:(id <BookmarkButtonControllerProtocol>)arg1;
- (struct Profile *)profile;
- (void)clearDropInsertionPos;
- (void)setDropInsertionPos:(double)arg1;
- (double)indicatorPosForDragToPoint:(struct CGPoint)arg1;
- (BOOL)shouldShowIndicatorShownForPoint:(struct CGPoint)arg1;
- (vector_600feb86)retrieveBookmarkNodeData;
- (BOOL)dragBookmarkData:(id <NSDraggingInfo>)arg1;
- (BOOL)dragButton:(BookmarkButton *)arg1 to:(struct CGPoint)arg2 copy:(BOOL)arg3;
- (BOOL)dragShouldLockBarVisibility;
- (void)draggingExited:(id <NSDraggingInfo>)arg1;
- (unsigned long long)draggingEntered:(id <NSDraggingInfo>)arg1;
- (BOOL)draggingAllowed:(id <NSDraggingInfo>)arg1;
- (struct BookmarkModel *)bookmarkModel;
- (void)closeBookmarkFolder:(id)arg1;
- (void)closeAllBookmarkFolders;
@end

