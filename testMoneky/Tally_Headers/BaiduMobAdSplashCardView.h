//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaiduMobAdActButton, BaiduMobAdInstance, BaiduMobAdSplashShakeView, NSString, UIImage, UIImageView, UILabel;
@protocol BaiduMobAdSplashCardViewInterDelegate;

@interface BaiduMobAdSplashCardView : UIView
{
    _Bool _isDestory;
    id <BaiduMobAdSplashCardViewInterDelegate> _cardDelegate;
    UIImageView *_frontImageView;
    UIView *_cardView;
    BaiduMobAdInstance *_adInstance;
    UIImage *_frontImage;
    UIImageView *_icon;
    UILabel *_brandLabel;
    UILabel *_descLabel;
    BaiduMobAdActButton *_button;
    UIImageView *_closeView;
    BaiduMobAdSplashShakeView *_shakeView;
    double _showTime;
    NSString *_clickArea;
    NSString *_closePosition;
    NSString *_shakeEnable;
    NSString *_titCloud;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *titCloud; // @synthesize titCloud=_titCloud;
@property(retain, nonatomic) NSString *shakeEnable; // @synthesize shakeEnable=_shakeEnable;
@property(retain, nonatomic) NSString *closePosition; // @synthesize closePosition=_closePosition;
@property(retain, nonatomic) NSString *clickArea; // @synthesize clickArea=_clickArea;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) BaiduMobAdSplashShakeView *shakeView; // @synthesize shakeView=_shakeView;
@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) BaiduMobAdActButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isDestory; // @synthesize isDestory=_isDestory;
@property(retain, nonatomic) UIImage *frontImage; // @synthesize frontImage=_frontImage;
@property(retain, nonatomic) BaiduMobAdInstance *adInstance; // @synthesize adInstance=_adInstance;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIImageView *frontImageView; // @synthesize frontImageView=_frontImageView;
@property(nonatomic) __weak id <BaiduMobAdSplashCardViewInterDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
- (void)destoryCardView;
- (void)adLogoClick;
- (void)shakeCard;
- (void)clickCard;
- (void)closeCard;
- (void)setCloudControlFroShake;
- (id)getBrandText;
- (id)getDescText;
- (void)startShakeFunc;
- (void)startAnim;
- (void)resetAnimConfig;
- (void)addDSPOnTargetView:(id)arg1;
- (id)createTopViewWithFrame:(struct CGRect)arg1;
- (void)createCard;
- (void)setupUI;
- (void)startCountdown;
- (void)renderCardView;
- (void)configCloudControl;
- (id)initCardViewWithAdInstance:(id)arg1 withFrontImage:(id)arg2;

@end

