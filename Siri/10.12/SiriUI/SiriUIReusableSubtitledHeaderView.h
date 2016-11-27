//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableHeaderView.h>

@class NSAttributedString, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface SiriUIReusableSubtitledHeaderView : SiriUIReusableHeaderView
{
    NSAttributedString *_attributedSubtitleText;
    NSTextField *_subtitleLabel;
}

+ (double)defaultHeight;
@property(retain, nonatomic) NSTextField *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(copy, nonatomic) NSAttributedString *attributedSubtitleText; // @synthesize attributedSubtitleText=_attributedSubtitleText;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (struct CGSize)intrinsicContentSize;
- (double)desiredHeightForWidth:(double)arg1;
@property(copy, nonatomic) NSString *subtitleText;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

