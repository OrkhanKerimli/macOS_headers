//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSButton;

__attribute__((visibility("hidden")))
@interface FirstRunDialogController : NSWindowController
{
    BOOL statsEnabled_;
    BOOL makeDefaultBrowser_;
    NSArray *objectsToSize_;
    NSButton *setAsDefaultCheckbox_;
    NSButton *statsCheckbox_;
    BOOL beenSized_;
}

@property(nonatomic) BOOL makeDefaultBrowser; // @synthesize makeDefaultBrowser=makeDefaultBrowser_;
@property(nonatomic) BOOL statsEnabled; // @synthesize statsEnabled=statsEnabled_;
- (void)learnMore:(id)arg1;
- (void)ok:(id)arg1;
- (void)show;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

