//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWindow.h"

@interface WVAppIconWindow : WAWindow
{
    WAWindow *_associatedWindow;
    unsigned int _appCID;
    struct CGRect _hitRect;
}

@property(readonly, nonatomic) unsigned int appCID; // @synthesize appCID=_appCID;
@property(retain, nonatomic) WAWindow *associatedWindow; // @synthesize associatedWindow=_associatedWindow;
- (void).cxx_destruct;
- (void)updateLocation:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect hitRect;
- (void)dealloc;
- (id)initWithCID:(unsigned int)arg1 showLabel:(BOOL)arg2 scaleFactor:(float)arg3 small:(_Bool)arg4;
- (id)initWithPSN:(struct CPSProcessSerNum)arg1 showLabel:(BOOL)arg2 scaleFactor:(float)arg3 small:(_Bool)arg4;

@end

