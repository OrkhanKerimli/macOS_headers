//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXFeedbackCollector, PXFeedbackSender;

@interface PXFeedbackManager : NSObject
{
    unsigned long long _feedbackCollectionType;
    PXFeedbackCollector *_feedbackCollector;
    PXFeedbackSender *_feedbackSender;
}

+ (id)sharedManager;
@property(readonly, nonatomic) PXFeedbackSender *feedbackSender; // @synthesize feedbackSender=_feedbackSender;
@property(readonly, nonatomic) PXFeedbackCollector *feedbackCollector; // @synthesize feedbackCollector=_feedbackCollector;
- (void).cxx_destruct;
- (void)removeFeedbackEntry:(id)arg1;
- (void)provideUserFeedbackEntry:(id)arg1;
- (id)provideUserFeedbackFromDictionary:(id)arg1 forFeedbackType:(unsigned long long)arg2;
- (id)init;

@end

