//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXBorder, SXComponentMask, SXDataTableStyle, SXFill, SXShadow, UIColor;

@protocol SXComponentStyleProperties <NSObject>
@property(readonly, nonatomic) SXComponentMask *mask;
@property(readonly, nonatomic) unsigned long long traits;
@property(readonly, nonatomic) SXDataTableStyle *tableStyle;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) SXBorder *border;
@property(readonly, nonatomic) SXShadow *shadow;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SXFill *fill;
@end

