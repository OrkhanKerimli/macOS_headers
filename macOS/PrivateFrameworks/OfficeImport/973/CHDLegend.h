//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection, EDResources, NSArray, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject
{
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned long long mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    _Bool mIsVertical;
    _Bool mIsOverlay;
    NSArray *mLabelEffects;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isAutoSizeAndPosition;
- (void)setLabelEffects:(id)arg1;
- (id)labelEffects;
- (void)setIsOverlay:(_Bool)arg1;
- (_Bool)isOverlay;
- (void)setIsSingleColumnLegend:(_Bool)arg1;
- (_Bool)isSingleColumnLegend;
- (id)legendEntries;
- (void)setFont:(id)arg1;
- (id)font;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setLegendPosition:(int)arg1;
- (int)legendPosition;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned long long)arg1;
- (unsigned long long)fontIndex;

@end

