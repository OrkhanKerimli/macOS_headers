//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AceObject, NSString;

@protocol SiriUIViewController <NSObject>
@property(retain, nonatomic) AceObject *aceObject;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;

@optional
- (void)endEditingAndCorrect:(BOOL)arg1;
- (NSString *)navigationTitle;
- (double)desiredHeightForWidth:(double)arg1;
- (double)desiredHeight;
@end

