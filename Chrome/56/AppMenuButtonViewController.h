//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AppMenuController, BrowserActionsContainerView, MenuTrackedRootView, NSButton;

__attribute__((visibility("hidden")))
@interface AppMenuButtonViewController : NSViewController
{
    AppMenuController *controller_;
    MenuTrackedRootView *editItem_;
    NSButton *editCut_;
    NSButton *editCopy_;
    NSButton *editPaste_;
    MenuTrackedRootView *zoomItem_;
    NSButton *zoomPlus_;
    NSButton *zoomDisplay_;
    NSButton *zoomMinus_;
    NSButton *zoomFullScreen_;
    MenuTrackedRootView *toolbarActionsOverflowItem_;
    BrowserActionsContainerView *overflowActionsContainerView_;
    struct ObjCPropertyReleaser propertyReleaser_;
}

@property(retain, nonatomic) BrowserActionsContainerView *overflowActionsContainerView; // @synthesize overflowActionsContainerView=overflowActionsContainerView_;
@property(retain, nonatomic) MenuTrackedRootView *toolbarActionsOverflowItem; // @synthesize toolbarActionsOverflowItem=toolbarActionsOverflowItem_;
@property(retain, nonatomic) NSButton *zoomFullScreen; // @synthesize zoomFullScreen=zoomFullScreen_;
@property(retain, nonatomic) NSButton *zoomMinus; // @synthesize zoomMinus=zoomMinus_;
@property(retain, nonatomic) NSButton *zoomDisplay; // @synthesize zoomDisplay=zoomDisplay_;
@property(retain, nonatomic) NSButton *zoomPlus; // @synthesize zoomPlus=zoomPlus_;
@property(retain, nonatomic) MenuTrackedRootView *zoomItem; // @synthesize zoomItem=zoomItem_;
@property(retain, nonatomic) NSButton *editPaste; // @synthesize editPaste=editPaste_;
@property(retain, nonatomic) NSButton *editCopy; // @synthesize editCopy=editCopy_;
@property(retain, nonatomic) NSButton *editCut; // @synthesize editCut=editCut_;
@property(retain, nonatomic) MenuTrackedRootView *editItem; // @synthesize editItem=editItem_;
- (void).cxx_destruct;
- (void)containerSuperviewFrameChanged:(id)arg1;
- (void)dispatchAppMenuCommand:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

