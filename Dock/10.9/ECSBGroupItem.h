//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECSBItem.h"

@class ECSBGroupItemLayer, NSMutableArray;

@interface ECSBGroupItem : ECSBItem
{
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
@property(nonatomic) ECSBGroupItemLayer *groupItemLayer; // @dynamic groupItemLayer;
- (id)init;

@end

