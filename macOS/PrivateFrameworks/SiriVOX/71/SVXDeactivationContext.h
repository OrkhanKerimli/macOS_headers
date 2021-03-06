//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, SVXButtonEvent, SVXClientInfo;

@interface SVXDeactivationContext : NSObject <NSCopying, NSSecureCoding>
{
    long long _source;
    unsigned long long _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXClientInfo *_clientInfo;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) SVXClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, copy, nonatomic) SVXButtonEvent *buttonEvent; // @synthesize buttonEvent=_buttonEvent;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithSource:(long long)arg1 timestamp:(unsigned long long)arg2 buttonEvent:(id)arg3 clientInfo:(id)arg4 userInfo:(id)arg5;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

