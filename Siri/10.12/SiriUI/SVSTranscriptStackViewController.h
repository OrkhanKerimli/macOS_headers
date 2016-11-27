//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SiriUI/SVSTranscriptViewControllerDataSource-Protocol.h>
#import <SiriUI/SVSTranscriptViewControllerDelegate-Protocol.h>
#import <SiriUI/SiriUINavigationControllerDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTimer, SVSTranscriptStackView, SiriUINavigationController;
@protocol SVSTranscriptStackViewControllerDataSource, SVSTranscriptStackViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SVSTranscriptStackViewController : NSViewController <SVSTranscriptViewControllerDataSource, SVSTranscriptViewControllerDelegate, SiriUINavigationControllerDelegate>
{
    id <SVSTranscriptStackViewControllerDataSource> _dataSource;
    id <SVSTranscriptStackViewControllerDelegate> _delegate;
    SiriUINavigationController *_navigationController;
    NSMutableArray *_navigationTransitionQueue;
    NSTimer *_navigationTransitionTimer;
}

+ (id)_createViewControllerWithItemIdentifier:(id)arg1;
@property(retain, nonatomic, getter=_navigationTransitionTimer, setter=_setNavigationTransitionTimer:) NSTimer *navigationTransitionTimer; // @synthesize navigationTransitionTimer=_navigationTransitionTimer;
@property(retain, nonatomic, getter=_navigationTransitionQueue, setter=_navigationTransitionQueue:) NSMutableArray *navigationTransitionQueue; // @synthesize navigationTransitionQueue=_navigationTransitionQueue;
@property(readonly, nonatomic, getter=_navigationController) SiriUINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SVSTranscriptStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSTranscriptStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didLayoutViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)transcriptViewController:(id)arg1 stashSnippetControllerCard:(id)arg2;
- (void)transcriptViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 metricsContext:(id)arg3 forInterval:(double)arg4;
- (void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;
- (void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
- (void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)transcriptViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)cancelSpeakingForTranscriptViewController:(id)arg1;
- (void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cancelRequestForTranscriptViewController:(id)arg1;
- (void)transcriptViewControllerWillBeginEditing:(id)arg1;
- (BOOL)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;
- (void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;
- (void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(long long)arg4 userSelectionResults:(id)arg5;
- (void)transcriptDidPunchout;
- (void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;
- (void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
- (void)transcriptViewControllerDidChangeContentHeight:(id)arg1;
- (void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;
- (void)transcriptViewControllerDidShowSuggestions:(id)arg1;
- (BOOL)transcriptViewControllerWillShowSuggestions:(id)arg1;
- (long long)initialDisplayTypeForTranscriptViewController:(id)arg1;
- (double)contentWidthForTranscriptViewController:(id)arg1;
- (id)domainObjectStoreForTranscriptViewController:(id)arg1;
- (id)conversationItemListForTranscriptViewController:(id)arg1;
- (long long)siriStateForTranscriptViewController:(id)arg1;
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateSortedParentItemIndexPathsForItemIndexPaths:(id)arg1 withOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_indexPathsForItemsAtIndexes:(id)arg1 inTranscriptViewController:(id)arg2;
- (id)_indexPathForItemAtIndex:(long long)arg1 inTranscriptViewController:(id)arg2;
- (id)_indexPathForViewControllerDisplayingItemAtIndexPath:(id)arg1;
- (id)_transcriptViewControllerDisplayingChildrenOfItemAtIndexPath:(id)arg1;
- (id)_transcriptViewControllerDisplayingChildrenOfItemWithIdentifier:(id)arg1;
- (id)_indexPathForParentOfItemsInTranscriptViewController:(id)arg1;
- (id)_indexPathForItemWithIdentifier:(id)arg1;
- (id)_identifierOfItemAtIndexPath:(id)arg1;
- (id)_topTranscriptViewController;
- (void)didChangeWindowHeight;
- (double)contentHeight;
- (void)siriDidDetectSpeechStartpoint;
- (void)siriStoppedFingerprintingMusic;
- (void)siriBeganFingerprintingMusic;
- (void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2;
- (void)_processTransitionQueue;
- (void)_queuePushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_queuePopToViewController:(id)arg1 animated:(BOOL)arg2;
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1;
- (void)presentationStateDidChangeForItemsAtIndexPaths:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1 atIndexPaths:(id)arg2 parentItemIdentifiers:(id)arg3;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)showTranscriptEnd;
@property(readonly, nonatomic) BOOL transcriptEndIsVisible;
@property(readonly, nonatomic) BOOL transcriptStartIsVisible;
- (id)_conversation;
- (void)siriRequestWillStart;
- (void)siriDidDeactivate;
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;
- (void)siriWillActivateFromSource:(long long)arg1;
@property(readonly, nonatomic) NSArray *requestContext;
- (void)endEditingAndCorrect:(BOOL)arg1;
- (void)showRootTranscript;
- (void)pinLastDisplayedChildOfItemWithIdentifier:(id)arg1;
- (void)pinItemWithIdentifier:(id)arg1;
- (id)identifierOfLastDisplayedChildOfItemWithIdentifier:(id)arg1;
- (id)_transcriptViewControllers;
- (id)_createViewControllerWithItemIdentifier:(id)arg1;
- (void)reloadData;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)svssvc_setConversation:(id)arg1;
- (id)svssvc_conversation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SVSTranscriptStackView *view; // @dynamic view;

@end

