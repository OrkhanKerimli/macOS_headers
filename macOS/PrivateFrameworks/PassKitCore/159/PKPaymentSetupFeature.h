//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>
{
    long long _type;
    long long _state;
    long long _supportedOptions;
}

+ (BOOL)supportsSecureCoding;
+ (id)paymentSetupFeatureWithProtobuf:(id)arg1;
@property(nonatomic) long long supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end

