//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@protocol ReaderInstallationTarget;

@protocol ReaderActivationDelegate <NSObject>
- (BOOL)readerControllerShouldActivateUponDeterminingAvailability:(const struct ReaderController *)arg1;
- (id <ReaderInstallationTarget>)installationTargetForReaderController:(const struct ReaderController *)arg1;

@optional
- (void)readerControllerDidDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillDeactivate:(const struct ReaderController *)arg1;
- (void)readerControllerDidActivate:(const struct ReaderController *)arg1;
- (void)readerControllerWillActivate:(const struct ReaderController *)arg1;
- (BOOL)readerControllerShouldAnimateActivationIfPossible:(const struct ReaderController *)arg1;
@end

