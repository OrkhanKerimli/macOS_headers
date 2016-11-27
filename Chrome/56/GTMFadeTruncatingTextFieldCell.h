//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

__attribute__((visibility("hidden")))
@interface GTMFadeTruncatingTextFieldCell : NSTextFieldCell
{
    unsigned long long desiredCharactersToTruncateFromHead_;
    int truncateMode_;
}

- (BOOL)isOpaque;
@property(nonatomic) unsigned long long desiredCharactersToTruncateFromHead;
@property(nonatomic) int truncateMode;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawTextGradientPart:(id)arg1 titleRect:(struct CGRect)arg2 backgroundRect:(struct CGRect)arg3 clipRect:(struct CGRect)arg4 mask:(id)arg5 fadeToRight:(BOOL)arg6;
- (id)initTextCell:(id)arg1;
- (void)awakeFromNib;

@end

