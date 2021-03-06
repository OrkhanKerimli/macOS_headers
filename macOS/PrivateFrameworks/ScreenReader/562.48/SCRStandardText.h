//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRTextElement.h>

#import <ScreenReader/SCRTextProviding-Protocol.h>

@class NSString, SCRTextNavigator, SCRTextRange;

__attribute__((visibility("hidden")))
@interface SCRStandardText : SCRTextElement <SCRTextProviding>
{
    SCRTextNavigator *__navigator;
}

@property(retain, nonatomic) SCRTextNavigator *_navigator; // @synthesize _navigator=__navigator;
- (id)substringWithRange:(id)arg1;
@property(readonly, nonatomic) SCRTextRange *contentRange;
- (id)rotorIdentifiers;
- (id)rangeForStartMarker:(id)arg1 withOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (id)outputAttributedStringForData:(id)arg1;
@property(readonly, nonatomic) BOOL isComboBox;
- (BOOL)isPasswordSuggestionComboBox;
- (BOOL)wantsExpandedAttachmentsForItemName;
- (void)addBrailleItemDescriptionForFallbackToRequest:(id)arg1;
- (void)addItemDescriptionForFallbackToRequest:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (void)addItemStatusToRequest:(id)arg1;
- (id)styleRangeForPosition:(id)arg1;
- (void)echoDataInRange:(id)arg1 request:(id)arg2 showOnScreen:(BOOL)arg3 feedbackType:(long long)arg4 withScrolling:(BOOL)arg5 braille:(BOOL)arg6;
- (void)echoDataInRange:(id)arg1 request:(id)arg2 showOnScreen:(BOOL)arg3 feedbackType:(long long)arg4 withScrolling:(BOOL)arg5;
- (void)_handleOutputOfSpaceAndNewLineAttributedString:(id)arg1 variants:(id)arg2 request:(id)arg3;
- (BOOL)_isCharacterPlaceholder:(id)arg1;
- (id)paragraphRangeForPosition:(id)arg1;
- (id)paragraphEndMarkerAfterPosition:(id)arg1;
- (id)paragraphStartMarkerBeforePosition:(id)arg1;
- (id)sentenceRangeForPosition:(id)arg1;
- (id)sentenceEndMarkerAfterPosition:(id)arg1;
- (id)rangeForLine:(unsigned long long)arg1;
- (unsigned long long)lineForPosition:(id)arg1;
- (id)wordRangeForPosition:(id)arg1;
- (id)lineRangeForPosition:(id)arg1 lineIndex:(unsigned long long *)arg2;
- (id)lineRangeForPosition:(id)arg1;
- (id)wordRangeAfterPosition:(id)arg1;
- (id)wordRangeBeforePosition:(id)arg1;
- (id)characterMarkerAfterPosition:(id)arg1;
- (id)characterMarkerBeforePosition:(id)arg1;
- (id)previousCharacterFromIndex:(unsigned long long)arg1;
- (id)nextCharacterFromIndex:(unsigned long long)arg1;
- (BOOL)performBrailleRouterActionWithIndex:(unsigned long long)arg1 outputRequest:(id)arg2;
- (void)readCurrentParagraph:(id)arg1;
- (void)readCurrentSentence:(id)arg1;
- (BOOL)readPreviousParagraph:(id)arg1;
- (BOOL)readNextParagraph:(id)arg1;
- (BOOL)readPreviousSentence:(id)arg1;
- (BOOL)readNextSentence:(id)arg1;
- (BOOL)_readPreviousLineFromElement:(id)arg1 request:(id)arg2;
- (BOOL)readPreviousLine:(id)arg1;
- (BOOL)_currentMarkerIsInNextSibling:(id)arg1 startMarker:(id)arg2;
- (BOOL)readNextLine:(id)arg1;
- (struct CGRect)boundsForRange:(id)arg1;
- (BOOL)isControlElement;
- (BOOL)_annotationDictionary:(id)arg1 isAtRange:(struct _NSRange)arg2;
- (id)attributedStringForRange:(id)arg1;
- (id)stringForRange:(id)arg1;
- (id)rangeForInlineSession;
- (struct SCRPageInfo)pageInfoForSharedTextUIElement:(id)arg1;
- (struct SCRPageInfo)pageInfo;
- (id)markerForScreenPoint:(struct CGPoint)arg1;
- (id)startPositionForAppendedContent;
- (unsigned long long)numberOfCharacters;
- (id)sharedCharacterRange;
- (id)axVisibleCharacterRange;
- (id)visibleCharacterRange;
- (void)setSelectedTextRanges:(id)arg1;
- (id)selectedTextRanges;
- (void)setSelectedTextRange:(id)arg1;
- (id)selectedTextRange;
- (BOOL)isSelectionSettable;
- (id)lastPosition;
- (id)firstPosition;
- (BOOL)shouldMap;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;
- (id)crossedPageBoundaryWithDataString:(id)arg1 inRange:(id)arg2 insertIndex:(unsigned long long *)arg3;
- (id)_rangeOfParagraphForPosition:(id)arg1 inBlock:(int)arg2;
- (unsigned long long)_fetchFragmentSentenceLengthBeforeIndex:(unsigned long long)arg1;
- (struct _NSRange)_getNextSentenceRangeWithIndex:(unsigned long long)arg1;
- (struct _NSRange)_findPreviousSentenceBreak:(id)arg1 skipCurrent:(BOOL)arg2;
- (struct _NSRange)_findNextSentenceBreak:(id)arg1 skipCurrent:(BOOL)arg2;
- (unsigned long long)_lengthOfCharacterAtIndex:(unsigned long long)arg1;
- (struct _NSRange)_rangeOfGlyphAtIndex:(unsigned long long)arg1;
- (BOOL)_containsAllWordBreakCharactersInRange:(id)arg1;
- (BOOL)_isNonWordBreakPunctuation:(unsigned short)arg1;
- (BOOL)_isBetweenSentences:(unsigned long long)arg1;
- (BOOL)_isSentenceBoundaryAtOffset:(unsigned long long)arg1;
- (BOOL)_isWordBoundaryAtPosition:(id)arg1;
- (BOOL)_isSoftWrapForLineEndPosition:(id)arg1;
- (BOOL)_isLineEndPosition:(id)arg1 forLineRange:(id)arg2;
- (unsigned long long)_lineForInsertionPoint;
- (id)_nextWordRangeFromPosition:(id)arg1 searchingForward:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

