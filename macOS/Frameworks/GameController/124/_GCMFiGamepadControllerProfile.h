//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCGamepad.h>

#import "_GCACHomeButtonDelegate.h"

@class NSString, _GCACHomeButton;

@interface _GCMFiGamepadControllerProfile : GCGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (id)menuButton;
- (void)toggleSuspendResume;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

