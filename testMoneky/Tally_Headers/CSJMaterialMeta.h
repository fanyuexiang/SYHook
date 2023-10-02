//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJActionDeepLinkModel-Protocol.h"
#import "CSJActionPhoneModel-Protocol.h"
#import "CSJActionWebModel-Protocol.h"
#import "CSJAd-Protocol.h"
#import "CSJSplashBottomViewInterface-Protocol.h"
#import "NSCoding-Protocol.h"

@class CSJAdDyLiteInfoModel, CSJAdGroupInfo, CSJAppInfo, CSJAudioInfo, CSJClickActionModel, CSJClickTriggerConfigModel, CSJCloudGameInfo, CSJDeepLink, CSJDirectLandingPageInfo, CSJEcomCouponModel, CSJImage, CSJInteractionMethodParams, CSJLandingPageConfModel, CSJLiveStreamInfo, CSJMiddleTplInfo, CSJPlayableCommonInfo, CSJPlayableInfo, CSJRenderModel, CSJRewardAgainModel, CSJRewardDrawConfig, CSJRewardLiveModel, CSJRewardedAdViewModel, CSJRewardedVideoDataContext, CSJSKANADImpressionObject, CSJSKANStoreProductModel, CSJSkipControlModel, CSJSplashCardModel, CSJSplashControlModel, CSJSplashZoomOutModel, CSJTplInfo, CSJUgenModel, CSJVideoInfo, CSJWCMiniappInfo, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface CSJMaterialMeta : NSObject <CSJSplashBottomViewInterface, CSJAd, CSJActionDeepLinkModel, CSJActionWebModel, CSJActionPhoneModel, NSCoding>
{
    _Bool _allowCustomVideoPlayer;
    _Bool _hasOpenMethodQuery;
    _Bool _is_html;
    _Bool _isPlayable;
    _Bool _showDislike;
    _Bool _video_local_prefetch;
    _Bool _isPlayableTestData;
    _Bool _userDidCustomVideoPlayer;
    _Bool _reward_info_show;
    _Bool _havePushTargetPage;
    _Bool _bu_middleTemplateComplete;
    _Bool _closeOnDislike;
    _Bool _hasSendReward;
    _Bool _blockAutoOpen;
    _Bool _playable_skoverlay;
    _Bool _validDislikeInputAccessoryView;
    _Bool _hasPrePlayable;
    _Bool _isRewardDraw;
    _Bool _reward_backup_timing;
    _Bool _pauseRewardFullLinkTiming;
    _Bool _isDidShowInteractive;
    _Bool _openFromClick;
    float _shakeValue;
    NSString *AdID;
    NSString *extInfo;
    NSString *mopubAuctionPrice;
    CSJDeepLink *deepLink;
    NSString *_targetURL;
    NSString *phone;
    NSString *ulink;
    CSJVideoInfo *_videoInfo;
    NSString *appLogBaseUrl;
    NSString *preCacheLogExt;
    long long _interactionType;
    NSArray *_imageAry;
    CSJImage *_icon;
    NSString *_AdTitle;
    NSString *_AdDescription;
    NSString *_source;
    NSString *_buttonText;
    long long _imageMode;
    long long _score;
    long long _commentNum;
    long long _appSize;
    long long _videoDuration;
    NSArray *_filterWords;
    NSDictionary *_mediaExt;
    NSString *_ADXName;
    CSJAdGroupInfo *_groupInfo;
    NSString *_dsp_html;
    NSArray *_show_urls;
    NSArray *_click_urls;
    long long _unionSpecial;
    long long _countDown;
    double _expireTimestamp;
    long long _saveTimestamp;
    CSJAppInfo *_appInfo;
    unsigned long long _video_encode_type;
    CSJVideoInfo *_h264VideoInfo;
    CSJVideoInfo *_h265VideoInfo;
    CDUnknownBlockType _finishBlock;
    long long _playbarShowtime;
    long long _render_delay_time;
    CSJTplInfo *_tplInfo;
    NSString *_creative_extra;
    CSJMiddleTplInfo *_middleTplInfo;
    CSJImage *_coverImage;
    NSDictionary *_clickAreaDic;
    long long _showAdLogo;
    long long _playBarStyle;
    double _startLoad_interval;
    double _startPlay_interval;
    double _startDownload_interval;
    long long _video_prefetch_size;
    long long _video_prefetch_error_code;
    NSString *_video_prefetch_error_msg;
    NSString *_video_prefetch_server_msg;
    long long _appstoreJumpType;
    long long _playableType;
    long long _feedVideoOpentype;
    NSString *_playableStyle;
    long long _videoAdaptation;
    NSDictionary *_session_params;
    NSDictionary *_materialDictionary;
    long long _cacheSort;
    long long _adSlotType;
    long long _renderType;
    long long _renderControl;
    NSString *_rewardName;
    long long _rewardAmount;
    long long _landingScrollPercentage;
    long long _if_both_open;
    long long _if_double_deeplink;
    unsigned long long _landingPageStyle;
    NSString *_bu_middleTemplateData;
    long long _cover_click_area;
    CSJPlayableInfo *_playableInfo;
    CSJCloudGameInfo *_cloudGameInfo;
    CSJDirectLandingPageInfo *_directLandingPageInfo;
    unsigned long long _orientation;
    double _fullScreenAspectRatio;
    double _fullScreenAspectMargin;
    double _fullScreenCornerRadius;
    NSDictionary *_extension;
    CSJRenderModel *_render;
    long long _page_render_type;
    CSJUgenModel *_ugen;
    CSJLandingPageConfModel *_landingPageConf;
    NSString *_adInfo;
    CSJRewardAgainModel *_rewardAgainModel;
    unsigned long long _rewardSendResult;
    NSMutableDictionary *_hasSendRewardDict;
    NSString *_originButtonText;
    long long _playableDurationTime;
    long long _rewardedEndCardCloseTime;
    long long _rewardedPlayableCloseTime;
    CSJClickActionModel *_clickActionModel;
    NSNumber *_endcard_skoverlay;
    unsigned long long _dynamic_join_type;
    long long _playableCloseTime;
    long long _watchPercent;
    long long _playableRewardType;
    long long _rewardBrowseType;
    long long _rewardBrowseWebviewDurationTime;
    long long _interactionMethod;
    long long _interactionMethod_ads;
    long long _interactionMethod_real;
    CSJInteractionMethodParams *_interactionMethodParams;
    long long _convertType;
    long long _skipResult;
    long long _downloadNum;
    CSJPlayableCommonInfo *_playableCommonInfo;
    CSJWCMiniappInfo *_wcMiniappInfo;
    CSJEcomCouponModel *_ecomCouponModel;
    CSJAudioInfo *_audioInfo;
    CSJAdDyLiteInfoModel *_dyLiteInfoModel;
    long long _if_send_click;
    CSJSKANStoreProductModel *_skan_product_item;
    CSJSKANADImpressionObject *_skan_Impression_Objct;
    CSJRewardLiveModel *_rewardLiveModel;
    long long _calculationMethod;
    long long _rotationAngle;
    CSJSkipControlModel *_skipControlModel;
    double _showPollTime;
    long long _cache_time;
    NSString *_price;
    NSString *_cache_ext;
    NSString *_material_key;
    long long _feedVideoFinishType;
    CSJRewardDrawConfig *_rewardDrawConfig;
    long long _reward_full_play_time;
    long long _reward_full_time_type;
    NSString *_dynamic_configs;
    long long _reward_backup_duration;
    NSArray *_rewardedRetainAlertConfigs;
    NSNumber *_rewardFullLinkTimeSecond;
    long long _rewardShowRenderType;
    CSJRewardedVideoDataContext *_rewardAdDataContext;
    CSJRewardedAdViewModel *_rewardedAdViewModel;
    CSJClickTriggerConfigModel *_clickTriggerConfig;
    long long _calculation_method_twist;
    long long _feed_reward_type;
    NSDictionary *_rewardAdvancedConfig;
    CSJLiveStreamInfo *_liveStreamInfo;
    long long _liveInteractionType;
    NSString *_liveRoomId;
    NSString *_ecomLiveParams;
    NSString *_ecSchema;
    long long _saasPlayTimeType;
}

