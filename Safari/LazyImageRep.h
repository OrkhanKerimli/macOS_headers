//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

__attribute__((visibility("hidden")))
@interface LazyImageRep : NSImageRep
{
    CDUnknownBlockType _imageCreationBlock;
    struct CGImage *_image;
}

- (void).cxx_destruct;
- (BOOL)draw;
- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (struct CGImage *)CGImage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCGImageCreationBlock:(CDUnknownBlockType)arg1;

@end

