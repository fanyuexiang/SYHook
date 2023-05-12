//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdContentViewDelegate-Protocol.h"
#import "GDTAdViewMediatorProtocol-Protocol.h"
#import "GDTBizVideoPlayerViewDelegate-Protocol.h"
#import "GDTRewardPageViewDelegate-Protocol.h"

@class GDTADActiveInformation, GDTADConfiguration, GDTAdViewExposureWithAntiSpamChecker, GDTAntiSpamBusinessData, GDTBizFeedVideoPlayerView, GDTPlayer, GDTRewardPageView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol GDTAdContentViewProtocol, GDTBaseViewMediatorDelegate, GDTVideoEndcardAppearanceProtocol;

@interface GDTBaseViewMediator : NSObject <GDTBizVideoPlayerViewDelegate, GDTAdContentViewDelegate, GDTRewardPageViewDelegate, GDTAdViewMediatorProtocol>
{
    _Bool _viewVisible;
    id <GDTBaseViewMediatorDelegate> _delegate;
    UIView *_adView;
    UIView<GDTVideoEndcardAppearanceProtocol> *_endcardView;
    GDTADConfiguration *_adConfiguration;
    GDTADActiveInformation *_adActiveInformation;
    NSDictionary *_renderMap;
    UIView *_containerView;
    GDTAntiSpamBusinessData *_antiSpamBusinessData;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    UIView *_baseView;
    GDTBizFeedVideoPlayerView *_playerContainerView;
    UIView<GDTAdContentViewProtocol> *_adContentView;
    GDTRewardPageView *_rewardPageView;
    NSMutableArray *_renderTypeArray;
    long long _shouldEffectiveTime;
}

