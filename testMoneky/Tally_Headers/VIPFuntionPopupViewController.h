//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, VIPActivityCountdownView;

@interface VIPFuntionPopupViewController : UIViewController <UIScrollViewDelegate>
{
    NSArray *_rightarrayTemp;
    UIView *_whiteView;
    UIScrollView *_contentScroll;
    UIScrollView *_titleScroll;
    UIView *_tagView;
    UIScrollView *_imageScroll;
    UILabel *_indexLabel;
    UIView *_priceView;
    UIScrollView *_priceScrollView;
    UILabel *_pricedetaildesc;
    UIView *_bottomView;
    UIButton *_abbuyButton;
    UIImageView *_balanceView;
    long long _priceindex;
    NSString *_enterSourceString;
    VIPActivityCountdownView *_vipactivitycountdownView;
    NSArray *_vipArray;
    long long _showType;
    CDUnknownBlockType _buyVIPHandler;
    long long _showindex;
}

+ (_Bool)showVIPWithIndex:(id)arg1 naviController:(id)arg2 vipType:(long long)arg3 vipRightType:(long long)arg4 vipPurchased:(_Bool)arg5 eventId:(id)arg6 buyEventSource:(id)arg7 renewEventSource:(id)arg8;
+ (void)showBuyVIPWithIndex:(id)arg1 naviController:(id)arg2 vipType:(long long)arg3 eventId:(id)arg4 buyEventSource:(id)arg5 renewEventSource:(id)arg6;
- (void).cxx_destruct;
@property(nonatomic) long long showindex; // @synthesize showindex=_showindex;
@property(copy, nonatomic) CDUnknownBlockType buyVIPHandler; // @synthesize buyVIPHandler=_buyVIPHandler;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSArray *vipArray; // @synthesize vipArray=_vipArray;
- (void)requestVIPModel;
- (void)abPopupClickBuyVIP;
- (void)adjustBuyButton:(long long)arg1;
- (void)agreementAction:(id)arg1;
- (void)setContentBuyBtn;
- (void)priceClick:(id)arg1;
- (void)setContentPriceView:(double)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setContentImageView:(double)arg1;
- (void)clickTag:(id)arg1;
- (void)setContentTitleView;
- (void)setupUI;
- (void)closeClick;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showup;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

