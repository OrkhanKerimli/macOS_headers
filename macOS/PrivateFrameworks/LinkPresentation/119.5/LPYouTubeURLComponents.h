//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LPYouTubeURLComponents : NSObject
{
    NSString *_videoID;
    double _startTime;
}

+ (id)formatAsYouTubeTime:(double)arg1;
+ (BOOL)parseYouTubeTimeFormat:(id)arg1 outTime:(double *)arg2;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;

@end

