//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallKit/CXAction.h>

@class NSString, NSUUID;

@interface CXSendMMIOrUSSDCodeAction : CXAction
{
    NSString *_code;
    long long _ttyType;
    NSUUID *_senderIdentityUUID;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *senderIdentityUUID; // @synthesize senderIdentityUUID=_senderIdentityUUID;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;

@end

