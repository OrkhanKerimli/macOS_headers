//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <Google Chrome Framework/PasswordItemTwoColumnView-Protocol.h>

@class NSSecureTextField, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface PendingPasswordItemView : NSView <PasswordItemTwoColumnView>
{
    scoped_nsobject_0ef9b51e usernameField_;
    scoped_nsobject_0ef9b51e passwordField_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double secondColumnWidth;
@property(readonly, nonatomic) double firstColumnWidth;
- (void)layoutWithFirstColumn:(double)arg1 secondColumn:(double)arg2;
- (id)initWithForm:(const struct PasswordForm *)arg1;
@property(readonly) NSSecureTextField *passwordField;
@property(readonly) NSTextField *usernameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

