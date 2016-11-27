//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class TabController;
@protocol TabDraggingEventTarget;

@protocol TabControllerTarget
- (id <TabDraggingEventTarget>)dragController;
- (struct SimpleMenuModel *)contextMenuModelForController:(TabController *)arg1 menuDelegate:(struct Delegate *)arg2;
- (BOOL)isCommandEnabled:(int)arg1 forController:(TabController *)arg2;
- (void)commandDispatch:(int)arg1 forController:(TabController *)arg2;
- (void)closeTab:(id)arg1;
- (void)selectTab:(id)arg1;
@end

