//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/MenuController.h>

@protocol NSMenuDelegate;

__attribute__((visibility("hidden")))
@interface DownloadShelfContextMenuController : MenuController
{
    struct scoped_nsobject<DownloadItemController> itemController_;
    id <NSMenuDelegate> menuDelegate_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (id)initWithItemController:(id)arg1 withDelegate:(id)arg2;

@end

