//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/HoverImageButton.h>

__attribute__((visibility("hidden")))
@interface AvatarButton : HoverImageButton
{
    SEL rightAction_;
    BOOL isActive_;
}

@property(nonatomic) BOOL isActive; // @synthesize isActive=isActive_;
- (void)setRightAction:(SEL)arg1;
- (void)performRightClick;
- (void)rightMouseDown:(id)arg1;

@end

