//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSavePanel;

__attribute__((visibility("hidden")))
@interface ExtensionDropdownHandler : NSObject
{
    NSSavePanel *dialog_;
    struct scoped_nsobject<NSArray> fileTypeLists_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)popupAction:(id)arg1;
- (id)initWithDialog:(id)arg1 fileTypeLists:(id)arg2;

@end

