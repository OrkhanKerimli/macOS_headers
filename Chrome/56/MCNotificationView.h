//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class MCNotificationController;

__attribute__((visibility("hidden")))
@interface MCNotificationView : NSBox
{
    MCNotificationController *controller_;
}

- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsIgnored;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (id)initWithController:(id)arg1 frame:(struct CGRect)arg2;

@end

