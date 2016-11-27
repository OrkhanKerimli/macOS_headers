//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, ECEvent, NSDictionary, NSString;

@protocol ECSBDelegate <NSObject>
- (id)addPage;
- (void)removePage:(id)arg1;
- (void)removeItem:(id)arg1 onPage:(id)arg2;
- (void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 onPage:(id)arg3;

@optional
- (void)zoomFactorChanged:(double)arg1;
- (void)selectionDidChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)selectionWillChangeFromItem:(id)arg1 toItem:(id)arg2;
- (void)searchTextCleared;
- (void)searchTextChanged:(NSString *)arg1;
- (void)didEndDeleting;
- (void)didBeginDeleting;
- (void)didEndEditing;
- (void)didBeginEditing;
- (void)didChangeToSearchPage;
- (void)willChangeToSearchPage;
- (void)didChangeToPage:(id)arg1;
- (void)willChangeToPage:(id)arg1;
- (CALayer *)newDesktopLayer;
- (NSDictionary *)alertPanelInfoForAction:(NSString *)arg1 ofItem:(id)arg2;
- (BOOL)shouldPresentAlertPanelForAction:(NSString *)arg1 ofItem:(id)arg2 withEvent:(ECEvent *)arg3;
- (CALayer *)rootLayerForAlertPanel;
- (void)cancelDragOfItem:(id)arg1 andLayer:(CALayer *)arg2;
- (void)dragOfItemCompleted;
- (void)didEndDragOfItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (BOOL)willEndDragOfItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (void)didDragItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (void)didBeginDragOfItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (void)endDragOfItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (void)beginDragOfItem:(id)arg1 withEvent:(ECEvent *)arg2 andLayer:(CALayer *)arg3;
- (CALayer *)rootLayerForDragging;
- (void)groupHiddenForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)groupShownForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (NSString *)nameForGroupUsingItem:(id)arg1 withItem:(id)arg2;
- (BOOL)canMakeGroupUsingItem:(id)arg1 withItem:(id)arg2;
- (void)performChanges:(void (^)(void))arg1;
- (id)makeGroupUsingItem:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3 onPage:(id)arg4;
- (void)removeItem:(id)arg1 ofGroup:(id)arg2 onPage:(id)arg3;
- (void)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 ofGroup:(id)arg3 onPage:(id)arg4;
@end

