//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNAutocompleteFetchRequestConfiguration : NSObject
{
    CDUnknownBlockType _configurationBlock;
}

+ (id)configurationWithBlock:(CDUnknownBlockType)arg1;
+ (id)configurationWithLiveUserDataForContacts:(BOOL)arg1 recents:(BOOL)arg2 servers:(BOOL)arg3 searchString:(id)arg4;
- (void).cxx_destruct;
- (void)configureQueryConfiguration:(id)arg1;
- (id)initWithConfigurationBlock:(CDUnknownBlockType)arg1;

@end

