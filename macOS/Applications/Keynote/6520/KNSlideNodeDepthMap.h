//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface KNSlideNodeDepthMap : NSObject
{
    NSArray *_slideNodes;
    NSArray *_depthsOfSlideNodes;
}

@property(readonly, nonatomic) NSArray *depthsOfSlideNodes; // @synthesize depthsOfSlideNodes=_depthsOfSlideNodes;
@property(readonly, nonatomic) NSArray *slideNodes; // @synthesize slideNodes=_slideNodes;
- (void).cxx_destruct;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithSlideNodes:(id)arg1 depths:(id)arg2;

@end

