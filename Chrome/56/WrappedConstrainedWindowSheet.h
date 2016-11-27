//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Google Chrome Framework/ConstrainedWindowSheet-Protocol.h>

@class NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface WrappedConstrainedWindowSheet : NSObject <ConstrainedWindowSheet>
{
    struct scoped_nsobject<NSWindow> customWindow_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSWindow *sheetWindow;
- (void)resizeWithNewSize:(struct CGSize)arg1;
- (void)updateSheetPosition;
- (void)makeSheetKeyAndOrderFront;
- (void)pulseSheet;
- (void)unhideSheet;
- (void)hideSheet;
- (void)closeSheetWithAnimation:(BOOL)arg1;
- (void)showSheetForWindow:(id)arg1;
- (id)initWithCustomWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

