//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFConversation, NSArray;

@protocol AFConversationDelegate <NSObject>
- (void)conversation:(AFConversation *)arg1 presentationStateDidChangeForItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didRemoveItemsWithIdentifiers:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 parentItemIdentifiers:(NSArray *)arg4;
- (void)conversation:(AFConversation *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2;
- (void)conversation:(AFConversation *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
@end

