//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, NSString, TSWPShapeRep;

@interface TSWPShapeRepMagicMoveTextChunk : NSObject
{
    BOOL _hasListLabel;
    BOOL _isVisible;
    TSWPShapeRep *_rep;
    NSString *_stringValue;
    NSMutableIndexSet *_unhandledIndexSet;
    long long _stageIndex;
    double _opacityFromRenderer;
    struct _NSRange _range;
}

@property(nonatomic) double opacityFromRenderer; // @synthesize opacityFromRenderer=_opacityFromRenderer;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
@property(retain, nonatomic) NSMutableIndexSet *unhandledIndexSet; // @synthesize unhandledIndexSet=_unhandledIndexSet;
@property(nonatomic) BOOL hasListLabel; // @synthesize hasListLabel=_hasListLabel;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) TSWPShapeRep *rep; // @synthesize rep=_rep;
- (id)description;
- (void)dealloc;
- (id)init;

@end

