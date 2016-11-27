//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

#import <Google Chrome Framework/AutofillInputCell-Protocol.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface AutofillTextFieldCell : NSTextFieldCell <AutofillInputCell>
{
    BOOL invalid_;
    NSString *defaultValue_;
    struct scoped_nsobject<NSImage> icon_;
    struct CGSize decorationSize_;
}

@property(nonatomic) struct CGSize decorationSize; // @synthesize decorationSize=decorationSize_;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=defaultValue_;
@property(nonatomic) BOOL invalid; // @synthesize invalid=invalid_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (struct CGSize)cellSize;
- (struct CGRect)decorationFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)textFrameForFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *fieldValue;
@property(retain, nonatomic) NSImage *icon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

