//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/UnifiedFieldCompletionStyledTableCellView.h>

#import <Safari/ParsecTableCellView-Protocol.h>

@class NSImageView, NSString, NSTextField;
@protocol ParsecTableCellViewDelegate;

__attribute__((visibility("hidden")))
@interface ParsecSportsAttributionTableCellView : UnifiedFieldCompletionStyledTableCellView <ParsecTableCellView>
{
    NSString *_identifierOfDisplayedParsecResult;
    id <ParsecTableCellViewDelegate> _delegate;
    NSTextField *_label;
    NSImageView *_icon;
}

@property(nonatomic) __weak NSImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSTextField *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ParsecTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifierOfDisplayedParsecResult; // @synthesize identifierOfDisplayedParsecResult=_identifierOfDisplayedParsecResult;
- (void).cxx_destruct;
- (void)configureUsingCompletionListItem:(struct CompletionListItem *)arg1 session:(id)arg2;

@end

