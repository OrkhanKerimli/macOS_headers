//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class BookmarkChooser, WebBookmark;

@protocol BookmarkChooserDelegate <NSObject>
- (void)bookmarkChooserSheetDidEnd:(BookmarkChooser *)arg1 returnCode:(long long)arg2;
- (BOOL)bookmarkChooser:(BookmarkChooser *)arg1 shouldEnableCollection:(WebBookmark *)arg2;
@end

