//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WAWindow : NSObject
{
    unsigned int _wid;
    unsigned int _cid;
    struct __CFDictionary *_animations;
    struct CGRect _frame;
    struct CGRect _systemFrame;
    float _systemAlpha;
    int _systemWindowLevel;
    struct CGPoint _systemTranslation;
    float _brightness;
    struct CGAffineTransform _systemTransform;
    NSString *_displayName;
    unsigned char _type;
    unsigned int _attached:1;
    unsigned int _systemLevelChanged:1;
    unsigned int _filtered:1;
    unsigned int _releaseWindow:1;
    unsigned int _minimized:1;
    unsigned int _motionBlur:1;
    unsigned int _isMagicMirror:1;
    unsigned int _isHidden:1;
    unsigned int _isDesktopPicture:1;
}

+ (void *)_animationComplete:(void *)arg1 type:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)windowsObscuringDesktopOfSpace:(id)arg1;
+ (id)workspaceWindowsWithWindows:(id)arg1;
+ (id)workspaceWindowsWithOwner:(unsigned int)arg1 tags:(int [2])arg2 clearTags:(int [2])arg3 space:(id)arg4 options:(int)arg5;
+ (id)workspaceWindowsWithOwner:(unsigned int)arg1 tags:(int [2])arg2 clearTags:(int [2])arg3 spaces:(id)arg4 options:(int)arg5;
+ (void)addGenericAnimation:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)resetMenubarAlpha;
+ (void)setMenubarAlpha:(float)arg1 forSPIDS:(id)arg2;
+ (id)windowsForSwitcher:(unsigned int)arg1;
+ (id)windowsWithOwner:(unsigned int)arg1 tags:(int [2])arg2 clearTags:(int [2])arg3 allowMinimized:(BOOL)arg4 orderedIn:(BOOL)arg5;
+ (id)windowsWithOwner:(unsigned int)arg1 tags:(int [2])arg2 clearTags:(int [2])arg3 allowMinimized:(BOOL)arg4;
+ (id)windowWithCGSWindow:(unsigned int)arg1;
+ (id)windowWithCGSWindow:(unsigned int)arg1 allowAttached:(BOOL)arg2;
+ (id)existingCGSWindow:(unsigned int)arg1;
+ (id)cachedWindowsDescription;
@property(readonly, nonatomic) BOOL attached; // @synthesize attached=_attached;
@property(nonatomic) struct CGPoint systemTranslation; // @synthesize systemTranslation=_systemTranslation;
@property(nonatomic) BOOL filtered; // @synthesize filtered=_filtered;
@property(nonatomic) struct CGAffineTransform systemTransform; // @synthesize systemTransform=_systemTransform;
@property(nonatomic) float brightness; // @synthesize brightness=_brightness;
@property(nonatomic) float systemAlpha; // @synthesize systemAlpha=_systemAlpha;
@property(nonatomic) BOOL motionBlur; // @synthesize motionBlur=_motionBlur;
@property(nonatomic) struct CGRect systemFrame; // @synthesize systemFrame=_systemFrame;
@property(readonly, nonatomic) BOOL isDesktopPicture; // @synthesize isDesktopPicture=_isDesktopPicture;
@property(readonly, nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, nonatomic) BOOL isMagicMirror; // @synthesize isMagicMirror=_isMagicMirror;
@property(nonatomic) BOOL minimized; // @synthesize minimized=_minimized;
@property(nonatomic) BOOL releaseWindow; // @synthesize releaseWindow=_releaseWindow;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) unsigned int cid; // @synthesize cid=_cid;
@property(readonly, nonatomic) unsigned int wid; // @synthesize wid=_wid;
- (void).cxx_destruct;
- (void *)_animationComplete:(void *)arg1 type:(unsigned int)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (unsigned int)unsignedIntValue;
- (void)updateFrame;
- (void)updateFrame:(struct CGRect)arg1;
- (BOOL)isRepositionableInSpaces;
- (long long)compare:(id)arg1;
- (struct CGAffineTransform)transformForRect:(struct CGRect)arg1;
- (void)removeWarp;
- (void)suck:(struct CGRect)arg1 suck:(BOOL)arg2;
- (void)genie:(struct CGRect)arg1 direction:(unsigned char)arg2 genie:(BOOL)arg3;
- (void)order:(int)arg1 otherWindow:(unsigned int)arg2;
- (void)bringToFront;
- (void)clearSystemWindowLevel:(BOOL)arg1;
- (int)systemWindowLevel;
- (void)setSystemWindowLevel:(int)arg1;
- (void)setSystemClipRect:(struct CGRect)arg1 from:(struct CGRect)arg2;
- (void)setSystemTranslation:(struct CGPoint)arg1 from:(struct CGPoint)arg2;
- (void)setSystemAlpha:(float)arg1 from:(float)arg2;
- (void)setSystemFrame:(struct CGRect)arg1 from:(struct CGRect)arg2;
@property(readonly, nonatomic) NSArray *windows; // @dynamic windows;
@property(readonly, nonatomic) NSArray *descendents; // @dynamic descendents;
@property(readonly, nonatomic) struct CGRect realFrame; // @dynamic realFrame;
@property(readonly, nonatomic) struct CGRect realSystemFrame; // @dynamic realSystemFrame;
@property(readonly, nonatomic) struct CGRect currentSystemFrame; // @dynamic currentSystemFrame;
@property(readonly, nonatomic) struct CPSProcessSerNum psn; // @dynamic psn;
@property(readonly, nonatomic) BOOL isOnAllSpaces; // @dynamic isOnAllSpaces;
@property(readonly, nonatomic) BOOL isDocument; // @dynamic isDocument;
- (void)setSystemAlphaImmediate:(float)arg1;
@property(nonatomic) struct CGPoint position; // @dynamic position;
- (void)setSystemWindowLevelImmediate:(int)arg1 withOptions:(int)arg2;
- (void)setSystemFrameImmediate:(struct CGRect)arg1;
- (void)orderImmediate:(int)arg1 otherWindow:(unsigned int)arg2;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
- (id)description;
- (void)dealloc;
- (id)initWithLocalWindow:(unsigned int)arg1 withFrame:(struct CGRect)arg2;
- (id)initWithLocalWindow:(unsigned int)arg1;
- (id)initWithCGSWindow:(unsigned int)arg1 type:(unsigned char)arg2;

@end

