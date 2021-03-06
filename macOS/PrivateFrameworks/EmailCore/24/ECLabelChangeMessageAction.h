//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailCore/ECLocalMessageAction.h>

#import "ECLabelChangeMessageActionBuilder.h"

@class NSArray, NSSet, NSString, NSURL;

@interface ECLabelChangeMessageAction : ECLocalMessageAction <ECLabelChangeMessageActionBuilder>
{
    NSSet *_remoteIDs;
    NSArray *_messages;
    NSSet *_labelsToAdd;
    NSSet *_labelsToRemove;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *labelsToRemove; // @synthesize labelsToRemove=_labelsToRemove;
@property(copy, nonatomic) NSSet *labelsToAdd; // @synthesize labelsToAdd=_labelsToAdd;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSSet *remoteIDs; // @synthesize remoteIDs=_remoteIDs;
- (id)initWithBuilder:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSURL *mailboxURL;
@property(retain, nonatomic) NSString *messageActionPersistentID;
@property(readonly) Class superclass;
@property(nonatomic) BOOL userInitiated;

@end

