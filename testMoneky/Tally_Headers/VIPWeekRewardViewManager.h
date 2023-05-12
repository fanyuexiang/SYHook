//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VIPWeekRewardController, VIPWeekRewardPopup1View, VIPWeekRewardPopup2View, VIPWeekRewardPrizeDrawPopup1View, VIPWeekRewardPrizeDrawPopup2View, VIPWeekRewardPrizeDrawPopup3View;

@interface VIPWeekRewardViewManager : NSObject
{
    VIPWeekRewardController *_controller;
    VIPWeekRewardPopup1View *_rewardPopup1View;
    VIPWeekRewardPopup2View *_rewardPopup2View;
    VIPWeekRewardPrizeDrawPopup1View *_rewardPrizeDrawPopup1View;
    VIPWeekRewardPrizeDrawPopup2View *_rewardPrizeDrawPopup2View;
    VIPWeekRewardPrizeDrawPopup3View *_rewardPrizeDrawPopup3View;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VIPWeekRewardPrizeDrawPopup3View *rewardPrizeDrawPopup3View; // @synthesize rewardPrizeDrawPopup3View=_rewardPrizeDrawPopup3View;
@property(retain, nonatomic) VIPWeekRewardPrizeDrawPopup2View *rewardPrizeDrawPopup2View; // @synthesize rewardPrizeDrawPopup2View=_rewardPrizeDrawPopup2View;
@property(retain, nonatomic) VIPWeekRewardPrizeDrawPopup1View *rewardPrizeDrawPopup1View; // @synthesize rewardPrizeDrawPopup1View=_rewardPrizeDrawPopup1View;
@property(retain, nonatomic) VIPWeekRewardPopup2View *rewardPopup2View; // @synthesize rewardPopup2View=_rewardPopup2View;
@property(retain, nonatomic) VIPWeekRewardPopup1View *rewardPopup1View; // @synthesize rewardPopup1View=_rewardPopup1View;
@property(nonatomic) __weak VIPWeekRewardController *controller; // @synthesize controller=_controller;
- (void)showRewardPrizeDrawPopupView:(id)arg1 netError:(_Bool)arg2;
- (void)rewardPrizeDrawPopup3ViewAction;
- (void)rewardPrizeDrawPopup2ViewAction;
- (void)rewardPrizeDrawPopup1ViewAction;
- (void)rewardPopup2ViewAction;
- (void)rewardPopup1ViewAction;

@end

