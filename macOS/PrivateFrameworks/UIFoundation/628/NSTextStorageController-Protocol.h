//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSTextStorage;

@protocol NSTextStorageController <NSObject>
@property(retain) NSTextStorage *textStorage;
- (void)endEditingTransaction;
- (void)beginEditingTransaction;
- (void)processEditingForTextStorage:(NSTextStorage *)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
@end

