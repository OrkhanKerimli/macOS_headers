//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Google Chrome Framework/NSCopying-Protocol.h>

@class NSAttributedString, NSImage;

__attribute__((visibility("hidden")))
@interface OmniboxPopupCellData : NSObject <NSCopying>
{
    struct ObjCPropertyReleaser propertyReleaser_OmniboxPopupCellData_;
    BOOL isContentsRTL_;
    _Bool isAnswer_;
    int matchType_;
    int maxLines_;
    NSAttributedString *contents_;
    NSAttributedString *description_;
    NSAttributedString *prefix_;
    NSImage *image_;
    NSImage *incognitoImage_;
    NSImage *answerImage_;
    double contentsOffset_;
}

@property(readonly, nonatomic) int maxLines; // @synthesize maxLines=maxLines_;
@property(readonly, nonatomic) int matchType; // @synthesize matchType=matchType_;
@property(readonly, nonatomic) _Bool isAnswer; // @synthesize isAnswer=isAnswer_;
@property(readonly, nonatomic) BOOL isContentsRTL; // @synthesize isContentsRTL=isContentsRTL_;
@property(readonly, nonatomic) double contentsOffset; // @synthesize contentsOffset=contentsOffset_;
@property(readonly, retain, nonatomic) NSImage *answerImage; // @synthesize answerImage=answerImage_;
@property(retain, nonatomic) NSImage *incognitoImage; // @synthesize incognitoImage=incognitoImage_;
@property(readonly, retain, nonatomic) NSImage *image; // @synthesize image=image_;
@property(readonly, retain, nonatomic) NSAttributedString *prefix; // @synthesize prefix=prefix_;
@property(readonly, retain, nonatomic) NSAttributedString *description; // @synthesize description=description_;
@property(readonly, retain, nonatomic) NSAttributedString *contents; // @synthesize contents=contents_;
- (void).cxx_destruct;
- (double)getMatchContentsWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatch:(const struct AutocompleteMatch *)arg1 contentsOffset:(double)arg2 image:(id)arg3 answerImage:(id)arg4 forDarkTheme:(BOOL)arg5;

@end

