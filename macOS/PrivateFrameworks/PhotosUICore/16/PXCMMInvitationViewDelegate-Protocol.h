//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, PXCMMInvitationView;

@protocol PXCMMInvitationViewDelegate <NSObject>
- (NSMenu *)contextMenuForInvitationView:(PXCMMInvitationView *)arg1;
- (void)presentDetailViewForInvitationView:(PXCMMInvitationView *)arg1 animated:(BOOL)arg2;

@optional
- (void)invitationViewSizeThatFitsDidChange:(PXCMMInvitationView *)arg1;
@end

