//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class CredentialAndProtectionSpace, NSString, NSURLCredential, NSURLProtectionSpace;

@protocol CredentialAndProtectionSpaceCollectionDelegate <NSObject>
- (NSString *)passwordForSortingAndFilteringCredentialAndProtectionSpace:(CredentialAndProtectionSpace *)arg1;
- (NSString *)userForSortingAndFilteringCredential:(NSURLCredential *)arg1;
- (NSString *)addressStringForFilteringProtectionSpace:(NSURLProtectionSpace *)arg1;
- (long long)compareAddressFromCredentialAndProtectionSpace:(CredentialAndProtectionSpace *)arg1 toAddressFromCredentialAndProtectionSpace:(CredentialAndProtectionSpace *)arg2;

@optional
- (void)didSortOrFilter;
- (void)willSortOrFilter;
@end

