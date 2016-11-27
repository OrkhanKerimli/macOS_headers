//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AXPlatformNodeCocoa : NSObject
{
    struct AXPlatformNodeBase *node_;
}

+ (id)nativeNotificationFromAXEvent:(int)arg1;
+ (id)nativeSubroleFromAXRole:(int)arg1;
+ (id)nativeRoleFromAXRole:(int)arg1;
- (id)AXVisibleCharacterRange;
- (id)AXSelectedTextRange;
- (id)AXSelectedText;
- (id)AXPlaceholderValue;
- (id)AXNumberOfCharacters;
- (id)AXInsertionPointLineNumber;
- (id)AXWindow;
- (id)AXTopLevelUIElement;
- (id)AXHelp;
- (id)AXFocused;
- (id)AXEnabled;
- (id)AXValue;
- (id)AXTitle;
- (id)AXSize;
- (id)AXRoleDescription;
- (id)AXSubrole;
- (id)AXRole;
- (id)AXPosition;
- (id)AXParent;
- (id)AXChildren;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityNotifiesWhenDestroyed;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)getStringAttribute:(int)arg1;
@property(readonly, nonatomic) struct CGRect boundsInScreen;
- (void)detach;
- (id)initWithNode:(struct AXPlatformNodeBase *)arg1;

@end

