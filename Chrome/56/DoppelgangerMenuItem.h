//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMenuItem;

__attribute__((visibility("hidden")))
@interface DoppelgangerMenuItem : NSObject
{
    struct scoped_nsobject<NSMenuItem> menuItem_;
    struct scoped_nsobject<NSMenuItem> sourceItem_;
    struct scoped_nsobject<NSString> sourceKeyEquivalent_;
    int resourceId_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disable;
- (void)enableForApp:(const struct Extension *)arg1;
- (id)initWithMenuTag:(long long)arg1 sourceItemTag:(long long)arg2 targetItemTag:(long long)arg3 keyEquivalent:(id)arg4;
- (id)initWithController:(id)arg1 menuTag:(long long)arg2 itemTag:(long long)arg3 resourceId:(int)arg4 action:(SEL)arg5 keyEquivalent:(id)arg6;
@property(readonly, nonatomic) NSMenuItem *menuItem;

@end

