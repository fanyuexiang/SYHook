//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, WXMusicVipInfo;

@interface WXMusicVideoObject : NSObject
{
    unsigned int _duration;
    NSString *_musicUrl;
    NSString *_musicDataUrl;
    NSString *_singerName;
    NSString *_songLyric;
    NSData *_hdAlbumThumbData;
    NSString *_albumName;
    NSString *_musicGenre;
    unsigned long long _issueDate;
    NSString *_identification;
    NSString *_musicOperationUrl;
    WXMusicVipInfo *_musicVipInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) WXMusicVipInfo *musicVipInfo; // @synthesize musicVipInfo=_musicVipInfo;
@property(copy, nonatomic) NSString *musicOperationUrl; // @synthesize musicOperationUrl=_musicOperationUrl;
@property(copy, nonatomic) NSString *identification; // @synthesize identification=_identification;
@property(nonatomic) unsigned long long issueDate; // @synthesize issueDate=_issueDate;
@property(copy, nonatomic) NSString *musicGenre; // @synthesize musicGenre=_musicGenre;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSData *hdAlbumThumbData; // @synthesize hdAlbumThumbData=_hdAlbumThumbData;
@property(copy, nonatomic) NSString *songLyric; // @synthesize songLyric=_songLyric;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl=_musicDataUrl;
@property(copy, nonatomic) NSString *musicUrl; // @synthesize musicUrl=_musicUrl;

@end

