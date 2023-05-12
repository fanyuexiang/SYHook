//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAVPlayerItemProvider-Protocol.h"

@class AVPlayerItem, NSString, NSURL;

@interface GADNetworkVideoPlayerItem : NSObject <GADAVPlayerItemProvider>
{
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
    _Bool gcacheUsed;
    _Bool gcacheHit;
    _Bool gcacheDownloaded;
    long long _totalBytes;
    NSString *_MIMEType;
    long long cachedBytes;
    long long loadedBytes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long loadedBytes; // @synthesize loadedBytes;
@property(readonly, nonatomic) long long cachedBytes; // @synthesize cachedBytes;
@property(readonly, nonatomic) _Bool gcacheDownloaded; // @synthesize gcacheDownloaded;
@property(readonly, nonatomic) _Bool gcacheHit; // @synthesize gcacheHit;
@property(readonly, nonatomic) _Bool gcacheUsed; // @synthesize gcacheUsed;
@property(readonly) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(readonly, nonatomic) long long totalBytes; // @synthesize totalBytes=_totalBytes;
- (id)videoURL;
- (id)playerItem;
- (id)initWithVideoURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

