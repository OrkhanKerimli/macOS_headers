//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSNumber, NSString, NSURL;

@protocol AMPLibraryFrameworkProtocol
- (void)migratedPodcastDefaultFeedSettingsWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)migratedPodcastStationsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)migratedPodcastFeedsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeDownloadForTracks:(NSArray *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)artworkForMediaFile:(NSURL *)arg1 withReply:(void (^)(NSData *, NSError *))arg2;
- (void)readWriteURLForMediaItem:(NSNumber *)arg1 withReply:(void (^)(NSURL *, NSData *, NSError *))arg2;
- (void)genresForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)albumsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)artistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 includingCompilationArtists:(BOOL)arg3 withReply:(void (^)(NSArray *, NSError *))arg4;
- (void)tracksForPlaylist:(unsigned long long)arg1 withReply:(void (^)(NSArray *, NSError *))arg2;
- (void)playlistsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withItems:(BOOL)arg3 withReply:(void (^)(NSArray *, NSError *))arg4;
- (void)mediaItemsForDomains:(unsigned long long)arg1 withMediaKinds:(unsigned long long)arg2 withReply:(void (^)(NSArray *, NSError *))arg3;
- (void)closeDomainsForClientID:(unsigned int)arg1 withReply:(void (^)(NSError *))arg2;
- (void)registerClientName:(NSString *)arg1 withReply:(void (^)(NSError *, unsigned int))arg2;

@optional
- (void)appHasMigrated:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)openDevice:(NSString *)arg1 forClientID:(unsigned int)arg2 withReply:(void (^)(NSError *, NSDictionary *))arg3;
- (void)synchronousOpenLibrary:(unsigned int)arg1 withReply:(void (^)(NSError *, NSDictionary *))arg2;
@end

