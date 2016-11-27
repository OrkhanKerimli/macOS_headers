//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SiriUI/CAAnimationDelegate-Protocol.h>

@class NSMutableArray, NSString, SiriUINavigationBarView;
@protocol SiriUINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface SiriUINavigationController : NSViewController <CAAnimationDelegate>
{
    id <SiriUINavigationControllerDelegate> _delegate;
    NSMutableArray *_mutableViewControllers;
    NSViewController *_selectedVC;
    SiriUINavigationBarView *_navigationBarView;
    NSMutableArray *_vcsNeedingUpdateConstraints;
}

@property(retain) NSMutableArray *vcsNeedingUpdateConstraints; // @synthesize vcsNeedingUpdateConstraints=_vcsNeedingUpdateConstraints;
@property(retain) SiriUINavigationBarView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(retain) NSViewController *selectedVC; // @synthesize selectedVC=_selectedVC;
@property(retain) NSMutableArray *mutableViewControllers; // @synthesize mutableViewControllers=_mutableViewControllers;
@property __weak id <SiriUINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateNavigationBarViewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_sendDelegateDidLayoutViewController:(id)arg1;
- (void)_willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_replacePreviousVCWithNewVCInViewHierarchy:(id)arg1;
- (void)_popMutableViewControllersToSelectedVC;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_animateToSelectedVCFromVC:(id)arg1;
- (void)_moveToViewControllerAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_moveToTopViewController:(BOOL)arg1;
- (void)_removeChildVCFromSelf:(id)arg1;
- (void)_addChildVCToSelf:(id)arg1;
- (id)viewControllers;
- (void)setViewControllers:(id)arg1;
- (id)topViewController;
- (void)_popViewController;
- (double)navigationBarHeight;
- (void)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)updateViewConstraints;
- (void)_addNavigationBarConstriants;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

