//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJAdBannerSlot, CSJSize, NSArray, NSDictionary, NSMutableArray, NSString;

@interface CSJAdSlot : NSObject
{
    _Bool _isSupportDeepLink;
    _Bool _isOriginAd;
    _Bool _supportRenderControl;
    _Bool _groupLoadMore;
    _Bool _needPreloadNormalReward;
    _Bool _requestFailed;
    _Bool _materialMetaFromPreload;
    NSString *_ID;
    long long _AdType;
    long long _position;
    NSMutableArray *_imgSizeArray;
    CSJSize *_imgSize;
    CSJSize *_iconSize;
    long long _adloadSeq;
    NSString *_primeRit;
    NSString *_previewAdID;
    NSString *_previewCreativeID;
    NSDictionary *_ext;
    NSString *_userData;
    long long _adLoadType;
    long long _AdCount;
    NSString *_ritScene;
    long long _renderType;
    NSArray *_parentTplIds;
    long long _splashPublisherTimeoutControl;
    long long _splashTimeOutControl;
    long long _splashTimeOut;
    CSJAdBannerSlot *_adBannerSlot;
    NSString *_preSessions;
    NSString *_playAgainRit;
    long long _rewardAdType;
    double _expireTimestamp;
    struct CGSize _adSize;
    struct CGSize _viewSize;
    struct CGSize _cardSize;
}

- (void).cxx_destruct;
@property(nonatomic) double expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(nonatomic) _Bool materialMetaFromPreload; // @synthesize materialMetaFromPreload=_materialMetaFromPreload;
@property(nonatomic) _Bool requestFailed; // @synthesize requestFailed=_requestFailed;
@property(nonatomic) _Bool needPreloadNormalReward; // @synthesize needPreloadNormalReward=_needPreloadNormalReward;
@property(nonatomic) long long rewardAdType; // @synthesize rewardAdType=_rewardAdType;
@property(copy, nonatomic) NSString *playAgainRit; // @synthesize playAgainRit=_playAgainRit;
@property(copy, nonatomic) NSString *preSessions; // @synthesize preSessions=_preSessions;
@property(retain, nonatomic) CSJAdBannerSlot *adBannerSlot; // @synthesize adBannerSlot=_adBannerSlot;
@property(nonatomic) long long splashTimeOut; // @synthesize splashTimeOut=_splashTimeOut;
@property(nonatomic) long long splashTimeOutControl; // @synthesize splashTimeOutControl=_splashTimeOutControl;
@property(nonatomic) long long splashPublisherTimeoutControl; // @synthesize splashPublisherTimeoutControl=_splashPublisherTimeoutControl;
@property(nonatomic) struct CGSize cardSize; // @synthesize cardSize=_cardSize;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(copy, nonatomic) NSArray *parentTplIds; // @synthesize parentTplIds=_parentTplIds;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(copy, nonatomic) NSString *ritScene; // @synthesize ritScene=_ritScene;
@property(nonatomic) long long AdCount; // @synthesize AdCount=_AdCount;
@property(nonatomic) _Bool groupLoadMore; // @synthesize groupLoadMore=_groupLoadMore;
@property(nonatomic) long long adLoadType; // @synthesize adLoadType=_adLoadType;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *previewCreativeID; // @synthesize previewCreativeID=_previewCreativeID;
@property(copy, nonatomic) NSString *previewAdID; // @synthesize previewAdID=_previewAdID;
@property(copy, nonatomic) NSString *primeRit; // @synthesize primeRit=_primeRit;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) long long adloadSeq; // @synthesize adloadSeq=_adloadSeq;
@property(nonatomic) _Bool supportRenderControl; // @synthesize supportRenderControl=_supportRenderControl;
@property(nonatomic) _Bool isOriginAd; // @synthesize isOriginAd=_isOriginAd;
@property(nonatomic) _Bool isSupportDeepLink; // @synthesize isSupportDeepLink=_isSupportDeepLink;
@property(retain, nonatomic) CSJSize *iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) CSJSize *imgSize; // @synthesize imgSize=_imgSize;
@property(retain, nonatomic) NSMutableArray *imgSizeArray; // @synthesize imgSizeArray=_imgSizeArray;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long AdType; // @synthesize AdType=_AdType;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)testMeasurementPreviewParams;
- (id)testMeasurementConfigRitParams;
- (_Bool)isRewardedOrFullscreenAd;
- (_Bool)isFullscreenAd;
- (_Bool)isRewardedAd;
- (_Bool)isNativeBannerOrInterstitialAd;
- (_Bool)isExpressFeedAd;
- (_Bool)isInterstitialAd;
- (_Bool)isBannerAd;
- (_Bool)isNativeFeedAd;
- (_Bool)isFeedAd;
- (_Bool)isSplashAd;
- (id)trackTagWithInteractionType:(long long)arg1 ignoreLandscape:(_Bool)arg2;
- (id)trackTag;
- (id)_acceptedSizeArray;
- (void)_setupData;
- (id)init;
- (id)dictionaryValue;

@end
