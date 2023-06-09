//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTAdBaseModel, GDTAntiSpamClickData, GDTPlayer, GDTVideoPlayProgressReporter, NSArray, NSNumber, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GDTClickParam : NSObject
{
    _Bool _reported;
    _Bool _detailPageVideoMuted;
    _Bool _videoMuted;
    _Bool _forbiddenOpenAppstore;
    _Bool _forbiddenOpenWebview;
    NSString *_clickUrl;
    long long _clickActionType;
    NSString *_landpageUrl;
    long long _sdkAdType;
    GDTAdBaseModel *_adModel;
    long long _playerControlViewType;
    GDTPlayer *_player;
    GDTVideoPlayProgressReporter *_playProgressReporter;
    NSString *_clickID;
    GDTAntiSpamClickData *_antiSpamClickData;
    NSObject<OS_dispatch_queue> *_serviceSyncQueue;
    NSObject<OS_dispatch_group> *_serviceSyncGroup;
    long long _entranceType;
    long long _clickAreaType;
    NSString *_clickIdWithCountSuffix;
    NSString *_landingPageUrlWithCountSuffix;
    double _clickTime;
    NSString *_replacementData;
    NSArray *_specialClickChain;
    NSString *_wxSchemeDstlink;
    NSNumber *_wxSchemeError;
    long long _deepLinkFinishOptions;
}

+ (long long)clickActionTypeWithModel:(id)arg1;
+ (id)clickParam:(id)arg1 antiSpamFromH5:(id)arg2 baseView:(id)arg3 currentFrame:(struct CGRect)arg4 rootViewFrame:(struct CGRect)arg5 clickArea:(long long)arg6 adViewType:(long long)arg7 videoPlayedTime:(long long)arg8;
+ (id)clickParam:(id)arg1 antiSpamClickData:(id)arg2 playBeginTime:(long long)arg3;
@property(nonatomic) long long deepLinkFinishOptions; // @synthesize deepLinkFinishOptions=_deepLinkFinishOptions;
@property(retain, nonatomic) NSNumber *wxSchemeError; // @synthesize wxSchemeError=_wxSchemeError;
@property(copy, nonatomic) NSString *wxSchemeDstlink; // @synthesize wxSchemeDstlink=_wxSchemeDstlink;
@property(retain, nonatomic) NSArray *specialClickChain; // @synthesize specialClickChain=_specialClickChain;
@property(copy, nonatomic) NSString *replacementData; // @synthesize replacementData=_replacementData;
@property(nonatomic) double clickTime; // @synthesize clickTime=_clickTime;
@property(nonatomic) _Bool forbiddenOpenWebview; // @synthesize forbiddenOpenWebview=_forbiddenOpenWebview;
@property(nonatomic) _Bool forbiddenOpenAppstore; // @synthesize forbiddenOpenAppstore=_forbiddenOpenAppstore;
@property(copy, nonatomic) NSString *landingPageUrlWithCountSuffix; // @synthesize landingPageUrlWithCountSuffix=_landingPageUrlWithCountSuffix;
@property(copy, nonatomic) NSString *clickIdWithCountSuffix; // @synthesize clickIdWithCountSuffix=_clickIdWithCountSuffix;
@property(nonatomic) long long clickAreaType; // @synthesize clickAreaType=_clickAreaType;
@property(nonatomic) long long entranceType; // @synthesize entranceType=_entranceType;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *serviceSyncGroup; // @synthesize serviceSyncGroup=_serviceSyncGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceSyncQueue; // @synthesize serviceSyncQueue=_serviceSyncQueue;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(copy, nonatomic) NSString *clickID; // @synthesize clickID=_clickID;
@property(retain, nonatomic) GDTVideoPlayProgressReporter *playProgressReporter; // @synthesize playProgressReporter=_playProgressReporter;
@property(retain, nonatomic) GDTPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long playerControlViewType; // @synthesize playerControlViewType=_playerControlViewType;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) long long sdkAdType; // @synthesize sdkAdType=_sdkAdType;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(copy, nonatomic) NSString *landpageUrl; // @synthesize landpageUrl=_landpageUrl;
@property(nonatomic) long long clickActionType; // @synthesize clickActionType=_clickActionType;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
- (void).cxx_destruct;
- (long long)GDTfunctionl8Z4hP;
- (id)init;

@end

