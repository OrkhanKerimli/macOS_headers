//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRElement.h>

__attribute__((visibility("hidden")))
@interface SCRScrubber : SCRElement
{
}

- (id)lastChildForFocusing;
- (id)firstChildForFocusing;
- (id)childBeforeElement:(id)arg1;
- (id)childAfterElement:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1 visibleOnly:(BOOL)arg2;
- (unsigned long long)indexOfElement:(id)arg1 visibleOnly:(BOOL)arg2;
- (BOOL)scrollToShowDescendant:(id)arg1;
- (BOOL)allowBuildChildren;
- (id)prepareArrayToFocusInto;

@end

