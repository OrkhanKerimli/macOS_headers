//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface JavaScriptTextInputPanel : NSWindowController
{
    NSTextField *_prompt;
    NSTextField *_textInput;
    NSButton *_suppressionButton;
}

@property(retain) NSButton *suppressionButton; // @synthesize suppressionButton=_suppressionButton;
- (void).cxx_destruct;
- (void)pressedOK:(id)arg1;
- (void)pressedCancel:(id)arg1;
- (id)text;
- (id)initWithPrompt:(id)arg1 text:(id)arg2 suppressionButtonText:(id)arg3;

@end

