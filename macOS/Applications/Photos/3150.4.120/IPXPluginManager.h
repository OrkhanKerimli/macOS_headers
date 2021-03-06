//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface IPXPluginManager : NSObject
{
    id _matchingExtensionsContext;
    NSMutableDictionary *_extensions;
}

+ (id)iconForExtension:(id)arg1;
+ (id)localizedNameForExtension:(id)arg1;
+ (BOOL)extension:(id)arg1 supportsMediaType:(long long)arg2 subtype:(unsigned long long)arg3;
+ (BOOL)extension:(id)arg1 supportsMediaType:(long long)arg2;
+ (id)stringForMediaType:(long long)arg1 subtype:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *availableExtensions;
- (void)_addExtensions:(id)arg1;
- (void)dealloc;
- (id)init;

@end

