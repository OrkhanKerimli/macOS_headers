//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SSLCertificateViewerMac : NSObject
{
    struct scoped_nsobject<NSArray> certificates_;
    struct scoped_nsobject<SFCertificatePanel> panel_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)certificatePanel;
- (void)releaseSheetWindow;
- (void)closeCertificateSheet;
- (void)showCertificateSheet:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (id)initWithCertificate:(struct X509Certificate *)arg1 forWebContents:(struct WebContents *)arg2;

@end

