//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BURewardedVideoAdDelegate-Protocol.h"

@class BURewardedVideoAd, NSDictionary, NSMutableAttributedString, NSMutableDictionary, NSString, NSTimer, UIButton, UILabel, UIScrollView;

@interface LuckyWheelController : UIViewController <BURewardedVideoAdDelegate>
{
    BURewardedVideoAd *_rewardedVideoAd;
    _Bool _finishPlay;
    NSString *_ruleid;
    long long _isWatchVideo;
    UIScrollView *_scrollView;
    UIButton *_tmsBtn;
    NSMutableDictionary *_luckyContentViewDict;
    UIButton *_startBtn;
    UILabel *_scoreLabel;
    NSDictionary *_wheelData;
    NSTimer *_timer;
    long long _currentIndex;
    double _speed;
    _Bool _isStartLucky;
    long long _luckyIndex;
    NSString *_errorMsg;
    NSDictionary *_luckyResult;
    _Bool _canWatchVideo;
    long long _luckyTms;
    NSMutableAttributedString *_startLuckyAttributedText;
    NSMutableAttributedString *_watchVideoAttributedText;
}

- (void).cxx_destruct;
- (id)watchVideoAttributedText;
- (id)startLuckyAttributedText;
- (id)topDataArray;
- (void)requestContentData;
- (void)updateTms;
- (double)addTitleContentViewWithTitle:(id)arg1 content:(id)arg2 offsetY:(double)arg3;
- (void)setupContentView;
- (void)setupTopScrollView;
- (void)setupContentScrollView;
- (void)setupNavBar;
- (void)stopCountdown;
- (void)requestLuckyInfo;
- (void)countdown;
- (void)showWatchVideoAlert;
- (void)showLuckyResult;
- (void)redayEndLucky;
- (void)startLuckyIsClick:(_Bool)arg1;
- (void)startLuckyAction;
- (void)goLuckyRecord;
- (void)backAction;
- (void)viewDidLoad;
- (void)dealloc;
- (void)rewardedVideoAdDidClickSkip:(id)arg1;
- (void)rewardedVideoAdServerRewardDidFail:(id)arg1;
- (void)rewardedVideoAdServerRewardDidSucceed:(id)arg1 verify:(_Bool)arg2;
- (void)rewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidClick:(id)arg1;
- (void)rewardedVideoAdDidClose:(id)arg1;
- (void)rewardedVideoAdWillClose:(id)arg1;
- (void)rewardedVideoAdDidVisible:(id)arg1;
- (void)rewardedVideoAdWillVisible:(id)arg1;
- (void)rewardedVideoAdVideoDidLoad:(id)arg1;
- (void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidLoad:(id)arg1;
- (void)watchVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