- (void).cxx_destruct;
@property(nonatomic) long long saasPlayTimeType; // @synthesize saasPlayTimeType=_saasPlayTimeType;
@property(copy, nonatomic) NSString *ecSchema; // @synthesize ecSchema=_ecSchema;
@property(copy, nonatomic) NSString *ecomLiveParams; // @synthesize ecomLiveParams=_ecomLiveParams;
@property(copy, nonatomic) NSString *liveRoomId; // @synthesize liveRoomId=_liveRoomId;
@property(nonatomic) long long liveInteractionType; // @synthesize liveInteractionType=_liveInteractionType;
@property(retain, nonatomic) CSJLiveStreamInfo *liveStreamInfo; // @synthesize liveStreamInfo=_liveStreamInfo;
@property(copy, nonatomic) NSDictionary *rewardAdvancedConfig; // @synthesize rewardAdvancedConfig=_rewardAdvancedConfig;
@property(nonatomic) long long feed_reward_type; // @synthesize feed_reward_type=_feed_reward_type;
@property(nonatomic) long long calculation_method_twist; // @synthesize calculation_method_twist=_calculation_method_twist;
@property(nonatomic) _Bool openFromClick; // @synthesize openFromClick=_openFromClick;
@property(retain, nonatomic) CSJClickTriggerConfigModel *clickTriggerConfig; // @synthesize clickTriggerConfig=_clickTriggerConfig;
@property(retain, nonatomic) CSJRewardedAdViewModel *rewardedAdViewModel; // @synthesize rewardedAdViewModel=_rewardedAdViewModel;
@property(retain, nonatomic) CSJRewardedVideoDataContext *rewardAdDataContext; // @synthesize rewardAdDataContext=_rewardAdDataContext;
@property(nonatomic) _Bool isDidShowInteractive; // @synthesize isDidShowInteractive=_isDidShowInteractive;
@property(nonatomic) long long rewardShowRenderType; // @synthesize rewardShowRenderType=_rewardShowRenderType;
@property(nonatomic) _Bool pauseRewardFullLinkTiming; // @synthesize pauseRewardFullLinkTiming=_pauseRewardFullLinkTiming;
@property(retain, nonatomic) NSNumber *rewardFullLinkTimeSecond; // @synthesize rewardFullLinkTimeSecond=_rewardFullLinkTimeSecond;
@property(copy, nonatomic) NSArray *rewardedRetainAlertConfigs; // @synthesize rewardedRetainAlertConfigs=_rewardedRetainAlertConfigs;
@property(nonatomic) long long reward_backup_duration; // @synthesize reward_backup_duration=_reward_backup_duration;
@property(nonatomic) _Bool reward_backup_timing; // @synthesize reward_backup_timing=_reward_backup_timing;
@property(copy, nonatomic) NSString *dynamic_configs; // @synthesize dynamic_configs=_dynamic_configs;
@property(nonatomic) long long reward_full_time_type; // @synthesize reward_full_time_type=_reward_full_time_type;
@property(nonatomic) long long reward_full_play_time; // @synthesize reward_full_play_time=_reward_full_play_time;
@property(retain, nonatomic) CSJRewardDrawConfig *rewardDrawConfig; // @synthesize rewardDrawConfig=_rewardDrawConfig;
@property(nonatomic) _Bool isRewardDraw; // @synthesize isRewardDraw=_isRewardDraw;
@property(nonatomic) long long feedVideoFinishType; // @synthesize feedVideoFinishType=_feedVideoFinishType;
@property(copy, nonatomic) NSString *material_key; // @synthesize material_key=_material_key;
@property(copy, nonatomic) NSString *cache_ext; // @synthesize cache_ext=_cache_ext;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long cache_time; // @synthesize cache_time=_cache_time;
@property(nonatomic) double showPollTime; // @synthesize showPollTime=_showPollTime;
@property(retain, nonatomic) CSJSkipControlModel *skipControlModel; // @synthesize skipControlModel=_skipControlModel;
@property(nonatomic) long long rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property(nonatomic) long long calculationMethod; // @synthesize calculationMethod=_calculationMethod;
@property(nonatomic) float shakeValue; // @synthesize shakeValue=_shakeValue;
@property(retain, nonatomic) CSJRewardLiveModel *rewardLiveModel; // @synthesize rewardLiveModel=_rewardLiveModel;
@property(retain, nonatomic) CSJSKANADImpressionObject *skan_Impression_Objct; // @synthesize skan_Impression_Objct=_skan_Impression_Objct;
@property(retain, nonatomic) CSJSKANStoreProductModel *skan_product_item; // @synthesize skan_product_item=_skan_product_item;
@property(nonatomic) long long if_send_click; // @synthesize if_send_click=_if_send_click;
@property(retain, nonatomic) CSJAdDyLiteInfoModel *dyLiteInfoModel; // @synthesize dyLiteInfoModel=_dyLiteInfoModel;
@property(retain, nonatomic) CSJAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(retain, nonatomic) CSJEcomCouponModel *ecomCouponModel; // @synthesize ecomCouponModel=_ecomCouponModel;
@property(retain, nonatomic) CSJWCMiniappInfo *wcMiniappInfo; // @synthesize wcMiniappInfo=_wcMiniappInfo;
@property(retain, nonatomic) CSJPlayableCommonInfo *playableCommonInfo; // @synthesize playableCommonInfo=_playableCommonInfo;
@property(nonatomic) long long downloadNum; // @synthesize downloadNum=_downloadNum;
@property(nonatomic) long long skipResult; // @synthesize skipResult=_skipResult;
@property(nonatomic) _Bool hasPrePlayable; // @synthesize hasPrePlayable=_hasPrePlayable;
@property(nonatomic) long long convertType; // @synthesize convertType=_convertType;
@property(retain, nonatomic) CSJInteractionMethodParams *interactionMethodParams; // @synthesize interactionMethodParams=_interactionMethodParams;
@property(nonatomic) long long interactionMethod_real; // @synthesize interactionMethod_real=_interactionMethod_real;
@property(nonatomic) long long interactionMethod_ads; // @synthesize interactionMethod_ads=_interactionMethod_ads;
@property(nonatomic) long long interactionMethod; // @synthesize interactionMethod=_interactionMethod;
@property(nonatomic) _Bool validDislikeInputAccessoryView; // @synthesize validDislikeInputAccessoryView=_validDislikeInputAccessoryView;
@property(nonatomic) long long rewardBrowseWebviewDurationTime; // @synthesize rewardBrowseWebviewDurationTime=_rewardBrowseWebviewDurationTime;
@property(nonatomic) long long rewardBrowseType; // @synthesize rewardBrowseType=_rewardBrowseType;
@property(nonatomic) long long playableRewardType; // @synthesize playableRewardType=_playableRewardType;
@property(nonatomic) long long watchPercent; // @synthesize watchPercent=_watchPercent;
@property(nonatomic) long long playableCloseTime; // @synthesize playableCloseTime=_playableCloseTime;
@property(nonatomic) unsigned long long dynamic_join_type; // @synthesize dynamic_join_type=_dynamic_join_type;
@property(nonatomic) _Bool playable_skoverlay; // @synthesize playable_skoverlay=_playable_skoverlay;
@property(retain, nonatomic) NSNumber *endcard_skoverlay; // @synthesize endcard_skoverlay=_endcard_skoverlay;
@property(nonatomic) _Bool blockAutoOpen; // @synthesize blockAutoOpen=_blockAutoOpen;
@property(retain, nonatomic) CSJClickActionModel *clickActionModel; // @synthesize clickActionModel=_clickActionModel;
@property(nonatomic) long long rewardedPlayableCloseTime; // @synthesize rewardedPlayableCloseTime=_rewardedPlayableCloseTime;
@property(nonatomic) long long rewardedEndCardCloseTime; // @synthesize rewardedEndCardCloseTime=_rewardedEndCardCloseTime;
@property(nonatomic) long long playableDurationTime; // @synthesize playableDurationTime=_playableDurationTime;
@property(copy, nonatomic) NSString *originButtonText; // @synthesize originButtonText=_originButtonText;
@property(retain, nonatomic) NSMutableDictionary *hasSendRewardDict; // @synthesize hasSendRewardDict=_hasSendRewardDict;
@property(nonatomic) unsigned long long rewardSendResult; // @synthesize rewardSendResult=_rewardSendResult;
@property(nonatomic) _Bool hasSendReward; // @synthesize hasSendReward=_hasSendReward;
@property(retain, nonatomic) CSJRewardAgainModel *rewardAgainModel; // @synthesize rewardAgainModel=_rewardAgainModel;
@property(nonatomic) _Bool closeOnDislike; // @synthesize closeOnDislike=_closeOnDislike;
@property(copy, nonatomic) NSString *adInfo; // @synthesize adInfo=_adInfo;
@property(retain, nonatomic) CSJLandingPageConfModel *landingPageConf; // @synthesize landingPageConf=_landingPageConf;
@property(retain, nonatomic) CSJUgenModel *ugen; // @synthesize ugen=_ugen;
@property(nonatomic) long long page_render_type; // @synthesize page_render_type=_page_render_type;
@property(retain, nonatomic) CSJRenderModel *render; // @synthesize render=_render;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(nonatomic) double fullScreenCornerRadius; // @synthesize fullScreenCornerRadius=_fullScreenCornerRadius;
@property(nonatomic) double fullScreenAspectMargin; // @synthesize fullScreenAspectMargin=_fullScreenAspectMargin;
@property(nonatomic) double fullScreenAspectRatio; // @synthesize fullScreenAspectRatio=_fullScreenAspectRatio;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) CSJDirectLandingPageInfo *directLandingPageInfo; // @synthesize directLandingPageInfo=_directLandingPageInfo;
@property(retain, nonatomic) CSJCloudGameInfo *cloudGameInfo; // @synthesize cloudGameInfo=_cloudGameInfo;
@property(retain, nonatomic) CSJPlayableInfo *playableInfo; // @synthesize playableInfo=_playableInfo;
@property(nonatomic) long long cover_click_area; // @synthesize cover_click_area=_cover_click_area;
@property(copy, nonatomic) NSString *bu_middleTemplateData; // @synthesize bu_middleTemplateData=_bu_middleTemplateData;
@property(nonatomic) _Bool bu_middleTemplateComplete; // @synthesize bu_middleTemplateComplete=_bu_middleTemplateComplete;
@property(nonatomic) unsigned long long landingPageStyle; // @synthesize landingPageStyle=_landingPageStyle;
@property(nonatomic) _Bool havePushTargetPage; // @synthesize havePushTargetPage=_havePushTargetPage;
@property(nonatomic) long long if_double_deeplink; // @synthesize if_double_deeplink=_if_double_deeplink;
@property(nonatomic) long long if_both_open; // @synthesize if_both_open=_if_both_open;
@property(nonatomic) long long landingScrollPercentage; // @synthesize landingScrollPercentage=_landingScrollPercentage;
@property(nonatomic) _Bool reward_info_show; // @synthesize reward_info_show=_reward_info_show;
@property(nonatomic) long long rewardAmount; // @synthesize rewardAmount=_rewardAmount;
@property(copy, nonatomic) NSString *rewardName; // @synthesize rewardName=_rewardName;
@property(nonatomic) _Bool userDidCustomVideoPlayer; // @synthesize userDidCustomVideoPlayer=_userDidCustomVideoPlayer;
@property(nonatomic) long long renderControl; // @synthesize renderControl=_renderControl;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) long long adSlotType; // @synthesize adSlotType=_adSlotType;
@property(nonatomic) long long cacheSort; // @synthesize cacheSort=_cacheSort;
@property(copy, nonatomic) NSDictionary *materialDictionary; // @synthesize materialDictionary=_materialDictionary;
@property(copy, nonatomic) NSDictionary *session_params; // @synthesize session_params=_session_params;
@property(nonatomic) _Bool isPlayableTestData; // @synthesize isPlayableTestData=_isPlayableTestData;
@property(nonatomic) long long videoAdaptation; // @synthesize videoAdaptation=_videoAdaptation;
@property(copy, nonatomic) NSString *playableStyle; // @synthesize playableStyle=_playableStyle;
@property(nonatomic) long long feedVideoOpentype; // @synthesize feedVideoOpentype=_feedVideoOpentype;
@property(nonatomic) long long playableType; // @synthesize playableType=_playableType;
@property(nonatomic) long long appstoreJumpType; // @synthesize appstoreJumpType=_appstoreJumpType;
@property(copy, nonatomic) NSString *video_prefetch_server_msg; // @synthesize video_prefetch_server_msg=_video_prefetch_server_msg;
@property(copy, nonatomic) NSString *video_prefetch_error_msg; // @synthesize video_prefetch_error_msg=_video_prefetch_error_msg;
@property(nonatomic) long long video_prefetch_error_code; // @synthesize video_prefetch_error_code=_video_prefetch_error_code;
@property(nonatomic) _Bool video_local_prefetch; // @synthesize video_local_prefetch=_video_local_prefetch;
@property(nonatomic) long long video_prefetch_size; // @synthesize video_prefetch_size=_video_prefetch_size;
@property(nonatomic) double startDownload_interval; // @synthesize startDownload_interval=_startDownload_interval;
@property(nonatomic) double startPlay_interval; // @synthesize startPlay_interval=_startPlay_interval;
@property(nonatomic) double startLoad_interval; // @synthesize startLoad_interval=_startLoad_interval;
@property(nonatomic) long long playBarStyle; // @synthesize playBarStyle=_playBarStyle;
@property(nonatomic) long long showAdLogo; // @synthesize showAdLogo=_showAdLogo;
@property(retain, nonatomic) NSDictionary *clickAreaDic; // @synthesize clickAreaDic=_clickAreaDic;
@property(retain, nonatomic) CSJImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) CSJMiddleTplInfo *middleTplInfo; // @synthesize middleTplInfo=_middleTplInfo;
@property(copy, nonatomic) NSString *creative_extra; // @synthesize creative_extra=_creative_extra;
@property(retain, nonatomic) CSJTplInfo *tplInfo; // @synthesize tplInfo=_tplInfo;
@property(nonatomic) long long render_delay_time; // @synthesize render_delay_time=_render_delay_time;
@property(nonatomic) long long playbarShowtime; // @synthesize playbarShowtime=_playbarShowtime;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(copy) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) CSJVideoInfo *h265VideoInfo; // @synthesize h265VideoInfo=_h265VideoInfo;
@property(retain, nonatomic) CSJVideoInfo *h264VideoInfo; // @synthesize h264VideoInfo=_h264VideoInfo;
@property(nonatomic) unsigned long long video_encode_type; // @synthesize video_encode_type=_video_encode_type;
@property(retain, nonatomic) CSJAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(nonatomic) long long saveTimestamp; // @synthesize saveTimestamp=_saveTimestamp;
@property(nonatomic) double expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(nonatomic) long long unionSpecial; // @synthesize unionSpecial=_unionSpecial;
@property(copy, nonatomic) NSArray *click_urls; // @synthesize click_urls=_click_urls;
@property(copy, nonatomic) NSArray *show_urls; // @synthesize show_urls=_show_urls;
@property(copy, nonatomic) NSString *dsp_html; // @synthesize dsp_html=_dsp_html;
@property(nonatomic) _Bool is_html; // @synthesize is_html=_is_html;
@property(nonatomic) _Bool hasOpenMethodQuery; // @synthesize hasOpenMethodQuery=_hasOpenMethodQuery;
@property(retain, nonatomic) CSJAdGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(copy, nonatomic) NSString *ADXName; // @synthesize ADXName=_ADXName;
@property(copy, nonatomic) NSDictionary *mediaExt; // @synthesize mediaExt=_mediaExt;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(nonatomic) _Bool allowCustomVideoPlayer; // @synthesize allowCustomVideoPlayer=_allowCustomVideoPlayer;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long appSize; // @synthesize appSize=_appSize;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(nonatomic) long long imageMode; // @synthesize imageMode=_imageMode;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *AdDescription; // @synthesize AdDescription=_AdDescription;
@property(copy, nonatomic) NSString *AdTitle; // @synthesize AdTitle=_AdTitle;
@property(retain, nonatomic) CSJImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSArray *imageAry; // @synthesize imageAry=_imageAry;
@property(nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *preCacheLogExt; // @synthesize preCacheLogExt;
@property(copy, nonatomic) NSString *appLogBaseUrl; // @synthesize appLogBaseUrl;
@property(copy, nonatomic) NSString *ulink; // @synthesize ulink;
@property(copy, nonatomic) NSString *phone; // @synthesize phone;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(retain, nonatomic) CSJDeepLink *deepLink; // @synthesize deepLink;
@property(copy, nonatomic) NSString *mopubAuctionPrice; // @synthesize mopubAuctionPrice;
@property(copy) NSString *extInfo; // @synthesize extInfo;
@property(copy, nonatomic) NSString *AdID; // @synthesize AdID;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isValid;
- (_Bool)useLivePlayer;
- (_Bool)liveAdSupportCustomAction;
- (_Bool)isSplashSpecialLabel;
- (_Bool)isFeedReward;
- (_Bool)isAudioAd;
- (id)adAllImages;
- (id)playerItem;
- (_Bool)isRewardDirectUgenRender;
- (long long)lu_ea;
- (void)__originDict:(id)arg1 originKey:(id)arg2 intoDict:(id)arg3 intoKey:(id)arg4;
- (void)__originDict:(id)arg1 key:(id)arg2 intoDict:(id)arg3;
- (id)luShowClickInfo;
- (id)luParamsInfoWithSearchId:(id)arg1 offset:(long long)arg2;
- (_Bool)isUgenJump;
- (id)ugenSceneDataModel;
- (id)middleDynamicDataModel;
- (id)ugenDynamicDataModel;
- (id)dynamicDataModel;
- (id)imageModeWithURLString:(id)arg1;
- (id)extraDataDictWithExtraDataType:(long long)arg1;
@property(readonly, nonatomic) long long videoResolutionHeight;
@property(readonly, nonatomic) long long videoResolutionWidth;
- (struct CGSize)intersitialExpectSizeWithWidth:(double)arg1 height:(double)arg2;
- (_Bool)showSkipWhenPlayEnd;
- (struct CGSize)fullScreenAdSizeValidSafeInsets:(_Bool)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)shouldInterstitialDismiss;
- (_Bool)isRewardFullScreenLandscape;
- (_Bool)isRewardFullScreenPortrait;
- (_Bool)isInterstitialStyle;
- (_Bool)isFullSizeRatioStyle;
- (_Bool)isVideoImageMode;
- (void)correctRenderControl:(long long)arg1;
- (double)defaultScoreValue;
- (double)starCount;
- (_Bool)needReportDynamicShowType;
- (_Bool)needUseTmeplateOrMiddleTemplateToRender;
- (_Bool)needUseMiddleTemplateToRender;
- (_Bool)needUseTemplateToRender;
- (_Bool)validRelateMaterials;
- (_Bool)validMiddleTemplate;
- (_Bool)isRelatedRecommendation;
- (_Bool)isImmersiveLandingPage;
- (_Bool)isDoubleDeeplink;
- (_Bool)isBothOpen;
- (_Bool)restrictJITEnterPlayful;
- (_Bool)isRewardImageContactDirectLandingPage;
- (_Bool)isRewardImageDirectLandingPage;
- (_Bool)isRewardDirectLandingPage;
- (_Bool)isRewardEcommerce;
- (_Bool)isRewardBrowse;
- (_Bool)validPlayWithDownload;
- (_Bool)isCloudGame;
- (_Bool)isExpressPlayable;
- (_Bool)isNativeShowLoading;
- (_Bool)isVideoPlayable;
- (_Bool)isPlayableLandingPage;
- (_Bool)isPurePlayable;
- (_Bool)isSupportPlayful;
- (long long)playfulPageType;
- (id)getTrackTag;
- (_Bool)invalidShakeDurationLimited;
- (_Bool)validShakeDurationUnlimited;
- (_Bool)validShakeTrigger;
- (_Bool)isBrandVideoAd;
- (double)aspectMarginValue;
- (void)reportClickUrls;
- (_Bool)isDefaultNativeBannerAndFeedInteractionMethod;
- (_Bool)isDefaultFullVideoInteractionMethod;
- (_Bool)validLandingPageNativeAllClickArea;
- (_Bool)validNativeAllClickArea;
- (_Bool)validNativeCreateClickArea;
- (_Bool)validNativeBannerInteractionMethodWith:(long long)arg1;
- (_Bool)validInteractionMethod;
- (id)_getAdvancedRewardConfigKey:(long long)arg1;
- (long long)getVideoCompleteRewardMinDuration;
- (id)advancedRewardConfig:(long long)arg1;
- (_Bool)enableAdvancedReward:(long long)arg1;
- (void)checkInteractionMethodValidVoid;
- (_Bool)isBandingHtmlBannerStyle;
- (_Bool)isVideoSlot;
- (id)ritSettingModelInExtInfo;
- (id)ritInExtInfo;
@property(readonly, nonatomic) CSJVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(readonly, copy, nonatomic) NSString *videoUrl;
- (long long)defaultCommentNumValue;
- (id)nativeExpress_AdDescription;
- (id)nativeExpress_AdTitle;
- (id)AdSource;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)processData;
- (void)setupDataWithDictionary:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (_Bool)isRewardedOrFullscreenAd;
- (id)Used_UaURL;
- (unsigned long long)Idfa_NameNil;
- (_Bool)MAX_ThisChar;
- (id)getAppScheme;
- (id)With_ObjcTemp:(id)arg1 queryKey:(id)arg2 value:(id)arg3;
- (void)Log_OrgUser:(id)arg1 forKey:(id)arg2;
- (void)Ft_ThisAdId:(long long)arg1;
- (id)Temp_OrAs:(id)arg1;
- (long long)All_A2Read:(double)arg1;
- (_Bool)X1_EndOnly;
- (double)T5_CanLazy;
- (void)Ads_Y2Obj;
- (long long)Ios_NeedOpen;
- (unsigned long long)Http_T5Self;
- (struct CGSize)Stop_MARKFm;
- (_Bool)List_DidOut;
- (_Bool)Ts_UserEnd;
- (double)upSwipeThreshold;
- (long long)twistRotationThreshold;
- (id)slideArea;
- (double)splashBottomViewHalfBlankHeight;
- (double)splashBottomViewAreaBlankHeight;
- (double)splashBottomViewAreaHeight;
- (double)splashBottomViewAreaWidth;
- (double)splashBottomViewShakeAmplitude;
- (id)splashBottomViewBtnBackgroundDestColor;
- (double)splashBottomViewClickTopTextFontSize;
- (double)splashBottomViewClickTextFontSize;
- (id)splashBottomViewTopClickText;
- (id)splashBottomViewClickText;
@property(nonatomic) long long videoAdapterType;
@property(nonatomic) long long videoMuteType;
@property(retain) NSNumber *splashIsCache;
@property(nonatomic) long long splashSourceType;
@property(nonatomic) long long splashShowType;
@property(nonatomic) unsigned long long splashFullScreenOrientation;
@property(copy, nonatomic) NSArray *precacheVideoModels;
@property(retain, nonatomic) CSJSplashZoomOutModel *splash_icon;
@property(retain, nonatomic) CSJSplashCardModel *splashCardModel;
@property(retain, nonatomic) CSJSplashControlModel *splashControlModel;
- (long long)splashCoverType;
- (id)timeDiff;
- (id)splashImage;
- (unsigned long long)statusForSplash;
- (id)splashCoverImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

