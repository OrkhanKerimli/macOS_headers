//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PlugInAutoStartController : NSObject
{
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _savePlugInAutoStartOriginHashesToDiskWriter;
}

+ (void)removeAllOriginsAddedAfterDate:(id)arg1;
+ (void)removeAllOrigins;
+ (id)sharedPlugInAutoStartController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)initializeContext:(struct Context *)arg1;
- (void)removeItems:(id)arg1;
- (id)plugInAutoStartDictionary;
- (void)savePendingChangesBeforeTermination;
- (void)plugInAutoStartOriginHashesChanged;

@end

