//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWorkspace.h>

@interface NSWorkspace (CaminoDefaultBrowserAdditions)
+ (id)osVersionString;
- (id)displayNameForFile:(id)arg1;
- (id)identifierForBundle:(id)arg1;
- (id)urlOfApplicationWithIdentifier:(id)arg1;
- (void)setDefaultFeedViewerWithIdentifier:(id)arg1;
- (void)setDefaultBrowserWithIdentifier:(id)arg1;
- (id)defaultFeedViewerURL;
- (id)defaultBrowserURL;
- (id)defaultFeedViewerIdentifier;
- (id)defaultBrowserIdentifier;
- (id)installedFeedViewerIdentifiers;
- (id)installedBrowserIdentifiers;
@end

