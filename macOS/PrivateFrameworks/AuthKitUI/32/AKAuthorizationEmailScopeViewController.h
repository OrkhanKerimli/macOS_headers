//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class AKUserInformation, NSBox, NSLayoutConstraint, NSMutableDictionary, NSStackView, NSString, NSTextField;

@interface AKAuthorizationEmailScopeViewController : NSViewController
{
    BOOL _internalIsEmailExpanded;
    AKUserInformation *_userInformation;
    NSTextField *_scopeLabel;
    id <AKAuthorizationEmailScopeViewControllerDelegate> _delegate;
    NSString *_internalScopeString;
    NSStackView *_emailStackView;
    NSStackView *_expandableEmailStackView;
    NSBox *_expandableEmailSeparator;
    NSLayoutConstraint *_expandableEmailStackViewMaxHeightConstraint;
    NSMutableDictionary *_radioButtonForTag;
    long long _lastSelectedEmailIndex;
}

@property long long lastSelectedEmailIndex; // @synthesize lastSelectedEmailIndex=_lastSelectedEmailIndex;
@property(retain) NSMutableDictionary *radioButtonForTag; // @synthesize radioButtonForTag=_radioButtonForTag;
@property(retain) NSLayoutConstraint *expandableEmailStackViewMaxHeightConstraint; // @synthesize expandableEmailStackViewMaxHeightConstraint=_expandableEmailStackViewMaxHeightConstraint;
@property(retain) NSBox *expandableEmailSeparator; // @synthesize expandableEmailSeparator=_expandableEmailSeparator;
@property(retain) NSStackView *expandableEmailStackView; // @synthesize expandableEmailStackView=_expandableEmailStackView;
@property(retain) NSStackView *emailStackView; // @synthesize emailStackView=_emailStackView;
@property BOOL internalIsEmailExpanded; // @synthesize internalIsEmailExpanded=_internalIsEmailExpanded;
@property(copy) NSString *internalScopeString; // @synthesize internalScopeString=_internalScopeString;
@property __weak id <AKAuthorizationEmailScopeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSTextField *scopeLabel; // @synthesize scopeLabel=_scopeLabel;
@property(copy) AKUserInformation *userInformation; // @synthesize userInformation=_userInformation;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_delegate_emailScopeViewController:(id)arg1 didSelectEmail:(id)arg2 protected:(BOOL)arg3;
- (void)_delegate_hideMyEmail;
- (void)_delegate_shareMyEmail;
- (id)previouslySelectedEmail;
- (BOOL)previouslyWantedPrivateEmail;
@property(readonly) NSString *lastSelectedEmail;
- (void)_selectSingleEmailAtIndex:(long long)arg1;
- (void)_selectHideMyEmail;
- (void)_selectShareMyEmail;
- (void)radioButtonSelected:(id)arg1;
- (void)_addRadioButton:(id)arg1 tag:(long long)arg2 height:(double)arg3 toStackView:(id)arg4 toConstraints:(id)arg5;
- (void)_addSeparatorToStackView:(id)arg1 toConstraints:(id)arg2;
- (id)_newStackView;
- (id)_newTextField;
- (void)_transitionToEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2;
@property(getter=isEmailExpanded) BOOL emailExpanded;
@property(copy) NSString *scopeString;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserInformation:(id)arg1;

@end

