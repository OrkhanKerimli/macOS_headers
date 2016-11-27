//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Google Chrome Framework/ElementAppleScript.h>

__attribute__((visibility("hidden")))
@interface WindowAppleScript : ElementAppleScript
{
    struct Browser *browser_;
}

- (void)handlesCloseScriptCommand:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)windowComparator:(id)arg1;
- (void)setOrderedIndex:(id)arg1;
- (id)orderedIndex;
- (void)removeFromTabsAtIndex:(int)arg1;
- (void)insertInTabs:(id)arg1 atIndex:(int)arg2;
- (void)insertInTabs:(id)arg1;
- (id)tabs;
- (id)activeTab;
- (void)setMode:(id)arg1;
- (id)mode;
- (void)setActiveTabIndex:(id)arg1;
- (id)activeTabIndex;
- (id)nativeHandle;
- (id)initWithBrowser:(struct Browser *)arg1;
- (id)initWithProfile:(struct Profile *)arg1;
- (id)init;

@end

