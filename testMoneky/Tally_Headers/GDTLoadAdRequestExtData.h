//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface GDTLoadAdRequestExtData : NSObject
{
    _Bool _tmpallpt;
    _Bool _c_isjailbroken;
    _Bool _supportVideo;
    _Bool _supportContainer;
    _Bool _supportRewardPage;
    _Bool _needInlineFullScreen;
    _Bool _supportWXOpenSDK;
    _Bool _supportTemplate;
    _Bool _supportLandingPage;
    _Bool _supportSplashZoomOut;
    _Bool _supportSplashLongVideo;
    _Bool _supportH265Video;
    _Bool _supportWechatCanvas;
    _Bool _supportWebP;
    _Bool _supportIntersReward;
    _Bool _supportShake;
    _Bool _supportIntersFullImage;
    _Bool _supportFallbackNativeTemplate;
    _Bool _supportSplashReward;
    int _c_devicetype;
    int _c_ori;
    int _c_w;
    int _c_h;
    int _c_dpi;
    int _muidtype;
    int _deep_link_version;
    unsigned int _puin;
    unsigned int _atid;
    NSString *_c_device;
    NSString *_c_pkgname;
    NSString *_muid;
    long long _conn;
    long long _carrier;
    NSString *_c_osver;
    NSString *_c_os;
    NSString *_sdkver;
    long long _c_sdfree;
    NSString *_sdk_src;
    NSString *_m5;
    NSString *_m11;
    NSString *_nativeJsVersion;
    long long _minVideoDuration;
    long long _maxVideoDuration;
    NSString *_fixedVideoDuration;
    long long _sdkServerType;
    long long _sdkChannelType;
    NSString *_openSDKVersion;
    NSString *_cell_native;
    NSString *_supportComponentTypes;
    unsigned long long _videoPlayPolicy;
    unsigned long long _videoRenderType;
    long long _channel;
    long long _supportTemplateMix;
    NSArray *_tplIdArray;
    NSString *_hostver;
    NSString *_qqMiniGameProCatsStr;
    NSString *_qqMiniGameSourceFromStr;
    long long _mc_f;
    long long _mc_s;
    NSString *_thrmei;
    NSString *_sdkExt1;
    NSString *_sdkExt2;
    NSNumber *_placementSubType;
    NSDictionary *_mediationExtDict;
    long long _prldTag;
}