@property(nonatomic) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) long long shouldEffectiveTime; // @synthesize shouldEffectiveTime=_shouldEffectiveTime;
@property(retain, nonatomic) NSMutableArray *renderTypeArray; // @synthesize renderTypeArray=_renderTypeArray;
@property(retain, nonatomic) GDTRewardPageView *rewardPageView; // @synthesize rewardPageView=_rewardPageView;
@property(retain, nonatomic) UIView<GDTAdContentViewProtocol> *adContentView; // @synthesize adContentView=_adContentView;
@property(retain, nonatomic) GDTBizFeedVideoPlayerView *playerContainerView; // @synthesize playerContainerView=_playerContainerView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(retain, nonatomic) GDTAntiSpamBusinessData *antiSpamBusinessData; // @synthesize antiSpamBusinessData=_antiSpamBusinessData;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *renderMap; // @synthesize renderMap=_renderMap;
@property(readonly, nonatomic) GDTADActiveInformation *adActiveInformation; // @synthesize adActiveInformation=_adActiveInformation;
@property(readonly, nonatomic) GDTADConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(retain, nonatomic) UIView<GDTVideoEndcardAppearanceProtocol> *endcardView; // @synthesize endcardView=_endcardView;
@property(retain, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <GDTBaseViewMediatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)GDTfunctionw8CBtL:(id)arg1;
- (void)GDTfunctioni5Q9Nc;
- (id)renderAdLandingPageView;
- (void)GDTfunctionr9SGnz;
- (_Bool)GDTfunctionv88VGw;
- (void)GDTfunctionf9FpGH;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctionu9FNHT:(id)arg1;
- (void)GDTfunctiont0e6DY:(id)arg1 error:(id)arg2;
- (void)GDTfunctionf8imUB:(id)arg1 extInfo:(id)arg2;
- (void)GDTfunctionl9Qn3r:(id)arg1 exposureUrl:(id)arg2;
- (void)GDTfunctionl9MJFL:(id)arg1;
- (void)GDTfunctiong3NFVY:(id)arg1 clickParam:(id)arg2 clickArea:(long long)arg3;
- (id)GDTfunctions8lvuO;
- (void)GDTfunctionv4GJRr:(id)arg1 resetPlayerFrame:(struct CGRect)arg2;
- (void)GDTfunctiont3GlxH:(id)arg1;
- (void)GDTfunctionm4V9u1:(id)arg1;
- (void)GDTfunctionq2oEIQ:(id)arg1 error:(id)arg2;
- (void)GDTfunctionl8Hjls:(id)arg1 error:(id)arg2;
- (void)GDTfunctiona840DO:(id)arg1;
- (void)GDTfunctiont4rrjb:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctionq4zcMi:(id)arg1;
- (void)GDTfunctiono39swv:(id)arg1 clickParam:(id)arg2 clickArea:(long long)arg3;
- (void)GDTfunctiona2RUQv;
- (void)GDTfunctionq3Kdzj;
- (void)GDTfunctiono8LcAk;
- (void)GDTfunctionq7bKoD:(_Bool)arg1;
- (void)GDTfunctionl5yTb5:(double)arg1 duration:(double)arg2;
- (void)GDTfunctionl7tQCa;
- (void)GDTfunctionp1B2XM:(unsigned long long)arg1 duration:(long long)arg2;
- (id)GDTfunctionj6xnFU;
@property(readonly, nonatomic) GDTPlayer *player;
- (id)GDTfunctiont5G6Uc;
- (struct CGPoint)closeButtonClickPoint;
- (void)GDTfunctionv74elc:(id)arg1;
- (id)GDTfunctionk5zyrE;
- (_Bool)GDTfunctions67zIk;
- (id)GDTfunctionl3GyrH;
- (void)GDTfunctionb1nX7b;
- (void)GDTfunctionp0NIJV;
- (void)GDTfunctionv1bGFs;
- (void)GDTfunctiont23sHd;
- (void)GDTfunctione2eqwO;
- (void)GDTfunctionf3DWwB;
- (void)GDTfunctionn74DRB:(long long)arg1;
- (void)GDTfunctioni0jtEB;
- (void)GDTfunctionv0RhfR;
- (void)GDTfunctionl9DO8u:(struct CGPoint)arg1;
- (void)GDTfunctionz15Ns5;
- (void)GDTfunctionp9MZza:(id)arg1;
- (void)endcardLoadSuccess;
- (void)GDTfunctionw2k9zC;
- (void)GDTfunctionv2Bmlg;
- (void)GDTfunctionp805wg;
- (void)GDTfunctionn5E92A;
- (void)GDTfunctionc6g5Pc:(id)arg1;
- (void)GDTfunctionk0Pui7;
- (void)GDTfunctionc3Ytyu:(id)arg1;
- (void)GDTfunctionc2UJQi;
- (_Bool)GDTfunctionp4xgi2;
- (id)GDTfunctionf9WMt9;
- (_Bool)GDTfunctionl99QJh;
- (_Bool)GDTfunctionz7OTqj;
- (Class)GDTfunctiony5iffn;
- (_Bool)GDTfunctionp5E6K5;
- (void)GDTfunctionb0eGdE;
- (void)GDTfunctionc2KuxD;
- (void)GDTfunctiont2TjKb;
- (void)GDTfunctionm0kO0l:(id)arg1;
- (void)GDTfunctiond66UiQ:(id)arg1;
- (void)GDTfunctions5EvCf;
- (void)GDTfunctiony4SnW5;
- (void)GDTfunctionr47mnn:(id)arg1 key:(id)arg2 web:(_Bool)arg3 native:(_Bool)arg4;
- (id)GDTfunctiong1uGF0:(id)arg1;
- (void)GDTfunctiona9OKyu;
- (void)GDTfunctionv0qXHt;
- (void)GDTfunctionw2xxhn;
- (void)GDTfunctionu1B8uS;
- (void)GDTfunctions233sT;
- (void)GDTfunctionj9OZkT;
- (void)GDTfunctionx8o1LI;
- (void)GDTfunctionj8Y1r6;
- (void)GDTfunctionx0ARGO;
- (struct CGRect)GDTfunctione0teTj;
- (void)GDTfunctionu9xC2U;
- (id)GDTfunctiond5JOtC;
- (void)GDTfunctions2yKxD;
- (void)GDTfunctionv5A0KZ;
- (void)GDTfunctionr7Hy85:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 activeInformation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

