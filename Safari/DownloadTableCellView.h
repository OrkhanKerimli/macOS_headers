//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DownloadProgressEntry, NSButton, NSImage, NSProgressIndicator, NSTextField, NSTimer;

__attribute__((visibility("hidden")))
@interface DownloadTableCellView : NSTableCellView
{
    NSProgressIndicator *_progressIndicator;
    struct CGRect _iconFrame;
    struct CGRect _filenameFrame;
    struct CGRect _statusFrame;
    struct CGRect _revealFrame;
    struct CGRect _stopResumeFrame;
    DownloadProgressEntry *_entry;
    NSTimer *_progressTimer;
    int _buttonState;
    NSTextField *_filenameTextField;
    NSTextField *_statusTextField;
    NSButton *_stopResumeButton;
    NSButton *_revealButton;
    NSImage *_iconImage;
    long long _revealTrackingRectTag;
    long long _stopResumeTrackingRectTag;
}

+ (double)rowHeight;
- (void).cxx_destruct;
- (id)accessibilityRoleDescription;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateButtonStateAndStatusField;
- (void)_stopResume:(id)arg1;
- (void)_reveal:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)open:(id)arg1;
- (double)bestWidth;
- (id)entry;
- (void)_updateTextColor;
- (void)setBackgroundStyle:(long long)arg1;
- (void)progressDidChange;
- (void)currentFileDidChange;
- (void)stageDidChange;
- (void)_updateStatusField;
- (id)_statusText;
- (id)_stopResumeAccessibilityDescription;
- (id)_stopResumeHelpString;
- (id)_revealHelpString;
- (id)_openHelpString;
- (id)_statusAndTimeRemainingText;
- (id)_statusAndRateText;
- (id)displayableFileType;
- (id)_errorSummary;
- (id)_rateString;
- (id)_timeRemainingString;
- (void)_stopProgressAnimation;
- (void)_stopProgressAnimationTimer;
- (void)_startDiskCopyAnimation;
- (void)_startProgressAnimationIfNeeded;
- (void)_startProgressAnimation;
- (void)_updateProgressAnimation;
- (void)_updateIconAndFilename;
- (void)_updateButtons;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawIcon:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithEntry:(id)arg1;
- (void)_updateFrames;
- (BOOL)isFlipped;
- (void)_updateTrackingRects;
- (void)_removeTrackingRects;
- (id)_enclosingTableView;

@end

