//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (SiriUIAdditions_UIKit)
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithData:(id)arg1;
- (id)_imageResizedToSize:(struct CGSize)arg1;
- (id)_imageWithAlpha:(double)arg1;
- (id)_flatImageWithColor:(id)arg1;
- (void)drawAtPoint:(struct CGPoint)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5;
- (void)drawAtPoint:(struct CGPoint)arg1;
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;
- (id)resizableImageWithCapInsets:(struct NSEdgeInsets)arg1;
- (struct CGImage *)CGImage;
@property(readonly) double scale;
@end

