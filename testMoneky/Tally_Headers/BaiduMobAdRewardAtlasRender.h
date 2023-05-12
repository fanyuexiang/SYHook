//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdRewardTemplateRenderer.h"

#import "BaiduMobAdCycleViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BaiduMobAdGiftCountdownComponent, BaiduMobAdPageControl, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UICollectionView, UIImageView, UILabel, UIView;

@interface BaiduMobAdRewardAtlasRender : BaiduMobAdRewardTemplateRenderer <UICollectionViewDelegate, UICollectionViewDataSource, BaiduMobAdCycleViewCellDelegate>
{
    int _skipType;
    UICollectionView *_collectionView;
    BaiduMobAdPageControl *_pageControl;
    NSArray *_adinstanceArray;
    NSMutableArray *_cellArray;
    NSMutableDictionary *_cellDic;
    NSTimer *_cycleCountTimer;
    UIImageView *_closeImageView;
    UIView *_retainDialog;
    UIView *_closeDialog;
    UIView *_pageControlView;
    UILabel *_retainDialogRewardLabel;
    BaiduMobAdGiftCountdownComponent *_giftCountdownView;
    double _interval;
    NSString *_normal_color;
    NSString *_foreground_color;
    double _rewardRemainTime;
}

- (void).cxx_destruct;
@property(nonatomic) double rewardRemainTime; // @synthesize rewardRemainTime=_rewardRemainTime;
@property(retain, nonatomic) NSString *foreground_color; // @synthesize foreground_color=_foreground_color;
@property(retain, nonatomic) NSString *normal_color; // @synthesize normal_color=_normal_color;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) BaiduMobAdGiftCountdownComponent *giftCountdownView; // @synthesize giftCountdownView=_giftCountdownView;
@property(retain, nonatomic) UILabel *retainDialogRewardLabel; // @synthesize retainDialogRewardLabel=_retainDialogRewardLabel;
@property(retain, nonatomic) UIView *pageControlView; // @synthesize pageControlView=_pageControlView;
@property(retain, nonatomic) UIView *closeDialog; // @synthesize closeDialog=_closeDialog;
@property(retain, nonatomic) UIView *retainDialog; // @synthesize retainDialog=_retainDialog;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(nonatomic) int skipType; // @synthesize skipType=_skipType;
@property(retain, nonatomic) NSTimer *cycleCountTimer; // @synthesize cycleCountTimer=_cycleCountTimer;
@property(retain, nonatomic) NSMutableDictionary *cellDic; // @synthesize cellDic=_cellDic;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) NSArray *adinstanceArray; // @synthesize adinstanceArray=_adinstanceArray;
@property(retain, nonatomic) BaiduMobAdPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)hiddenDialog;
- (void)skipClick;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)closeClick;
- (void)cycleViewComponentEvent:(id)arg1 component:(id)arg2;
- (void)cycleViewComponentCreateSuccess:(id)arg1 viewName:(id)arg2 special:(id)arg3 component:(id)arg4;
- (void)cycleViewComponentClick:(long long)arg1 clickView:(id)arg2 viewName:(id)arg3 special:(id)arg4 component:(id)arg5;
- (void)handleScroll:(double)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setPage;
- (void)initCycleCountTimer;
- (void)initCollectionView;
- (void)initPageControlView;
- (double)getRewardCountDurationTime;
- (void)setRemainTime;
- (void)setRewardTime;
- (double)duration;
- (double)currentTime;
- (void)setupUI;
- (void)pause;
- (void)start;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (id)initWithAdRendererHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

