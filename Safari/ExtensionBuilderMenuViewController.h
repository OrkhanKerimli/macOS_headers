//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/ExtensionBuilderIndexedItemViewController.h>

#import <Safari/ExtensionBuilderIndexedItemsControllerDelegate-Protocol.h>

@class ExtensionBuilderIndexedItemsController, NSArray, NSButton, NSDictionary, NSLayoutConstraint, NSStackView, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderMenuViewController : ExtensionBuilderIndexedItemViewController <ExtensionBuilderIndexedItemsControllerDelegate>
{
    ExtensionBuilderIndexedItemsController *_menuItemsController;
    NSButton *_deleteButton;
    NSTextField *_identifierTextField;
    NSView *_identifierErrorContainerView;
    NSLayoutConstraint *_identifierErrorContainerViewToMenuItemsVerticalConstraint;
    NSStackView *_menuItemsStackView;
}

+ (id)keyPathsForValuesAffectingMenuItems;
+ (id)keyPathsForValuesAffectingMenuIdentifier;
+ (id)keyPathsForValuesAffectingMenuName;
@property(nonatomic) __weak NSStackView *menuItemsStackView; // @synthesize menuItemsStackView=_menuItemsStackView;
@property(retain, nonatomic) NSLayoutConstraint *identifierErrorContainerViewToMenuItemsVerticalConstraint; // @synthesize identifierErrorContainerViewToMenuItemsVerticalConstraint=_identifierErrorContainerViewToMenuItemsVerticalConstraint;
@property(nonatomic) __weak NSView *identifierErrorContainerView; // @synthesize identifierErrorContainerView=_identifierErrorContainerView;
@property(nonatomic) __weak NSTextField *identifierTextField; // @synthesize identifierTextField=_identifierTextField;
@property(nonatomic) __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
- (void).cxx_destruct;
- (id)extensionBuilderIndexedItemsController:(id)arg1 subpathsWithPathExtension:(id)arg2;
- (id)pathExtensionForFilePopupForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)popoverIdentifiersForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)menuIdentifiersForExtensionBuilderIndexedItemsController:(id)arg1;
- (id)extensionBuilderIndexedItemsController:(id)arg1 itemForIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInExtensionBuilderIndexedItemsController:(id)arg1;
- (void)extensionBuilderIndexedItemsController:(id)arg1 removeItemAtIndex:(unsigned long long)arg2;
- (void)extensionBuilderIndexedItemsController:(id)arg1 setItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_representedObjectDidChange;
- (void)refreshFileMenus;
- (id)initialFirstResponder;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)nibName;
- (void)viewDidLoad;
@property(copy, nonatomic) NSArray *menuItems;
@property(copy, nonatomic) NSString *menuIdentifier;
@property(readonly, nonatomic) NSString *menuName;
@property(retain) NSDictionary *representedObject; // @dynamic representedObject;
- (void)_addMenuItem:(id)arg1;
- (void)_updateKeyViewLoop;
- (void)_updateVisibilityOfIdentifierError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

