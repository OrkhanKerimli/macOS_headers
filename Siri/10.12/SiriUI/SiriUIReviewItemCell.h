//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell
{
    NSTextField *_commentLabel;
    NSTextField *_authorLabel;
    NSView *_ratingView;
    struct UIOffset _ratingOffset;
    long long _characterLimit;
    struct NSEdgeInsets _contentInsets;
}

+ (id)_authorDateFontAttribute;
+ (id)_authorFontAttribute;
+ (id)_commentLabelFont;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withReview:(id)arg2 characterLimit:(long long)arg3;
+ (id)_displayTextForComment:(id)arg1 characterLimit:(long long)arg2;
+ (long long)defaultCharacterLimit;
+ (struct NSEdgeInsets)_defaultEdgeInsets;
@property(nonatomic) struct NSEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long characterLimit; // @synthesize characterLimit=_characterLimit;
- (void).cxx_destruct;
- (void)layout;
- (id)_relativeStringFromDate:(id)arg1;
- (void)_setAuthor:(id)arg1 andDate:(id)arg2 timeZoneId:(id)arg3 hasRatingView:(BOOL)arg4;
- (void)_setRatingView:(id)arg1;
- (void)_setComment:(id)arg1;
- (void)configureWithReview:(id)arg1 ratingView:(id)arg2 offset:(struct UIOffset)arg3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

