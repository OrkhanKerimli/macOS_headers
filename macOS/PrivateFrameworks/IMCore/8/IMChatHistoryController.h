//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject
{
    NSMutableDictionary *_runningQueries;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *_runningQueries; // @synthesize _runningQueries;
- (void).cxx_destruct;
- (void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3;
- (void)loadMessageWithGUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

