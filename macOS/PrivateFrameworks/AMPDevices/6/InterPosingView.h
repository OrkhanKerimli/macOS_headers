//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSRemoteView;

@interface InterPosingView : NSView
{
    NSRemoteView *_remoteView;
}

@property(nonatomic) __weak NSRemoteView *remoteView; // @synthesize remoteView=_remoteView;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andRemoteView:(id)arg2;

@end

