//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol AutofillInputDelegate;

@protocol AutofillInputField
@property(readonly, nonatomic) BOOL invalid;
@property(copy, nonatomic) NSString *validityMessage;
@property(readonly, nonatomic) BOOL isDefault;
@property(copy, nonatomic) NSString *defaultValue;
@property(copy, nonatomic) NSString *fieldValue;
@property(nonatomic) id <AutofillInputDelegate> inputDelegate;
@end

