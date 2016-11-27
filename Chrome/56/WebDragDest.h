//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDragDest : NSObject
{
    struct WebContentsImpl *webContents_;
    struct WebDragDestDelegate *delegate_;
    unsigned long long currentOperation_;
    struct RenderViewHost *currentRVH_;
    struct unique_ptr<content::DropData, std::__1::default_delete<content::DropData>> dropData_;
    _Bool canceled_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)populateDropData:(struct DropData *)arg1 fromPasteboard:(id)arg2;
- (BOOL)performDragOperation:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 view:(id)arg2;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1 view:(id)arg2;
- (BOOL)onlyAllowsNavigation;
- (struct CGPoint)flipWindowPointToScreen:(const struct CGPoint *)arg1 view:(id)arg2;
- (struct CGPoint)flipWindowPointToView:(const struct CGPoint *)arg1 view:(id)arg2;
- (void)setCurrentOperation:(unsigned long long)arg1;
- (void)setDragDelegate:(struct WebDragDestDelegate *)arg1;
- (struct DropData *)currentDropData;
- (id)initWithWebContentsImpl:(struct WebContentsImpl *)arg1;

@end

