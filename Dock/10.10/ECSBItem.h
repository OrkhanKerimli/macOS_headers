//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ECSBItemLayer, NSMutableArray;

@interface ECSBItem : NSObject
{
    ECSBItem *_parent;
    id _clientItem;
    ECSBItemLayer *_itemLayer;
}

@property(nonatomic) __weak ECSBItemLayer *itemLayer; // @synthesize itemLayer=_itemLayer;
@property(nonatomic) __weak id clientItem; // @synthesize clientItem=_clientItem;
@property(nonatomic) __weak ECSBItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)itemForClientItem:(id)arg1;
- (id)valueForKey:(id)arg1 withHandler:(id)arg2 andInfo:(id)arg3;
- (id)description;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;

@end

