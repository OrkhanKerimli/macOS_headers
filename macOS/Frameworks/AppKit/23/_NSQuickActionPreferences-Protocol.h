//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, _NSQuickAction, _NSQuickActionPresentation;

@protocol _NSQuickActionPreferences <NSObject>
+ (id <_NSQuickActionPreferences>)preferencesWithPresentation:(_NSQuickActionPresentation *)arg1;
- (void)save;
- (void)setActive:(BOOL)arg1 forQuickAction:(_NSQuickAction *)arg2;
- (NSSet *)applyActive:(NSSet *)arg1;
@end

