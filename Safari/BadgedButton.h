//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/ButtonWithMenu.h>

@class BadgeView, NSString;

__attribute__((visibility("hidden")))
@interface BadgedButton : ButtonWithMenu
{
    BadgeView *_badgeView;
    struct CGSize _badgeOutset;
}

@property(nonatomic) struct CGSize badgeOutset; // @synthesize badgeOutset=_badgeOutset;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *badgeText;
- (void)_updateMaxWidth;
- (void)_updateBadge;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

