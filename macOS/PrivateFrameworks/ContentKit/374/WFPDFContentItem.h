//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

#import "WFContentItemClass.h"

@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>
{
}

+ (void)initialize;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getPageTextsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPageTextsWithPDFKit:(CDUnknownBlockType)arg1;
- (void)generateFileRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;

@end

