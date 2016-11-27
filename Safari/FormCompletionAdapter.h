//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FormCompletionDelegate-Protocol.h>
#import <Safari/FormCompletionPresentationContext-Protocol.h>

@class NSURL, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface FormCompletionAdapter : NSObject <FormCompletionPresentationContext, FormCompletionDelegate>
{
    NSWindow *_window;
    struct Frame _frame;
}

+ (id)adapterWithWindow:(id)arg1 frame:(const struct Frame *)arg2;
@property(readonly, nonatomic) struct Frame frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) NSWindow *window; // @synthesize window=_window;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)formCompletion:(struct FormCompletionController *)arg1 collectFormMetadataForSafeAutoFillConfirmationContactProperty:(id)arg2 contractIdentifier:(id)arg3 contactLabel:(id)arg4;
- (BOOL)formCompletion:(struct FormCompletionController *)arg1 fillFormWithSuggestedPassword:(id)arg2 formMetadata:(id)arg3;
- (void)formCompletion:(struct FormCompletionController *)arg1 fillFormWithPassword:(id)arg2 formMetadata:(id)arg3;
- (void)formCompletion:(struct FormCompletionController *)arg1 fillFormWithValues:(id)arg2;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchingPartialUsername:(id)arg3 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg4;
@property(readonly, nonatomic) BOOL shouldSavePasswordsToCloudKeychain;
@property(readonly, nonatomic) BOOL shouldSaveUsernamesAndPasswords;
@property(readonly, nonatomic) NSView *browserView;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithWindow:(id)arg1 frame:(const struct Frame *)arg2;

@end

