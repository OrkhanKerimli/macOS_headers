//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTSetCellValueService : NSObject
{
}

+ (id)formatAndValueCellDiffCommandWithTableInfo:(id)arg1 cell:(id)arg2 cellID:(struct TSUCellCoord)arg3;
+ (id)commandToSetDate:(id)arg1 tableInfo:(id)arg2 usingDateFormat:(id)arg3 overwritingExplicitDateFormat:(BOOL)arg4 inCellRegion:(id)arg5;
+ (id)commandForSettingRows:(const vector_4dc5f307 *)arg1 intoGroup:(const UUIDData_5fbc143e *)arg2 inTable:(id)arg3;
+ (id)commandSettingValueAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 stringValue:(id)arg3 textStyle:(id)arg4;
+ (id)commandSettingValueAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 storage:(id)arg3;
+ (id)p_commandSettingValueAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 dateCellValueBlock:(CDUnknownBlockType)arg3 defaultDiffingBlock:(CDUnknownBlockType)arg4;
+ (id)commandSettingValueAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 storage:(id)arg3 stringValue:(id)arg4 textStyle:(id)arg5 definedCellValueType:(BOOL)arg6 valueType:(int)arg7 preferredFormatType:(int)arg8 attemptFormulaParsing:(BOOL)arg9;
+ (id)p_cellDiffSettingValueAtCellID:(struct TSUCellCoord)arg1 tableInfo:(id)arg2 storage:(id)arg3 stringValue:(id)arg4 textStyle:(id)arg5 definedCellValueType:(BOOL)arg6 valueType:(int)arg7 preferredFormatType:(int)arg8 attemptFormulaParsing:(BOOL)arg9;

@end

