//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (SafariExtras)
+ (id)safari_dataWithASN1Item:(struct cssm_data)arg1;
- (BOOL)safari_timingSafeIsEqualToData:(id)arg1;
- (id)safari_SHA1Hash;
- (BOOL)safari_writeToNewURL:(id)arg1;
- (id)safari_certificateFromMultipartData;
- (int)_safari_indexOfCString:(const char *)arg1;
- (int)_safari_indexOfCString:(const char *)arg1 startOffset:(int)arg2;
- (int)_safari_indexOfByteString:(const char *)arg1 length:(int)arg2 startOffset:(int)arg3;
- (int)_safari_indexOfCharacterInCString:(const char *)arg1 startOffset:(int)arg2;
- (id)safari_dataByAppendingData:(id)arg1;
@end

