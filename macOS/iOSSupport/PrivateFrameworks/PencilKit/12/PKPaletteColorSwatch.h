//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPaletteColorSwatchProperties-Protocol.h>

@class CAShapeLayer, NSString, PKSwatchColor;

@interface PKPaletteColorSwatch : UIView <PKPaletteColorSwatchProperties>
{
    BOOL _selected;
    BOOL _showsSelectionHighlight;
    PKSwatchColor *_swatchColor;
    long long _colorUserInterfaceStyle;
    UIView *_colorBackgroundView;
    CAShapeLayer *_selectionRingMaskLayer;
    UIView *_colorBulletView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *colorBulletView; // @synthesize colorBulletView=_colorBulletView;
@property(retain, nonatomic) CAShapeLayer *selectionRingMaskLayer; // @synthesize selectionRingMaskLayer=_selectionRingMaskLayer;
@property(retain, nonatomic) UIView *colorBackgroundView; // @synthesize colorBackgroundView=_colorBackgroundView;
@property(nonatomic) long long colorUserInterfaceStyle; // @synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle;
@property(nonatomic) BOOL showsSelectionHighlight; // @synthesize showsSelectionHighlight=_showsSelectionHighlight;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) PKSwatchColor *swatchColor; // @synthesize swatchColor=_swatchColor;
- (BOOL)wantsColorBulletVisible;
- (BOOL)wantsBackgroundViewColor;
- (id)newColorBackgroundView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateUI;
- (void)_updateColorBulletView;
- (void)_updateBackgroundView;
- (id)_uiColor;
- (long long)_uiColorUserInterfaceStyle;
- (void)_updateSelectionHighlight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

