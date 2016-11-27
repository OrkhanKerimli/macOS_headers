//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Google Chrome Framework/ConstrainedWindowSheet-Protocol.h>

@class NSString, NSWindow, SFChooseIdentityPanel;

__attribute__((visibility("hidden")))
@interface SSLClientCertificateSelectorCocoa : NSObject <ConstrainedWindowSheet>
{
    struct ScopedTypeRef<__CFArray *, base::internal::ScopedCFTypeRefTraits<__CFArray *>> identities_;
    struct vector<scoped_refptr<net::X509Certificate>, std::__1::allocator<scoped_refptr<net::X509Certificate>>> certificates_;
    struct unique_ptr<SSLClientAuthObserverCocoaBridge, std::__1::default_delete<SSLClientAuthObserverCocoaBridge>> observer_;
    struct scoped_nsobject<SFChooseIdentityPanel> panel_;
    struct unique_ptr<ConstrainedWindowMac, std::__1::default_delete<ConstrainedWindowMac>> constrainedWindow_;
    struct scoped_nsobject<NSWindow> overlayWindow_;
    BOOL closePending_;
    struct CGRect oldSheetFrame_;
    BOOL oldResizesSubviews_;
    BOOL userResponded_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onConstrainedWindowClosed;
@property(readonly, nonatomic) NSWindow *sheetWindow;
- (void)resizeWithNewSize:(struct CGSize)arg1;
- (void)updateSheetPosition;
- (void)makeSheetKeyAndOrderFront;
- (void)pulseSheet;
- (void)unhideSheet;
- (void)hideSheet;
- (void)closeSheetWithAnimation:(BOOL)arg1;
- (void)showSheetForWindow:(id)arg1;
@property(readonly, nonatomic) SFChooseIdentityPanel *panel;
- (id)overlayWindow;
- (void)closeWebContentsModalDialog;
- (void)displayForWebContents:(struct WebContents *)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (id)initWithBrowserContext:(const struct BrowserContext *)arg1 certRequestInfo:(struct SSLCertRequestInfo *)arg2 delegate:(unique_ptr_a41c8968)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

