//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class NSString, SGEvent;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification
{
    SGEvent *_suggestedEvent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *originAppName;
@property(readonly, nonatomic) SGEvent *suggestedEvent;
- (unsigned long long)supportedActions;
- (BOOL)isSuggestion;

@end

