//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKRecordID, NSData, NSString;

@interface CKUserIdentityLookupInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldReportMissingIdentity;
    NSString *_emailAddress;
    NSString *_phoneNumber;
    CKRecordID *_userRecordID;
    NSData *_encryptedPersonalInfo;
}

+ (id)lookupInfosWithPhoneNumbers:(id)arg1;
+ (id)lookupInfosWithRecordIDs:(id)arg1;
+ (id)lookupInfosWithEmails:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property(nonatomic) BOOL shouldReportMissingIdentity; // @synthesize shouldReportMissingIdentity=_shouldReportMissingIdentity;
@property(copy, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (void)_stripPersonalInfo;
- (id)lookupValue;
- (long long)lookupField;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;

@end

