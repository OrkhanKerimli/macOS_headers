//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "TSDMacAnnotationViewSizing-Protocol.h"
#import "TSDMacCommonHeaderDateButtonDelegate-Protocol.h"

@class NSButton, NSLayoutConstraint, NSString, NSTextField, NSTrackingArea, TSDCommentStorage, TSDMacCommonHeaderDateButton;
@protocol TSDAnnotationEditor, TSDChangeDetails;

@interface TSDMacCommonHeaderView : NSView <TSDMacCommonHeaderDateButtonDelegate, TSDMacAnnotationViewSizing>
{
    BOOL _sidebarMode;
    BOOL _prototypeMode;
    BOOL _editingComment;
    TSDCommentStorage *_commentStorage;
    id <TSDChangeDetails> _changeDetails;
    id <TSDAnnotationEditor> _annotationEditor;
    NSTextField *_commentAuthor;
    TSDMacCommonHeaderDateButton *_commentDate;
    NSButton *_editButton;
    NSTrackingArea *_authorTrackingArea;
    NSTrackingArea *_dateTrackingArea;
    NSTrackingArea *_buttonTrackingArea;
    NSLayoutConstraint *_dateWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *dateWidthConstraint; // @synthesize dateWidthConstraint=_dateWidthConstraint;
@property(retain, nonatomic) NSTrackingArea *buttonTrackingArea; // @synthesize buttonTrackingArea=_buttonTrackingArea;
@property(retain, nonatomic) NSTrackingArea *dateTrackingArea; // @synthesize dateTrackingArea=_dateTrackingArea;
@property(retain, nonatomic) NSTrackingArea *authorTrackingArea; // @synthesize authorTrackingArea=_authorTrackingArea;
@property(retain, nonatomic) NSButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) TSDMacCommonHeaderDateButton *commentDate; // @synthesize commentDate=_commentDate;
@property(retain, nonatomic) NSTextField *commentAuthor; // @synthesize commentAuthor=_commentAuthor;
@property(nonatomic) BOOL editingComment; // @synthesize editingComment=_editingComment;
@property(nonatomic) __weak id <TSDAnnotationEditor> annotationEditor; // @synthesize annotationEditor=_annotationEditor;
@property(retain, nonatomic) id <TSDChangeDetails> changeDetails; // @synthesize changeDetails=_changeDetails;
@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
@property(nonatomic) BOOL prototypeMode; // @synthesize prototypeMode=_prototypeMode;
@property(nonatomic) BOOL sidebarMode; // @synthesize sidebarMode=_sidebarMode;
- (void).cxx_destruct;
- (id)p_highlightButtonColor;
- (id)p_normalButtonColor;
- (void)p_setHighlightColorForDateButton;
- (void)p_setNormalColorForDateButton;
- (void)p_setColorForDateButton:(id)arg1;
- (void)p_tintButtonImage:(id)arg1 shouldTintTitle:(BOOL)arg2 overrideColor:(id)arg3;
- (void)p_editButtonClicked:(id)arg1;
- (void)p_setupConstraints;
- (void)p_setupViews;
- (void)p_updateAuthorAndDateFields;
- (void)updateDateFieldRelativeToNow;
- (void)p_setup;
- (BOOL)accessibilityPressedDateButton:(id)arg1;
- (void)p_updateEditButtonVisibilityForMouseInside;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)p_setupTrackingAreas;
- (void)updateTrackingAreas;
- (double)prototypeHeight;
- (void)setWidth:(double)arg1;
- (id)date;
- (id)author;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

