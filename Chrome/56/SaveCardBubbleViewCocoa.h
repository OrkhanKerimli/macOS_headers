//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/BaseBubbleController.h>

#import <Google Chrome Framework/NSTextViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SaveCardBubbleViewCocoa : BaseBubbleController <NSTextViewDelegate>
{
    struct SaveCardBubbleViewBridge *bridge_;
}

+ (scoped_nsobject_6cadfeaf)makeButton:(id)arg1;
+ (scoped_nsobject_1b22b22f)makeHyperlinkText:(id)arg1;
+ (scoped_nsobject_2ce0c752)makeWrappingLabel:(id)arg1 withFontSize:(double)arg2;
+ (scoped_nsobject_0ef9b51e)makeLabel:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onCancelButton:(id)arg1;
- (void)onSaveButton:(id)arg1;
- (void)loadView;
- (void)close;
- (void)showWindow:(id)arg1;
- (id)initWithBrowserWindowController:(id)arg1 bridge:(struct SaveCardBubbleViewBridge *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

