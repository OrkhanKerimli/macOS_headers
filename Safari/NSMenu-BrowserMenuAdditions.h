//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSMenu.h>

@interface NSMenu (BrowserMenuAdditions)
@property(retain, nonatomic) id representedObject;
- (void)safari_transferAllItemsFromMenu:(id)arg1;
- (void)safari_removeUselessMenuItemSeparators;
- (id)safari_addItemWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)safari_itemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 tag:(int)arg3;
- (id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3;
- (id)safari_addItemWithTitle:(id)arg1 action:(SEL)arg2 target:(id)arg3 tag:(int)arg4;
- (id)safari_addAlwaysDisabledItemWithTitle:(id)arg1;
- (void)safari_popUpInRect:(struct CGRect)arg1 ofView:(id)arg2 didInsertInitialSeparator:(char *)arg3;
- (id)safari_initWithDictionaryRepresentation:(id)arg1;
@end

