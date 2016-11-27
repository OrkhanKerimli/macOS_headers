//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView, SiriUITranscriptItem;

__attribute__((visibility("hidden")))
@interface SVSTranscriptAnimation : NSObject
{
    double _creationTime;
    SiriUITranscriptItem *_transcriptItem;
    NSView *_replacedView;
    long long _updateType;
    long long _insertionAnimationType;
    long long _replacementAnimationType;
    long long _updateAnimationType;
}

+ (id)cancellationAnimationForTranscriptItem:(id)arg1;
+ (id)confirmationAnimationForTranscriptItem:(id)arg1;
+ (id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2 replacedView:(id)arg3;
+ (id)animationForTranscriptItem:(id)arg1 updateType:(long long)arg2;
@property(nonatomic) long long updateAnimationType; // @synthesize updateAnimationType=_updateAnimationType;
@property(readonly, nonatomic) long long replacementAnimationType; // @synthesize replacementAnimationType=_replacementAnimationType;
@property(readonly, nonatomic) long long insertionAnimationType; // @synthesize insertionAnimationType=_insertionAnimationType;
@property(readonly, nonatomic) long long updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSView *replacedView; // @synthesize replacedView=_replacedView;
@property(readonly, nonatomic) SiriUITranscriptItem *transcriptItem; // @synthesize transcriptItem=_transcriptItem;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
- (void).cxx_destruct;
- (id)_animationTypeString;
- (id)description;
- (double)animationDelay;
- (id)_snippetViewControllerIfExists;
- (id)_aceViewControllerIfExists;
- (id)initWithTranscriptItem:(id)arg1 replacedView:(id)arg2 updateType:(long long)arg3;

@end

