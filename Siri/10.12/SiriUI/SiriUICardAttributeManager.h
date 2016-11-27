//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SiriUICardAttributeManager : NSObject
{
    NSMutableDictionary *_groupMap;
    NSMutableDictionary *_iconMap;
    NSDictionary *_ncIconMap;
    NSDictionary *_socialIconMap;
}

+ (id)sharedManager;
@property(readonly) NSDictionary *socialIconMap; // @synthesize socialIconMap=_socialIconMap;
@property(readonly) NSDictionary *ncIconMap; // @synthesize ncIconMap=_ncIconMap;
@property(readonly) NSMutableDictionary *iconMap; // @synthesize iconMap=_iconMap;
@property(readonly) NSMutableDictionary *groupMap; // @synthesize groupMap=_groupMap;
- (void).cxx_destruct;
- (BOOL)shouldAllowSnippetStashingForAceObject:(id)arg1;
- (id)localizedIconPathForIdentifier:(id)arg1;
- (id)bundlePathForSocialIconWithIdentifier:(id)arg1;
- (id)bundlePathForNCIconWithIdentifier:(id)arg1;
- (id)localizedNameForAceObject:(id)arg1;
- (id)init;

@end

