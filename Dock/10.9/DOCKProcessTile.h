//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Tile.h"

#import "DOCKExtraDelegate.h"

@class DOCKRecentsController, NSString;

@interface DOCKProcessTile : Tile <DOCKExtraDelegate>
{
    struct CPSProcessSerNum _psn;
    id <DockExtra> _dockExtra;
    DOCKRecentsController *_recentsController;
    NSString *_bundleIdentifier;
}

- (id)bundleIdentifier;
@property(retain, nonatomic) id <DockExtra> dockExtra; // @synthesize dockExtra=_dockExtra;
- (void).cxx_destruct;
- (int)axCopyAttributeValue:(struct __CFString *)arg1 value:(const void **)arg2;
- (struct __CFArray *)axCopyAttributeNames;
- (void)dockExtraSetCustomIconImage:(id)arg1 withContext:(id)arg2;
- (void)dockExtraSetBadgeLabel:(id)arg1 withContext:(id)arg2;
- (void)scaleFactorChanged;
- (BOOL)dragDrop:(struct OpaqueCoreDrag *)arg1;
- (void)dragTracking:(struct OpaqueCoreDrag *)arg1;
- (void)dragLeave:(struct OpaqueCoreDrag *)arg1;
- (void)dragEnter:(struct OpaqueCoreDrag *)arg1;
- (void)render;
- (BOOL)supportsExpose;
- (BOOL)hasIndicator;
- (void)doCommand:(unsigned int)arg1;
- (struct OpaqueMenuRef *)createMenu:(CDUnknownFunctionPointerType)arg1 options:(int)arg2;
- (id)recentsController;
- (void)setPSN:(struct CPSProcessSerNum)arg1;
- (struct CPSProcessSerNum *)psn;
- (BOOL)isRemovable;
- (BOOL)doAction:(unsigned int)arg1 fromKeyboard:(BOOL)arg2;
- (void)dealloc;
- (id)initWithTile:(id)arg1 psn:(struct CPSProcessSerNum)arg2;
- (id)initWithPSN:(struct CPSProcessSerNum)arg1 fsref:(const struct FSRef *)arg2 alias:(struct AliasRecord **)arg3 name:(id)arg4 useProcessName:(BOOL)arg5;

@end