@property(nonatomic) _Bool supportSplashReward; // @synthesize supportSplashReward=_supportSplashReward;
@property(nonatomic) _Bool supportFallbackNativeTemplate; // @synthesize supportFallbackNativeTemplate=_supportFallbackNativeTemplate;
@property(nonatomic) _Bool supportIntersFullImage; // @synthesize supportIntersFullImage=_supportIntersFullImage;
@property(nonatomic) _Bool supportShake; // @synthesize supportShake=_supportShake;
@property(nonatomic) _Bool supportIntersReward; // @synthesize supportIntersReward=_supportIntersReward;
@property(nonatomic) long long prldTag; // @synthesize prldTag=_prldTag;
@property(nonatomic) _Bool supportWebP; // @synthesize supportWebP=_supportWebP;
@property(nonatomic) _Bool supportWechatCanvas; // @synthesize supportWechatCanvas=_supportWechatCanvas;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict=_mediationExtDict;
@property(nonatomic) _Bool supportH265Video; // @synthesize supportH265Video=_supportH265Video;
@property(retain, nonatomic) NSNumber *placementSubType; // @synthesize placementSubType=_placementSubType;
@property(copy, nonatomic) NSString *sdkExt2; // @synthesize sdkExt2=_sdkExt2;
@property(copy, nonatomic) NSString *sdkExt1; // @synthesize sdkExt1=_sdkExt1;
@property(copy, nonatomic) NSString *thrmei; // @synthesize thrmei=_thrmei;
@property(nonatomic) long long mc_s; // @synthesize mc_s=_mc_s;
@property(nonatomic) long long mc_f; // @synthesize mc_f=_mc_f;
@property(copy, nonatomic) NSString *qqMiniGameSourceFromStr; // @synthesize qqMiniGameSourceFromStr=_qqMiniGameSourceFromStr;
@property(copy, nonatomic) NSString *qqMiniGameProCatsStr; // @synthesize qqMiniGameProCatsStr=_qqMiniGameProCatsStr;
@property(nonatomic) _Bool supportSplashLongVideo; // @synthesize supportSplashLongVideo=_supportSplashLongVideo;
@property(nonatomic) _Bool supportSplashZoomOut; // @synthesize supportSplashZoomOut=_supportSplashZoomOut;
@property(nonatomic) _Bool supportLandingPage; // @synthesize supportLandingPage=_supportLandingPage;
@property(copy, nonatomic) NSString *hostver; // @synthesize hostver=_hostver;
@property(nonatomic) unsigned int atid; // @synthesize atid=_atid;
@property(nonatomic) unsigned int puin; // @synthesize puin=_puin;
@property(retain, nonatomic) NSArray *tplIdArray; // @synthesize tplIdArray=_tplIdArray;
@property(nonatomic) long long supportTemplateMix; // @synthesize supportTemplateMix=_supportTemplateMix;
@property(nonatomic) _Bool supportTemplate; // @synthesize supportTemplate=_supportTemplate;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType=_videoRenderType;
@property(nonatomic) unsigned long long videoPlayPolicy; // @synthesize videoPlayPolicy=_videoPlayPolicy;
@property(copy, nonatomic) NSString *supportComponentTypes; // @synthesize supportComponentTypes=_supportComponentTypes;
@property(copy, nonatomic) NSString *cell_native; // @synthesize cell_native=_cell_native;
@property(copy, nonatomic) NSString *openSDKVersion; // @synthesize openSDKVersion=_openSDKVersion;
@property(nonatomic) _Bool supportWXOpenSDK; // @synthesize supportWXOpenSDK=_supportWXOpenSDK;
@property(nonatomic) _Bool needInlineFullScreen; // @synthesize needInlineFullScreen=_needInlineFullScreen;
@property(nonatomic) long long sdkChannelType; // @synthesize sdkChannelType=_sdkChannelType;
@property(nonatomic) long long sdkServerType; // @synthesize sdkServerType=_sdkServerType;
@property(nonatomic) _Bool supportRewardPage; // @synthesize supportRewardPage=_supportRewardPage;
@property(nonatomic) _Bool supportContainer; // @synthesize supportContainer=_supportContainer;
@property(copy, nonatomic) NSString *fixedVideoDuration; // @synthesize fixedVideoDuration=_fixedVideoDuration;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(nonatomic) _Bool supportVideo; // @synthesize supportVideo=_supportVideo;
@property(copy, nonatomic) NSString *nativeJsVersion; // @synthesize nativeJsVersion=_nativeJsVersion;
@property(copy, nonatomic) NSString *m11; // @synthesize m11=_m11;
@property(copy, nonatomic) NSString *m5; // @synthesize m5=_m5;
@property(copy, nonatomic) NSString *sdk_src; // @synthesize sdk_src=_sdk_src;
@property(nonatomic) long long c_sdfree; // @synthesize c_sdfree=_c_sdfree;
@property(nonatomic) int deep_link_version; // @synthesize deep_link_version=_deep_link_version;
@property(nonatomic) _Bool c_isjailbroken; // @synthesize c_isjailbroken=_c_isjailbroken;
@property(nonatomic) _Bool tmpallpt; // @synthesize tmpallpt=_tmpallpt;
@property(copy, nonatomic) NSString *sdkver; // @synthesize sdkver=_sdkver;
@property(copy, nonatomic) NSString *c_os; // @synthesize c_os=_c_os;
@property(copy, nonatomic) NSString *c_osver; // @synthesize c_osver=_c_osver;
@property(nonatomic) long long carrier; // @synthesize carrier=_carrier;
@property(nonatomic) long long conn; // @synthesize conn=_conn;
@property(nonatomic) int muidtype; // @synthesize muidtype=_muidtype;
@property(copy, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property(copy, nonatomic) NSString *c_pkgname; // @synthesize c_pkgname=_c_pkgname;
@property(nonatomic) int c_dpi; // @synthesize c_dpi=_c_dpi;
@property(nonatomic) int c_h; // @synthesize c_h=_c_h;
@property(nonatomic) int c_w; // @synthesize c_w=_c_w;
@property(nonatomic) int c_ori; // @synthesize c_ori=_c_ori;
@property(nonatomic) int c_devicetype; // @synthesize c_devicetype=_c_devicetype;
@property(copy, nonatomic) NSString *c_device; // @synthesize c_device=_c_device;
- (void).cxx_destruct;
- (id)GDTfunctiony2opXa;
- (id)init;

@end

