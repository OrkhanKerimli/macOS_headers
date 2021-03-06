//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray;

@interface FBUndoableOperation : NSOperation
{
    NSArray *fArguments;
    unsigned long long fDoUndoRedo;
}

+ (void)enqueue:(id)arg1;
+ (void)unlock;
+ (void)lock;
+ (void)initialize;
- (void)main;
- (void)redoInternal;
- (void)undoInternal;
- (void)performInternal;
- (BOOL)canAbort;
- (BOOL)canUndoRedo;
- (void)redo;
- (void)undo;
- (void)perform;
- (id)title;
- (void)setArguments:(id)arg1;
- (id)arguments;
- (void)dealloc;
- (id)initWithArguments:(id)arg1;
- (void)_selectFamiliesAndFaces:(id)arg1;
- (void)_selectGroup:(id)arg1;
- (void)_postNotificationName:(id)arg1 withObject:(id)arg2;
- (void)_postNotificationName:(id)arg1;
- (BOOL)deactivateContainersIfPossible:(id)arg1;
- (void)removeFiles:(id)arg1 fromDomain:(id)arg2;
- (void)addFiles:(id)arg1 toDomain:(id)arg2;
- (void)removeFaces:(id)arg1 fromCollection:(id)arg2;
- (void)addFaces:(id)arg1 toCollection:(id)arg2;
- (void)complete;
- (void)begin;

@end

