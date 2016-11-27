//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFConversation, AFDialogPhase, AceObject, NSArray, NSIndexPath, NSString, NSURL, NSUUID, SAUIListItem;
@protocol SiriUIDomainObjectStore, SiriUIPresentation;

@protocol SiriUIPresentationDataSource <NSObject>
- (long long)siriPresentation:(id <SiriUIPresentation>)arg1 presentationStateForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)siriPresentation:(id <SiriUIPresentation>)arg1 aceCommandIdentifierForItemAtIndexPath:(NSIndexPath *)arg2;
- (AceObject *)siriPresentation:(id <SiriUIPresentation>)arg1 aceObjectForItemAtIndexPath:(NSIndexPath *)arg2;
- (AFDialogPhase *)siriPresentation:(id <SiriUIPresentation>)arg1 dialogPhaseForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)siriPresentation:(id <SiriUIPresentation>)arg1 numberOfChildrenForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)siriPresentation:(id <SiriUIPresentation>)arg1 typeOfItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)siriPresentation:(id <SiriUIPresentation>)arg1 indexPathForItemWithIdentifier:(NSUUID *)arg2;
- (NSUUID *)siriPresentation:(id <SiriUIPresentation>)arg1 identifierOfItemAtIndexPath:(NSIndexPath *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 addSelectionResponse:(SAUIListItem *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 removeItemsAtIndexPaths:(NSArray *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 insertAceViews:(NSArray *)arg2 withDialogPhase:(AFDialogPhase *)arg3 asItemsAtIndexPaths:(NSArray *)arg4;
- (BOOL)siriPresentation:(id <SiriUIPresentation>)arg1 itemAtIndexPathIsVirgin:(NSIndexPath *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 setDomainObject:(AceObject *)arg2 forIdentifier:(NSURL *)arg3;
- (AceObject *)siriPresentation:(id <SiriUIPresentation>)arg1 domainObjectForIdentifier:(NSURL *)arg2;
- (id <SiriUIDomainObjectStore>)domainObjectStoreForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (NSUUID *)startNewConversationForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 activateConversationWithIdentifier:(NSUUID *)arg2;
- (void)siriPresentation:(id <SiriUIPresentation>)arg1 deleteConversationWithIdentifier:(NSUUID *)arg2;
- (AFConversation *)siriPresentation:(id <SiriUIPresentation>)arg1 conversationWithIdentifier:(NSUUID *)arg2;
- (NSArray *)conversationIdentifiersForSiriPresentation:(id <SiriUIPresentation>)arg1;
- (long long)siriStateForSiriPresentation:(id <SiriUIPresentation>)arg1;
@end

