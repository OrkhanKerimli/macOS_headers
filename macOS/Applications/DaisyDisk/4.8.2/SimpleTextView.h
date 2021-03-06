//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSString, TextStyles;

@interface SimpleTextView : NSView
{
    BOOL _hasMeasuredText;
    double _textHeight;
    BOOL _shouldSmoothFonts;
    NSString *_stringValue;
    TextStyles *_styles;
}

@property(nonatomic) BOOL shouldSmoothFonts; // @synthesize shouldSmoothFonts=_shouldSmoothFonts;
@property(retain, nonatomic) TextStyles *styles; // @synthesize styles=_styles;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)calculateSingleLineTextSize;
- (double)calculateTextHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

