//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Safari/BrowserDataImporter.h>

#import <Safari/BrowserCredentialImporterDelegate-Protocol.h>

@class BrowserDataImportPasswordRequestPanelController, NSString;
@protocol BrowserCredentialImporter;

__attribute__((visibility("hidden")))
@interface BrowserCredentialImporter : BrowserDataImporter <BrowserCredentialImporterDelegate>
{
    id <BrowserCredentialImporter> _importerProxy;
    BrowserDataImportPasswordRequestPanelController *_passwordRequestPanelController;
    BOOL _didRequestMasterPassword;
}

- (void).cxx_destruct;
- (unsigned long long)_credentialPersistence;
- (void)importerDidFailToImportCredentials;
- (void)importerDidFinishImportingCredentials;
- (void)importerDidImportCredential:(id)arg1;
- (void)importerRequiresMasterPassword;
- (void)importCredentialsUsingImporterProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

