//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface DOCKRecentsCacheItem : NSObject
{
    NSDate *_modifiedDate;
    id _image;
}

@property(readonly, nonatomic) id image; // @synthesize image=_image;
@property(readonly, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 andModifiedDate:(id)arg2;

@end

