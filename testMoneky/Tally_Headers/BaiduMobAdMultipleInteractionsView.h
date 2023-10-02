//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BaiduMobAdShakeFuncManagerDelegate-Protocol.h"

@class BaiduMobAdComponentLottieManager, BaiduMobAdInstance, BaiduMobAdShakeFuncManager, BaiduMobAdSlideGesturePanView, NSString, UILabel;

@interface BaiduMobAdMultipleInteractionsView : UIView <BaiduMobAdShakeFuncManagerDelegate>
{
    _Bool _isShakeResponseAd;
    _Bool _shakeFuncEnable;
    int _backgroundGearType;
    int _slideHotAreaType;
    BaiduMobAdInstance *_adInstance;
    UIView *_bgAnimContainer;
    BaiduMobAdComponentLottieManager *_bgAnimManager;
    BaiduMobAdComponentLottieManager *_slideAnimManager;
    BaiduMobAdComponentLottieManager *_shakeAnimManager;
    BaiduMobAdComponentLottieManager *_progressAnimManager;
    BaiduMobAdShakeFuncManager *_shakeManager;
    UILabel *_componentLable;
    double _lastProgress;
    double _bottomMarginRate;
    UIView *_clickView;
    UIView *_backgroundClickView;
    BaiduMobAdSlideGesturePanView *_slideView;
    CDUnknownBlockType _clickBlock;
    NSString *_actionText;
    double _actionAreaHightRate;
    double _actionAreaAlpha;
    NSString *_slideLegal;
    NSString *_shakeVelocity;
    NSString *_shakeSpeed;
    NSString *_shakeLottieAnimJsonStr;
    NSString *_shakeDetectCount;
    NSString *_shakeIntervalTime;
    NSString *_shakeAngle;
    NSString *_shakeOptTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shakeOptTime; // @synthesize shakeOptTime=_shakeOptTime;
@property(retain, nonatomic) NSString *shakeAngle; // @synthesize shakeAngle=_shakeAngle;
@property(retain, nonatomic) NSString *shakeIntervalTime; // @synthesize shakeIntervalTime=_shakeIntervalTime;
@property(retain, nonatomic) NSString *shakeDetectCount; // @synthesize shakeDetectCount=_shakeDetectCount;
@property(retain, nonatomic) NSString *shakeLottieAnimJsonStr; // @synthesize shakeLottieAnimJsonStr=_shakeLottieAnimJsonStr;
@property(retain, nonatomic) NSString *shakeSpeed; // @synthesize shakeSpeed=_shakeSpeed;
@property(retain, nonatomic) NSString *shakeVelocity; // @synthesize shakeVelocity=_shakeVelocity;
@property(nonatomic) _Bool shakeFuncEnable; // @synthesize shakeFuncEnable=_shakeFuncEnable;
@property(retain, nonatomic) NSString *slideLegal; // @synthesize slideLegal=_slideLegal;
@property(nonatomic) int slideHotAreaType; // @synthesize slideHotAreaType=_slideHotAreaType;
@property(nonatomic) double actionAreaAlpha; // @synthesize actionAreaAlpha=_actionAreaAlpha;
@property(nonatomic) double actionAreaHightRate; // @synthesize actionAreaHightRate=_actionAreaHightRate;
@property(retain, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(nonatomic) _Bool isShakeResponseAd; // @synthesize isShakeResponseAd=_isShakeResponseAd;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) BaiduMobAdSlideGesturePanView *slideView; // @synthesize slideView=_slideView;
@property(retain, nonatomic) UIView *backgroundClickView; // @synthesize backgroundClickView=_backgroundClickView;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(nonatomic) int backgroundGearType; // @synthesize backgroundGearType=_backgroundGearType;
@property(nonatomic) double bottomMarginRate; // @synthesize bottomMarginRate=_bottomMarginRate;
@property(nonatomic) double lastProgress; // @synthesize lastProgress=_lastProgress;
@property(retain, nonatomic) UILabel *componentLable; // @synthesize componentLable=_componentLable;
@property(retain, nonatomic) BaiduMobAdShakeFuncManager *shakeManager; // @synthesize shakeManager=_shakeManager;
@property(retain, nonatomic) BaiduMobAdComponentLottieManager *progressAnimManager; // @synthesize progressAnimManager=_progressAnimManager;
@property(retain, nonatomic) BaiduMobAdComponentLottieManager *shakeAnimManager; // @synthesize shakeAnimManager=_shakeAnimManager;
@property(retain, nonatomic) BaiduMobAdComponentLottieManager *slideAnimManager; // @synthesize slideAnimManager=_slideAnimManager;
@property(retain, nonatomic) BaiduMobAdComponentLottieManager *bgAnimManager; // @synthesize bgAnimManager=_bgAnimManager;
@property(retain, nonatomic) UIView *bgAnimContainer; // @synthesize bgAnimContainer=_bgAnimContainer;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
- (void)destoryMultipleInteractionView;
- (void)resetMultipleInteractionFunc;
- (_Bool)isHasShakeView;
- (void)clickEvent:(id)arg1;
- (void)clickAdsCompletionBlock:(CDUnknownBlockType)arg1;
- (void)nativeShakeProgressRate:(double)arg1;
- (void)nativeShakeFuncMotion:(_Bool)arg1;
- (void)setupShakeDefaultInfo;
- (void)setupShakeManager;
- (void)clickAction:(id)arg1;
- (void)startAnim;
- (void)createSlideView;
- (void)createClickView;
- (void)createActionLabel;
- (void)createProgressAnim;
- (void)createShakeAnim;
- (void)createSlideAnim;
- (void)createBGAnim;
- (void)bgClick;
- (void)setupUI;
- (void)defaultConfigWithCloudControl;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)initWithFrame:(struct CGRect)arg1 adInstance:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
