//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIButton, UIColor, UILabel, UIScrollView, UIView, VIPLimitedBuyersView, VIPLimitedCountDown;

@interface VIPLimitedDateViewController : UIViewController <UIScrollViewDelegate>
{
    UIView *_priceView;
    UIView *_rightsView;
    UIView *_rightMoreView;
    UIButton *_rightMoreBtn;
    UIScrollView *_imageScroll;
    NSArray *_rightarrayTemp;
    UIView *_commentView;
    UIView *_feedbackView;
    UIView *_ruleView;
    UIView *_navView;
    UILabel *_navTitleLabel;
    UIButton *_rightBtn;
    UIButton *_leftBtn;
    VIPLimitedBuyersView *_buyersView;
    VIPLimitedCountDown *_countdown;
    double _maxMoveHeight;
    long long _priceindex;
    UILabel *_priceLabel;
    UILabel *_originalpriceLabel;
    UIColor *_color1;
    UIColor *_color2;
    UILabel *_pricedetaildesc;
    _Bool _title_color;
    NSString *_sourceString;
    long long _item_id;
    NSString *_activityString;
    long long _entry_id;
    NSMutableDictionary *_dataDic;
    UIScrollView *_contentScroll;
    UILabel *_millisecondLabel;
    UILabel *_secondLabel;
    UILabel *_minitueLabel;
    long long _statusBarStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) UILabel *minitueLabel; // @synthesize minitueLabel=_minitueLabel;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *millisecondLabel; // @synthesize millisecondLabel=_millisecondLabel;
@property(retain, nonatomic) UIScrollView *contentScroll; // @synthesize contentScroll=_contentScroll;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(nonatomic) long long entry_id; // @synthesize entry_id=_entry_id;
@property(retain, nonatomic) NSString *activityString; // @synthesize activityString=_activityString;
@property(nonatomic) long long item_id; // @synthesize item_id=_item_id;
@property(retain, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
- (void)jumpWebView:(id)arg1 withurl:(id)arg2;
- (void)showagreement;
- (void)resetNaviBarViewAlpha:(double)arg1 fixAlpha:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)buyEvent;
- (void)buyClick;
- (void)vipdetail;
- (void)showHasComplete:(long long)arg1;
- (void)adjustPrice;
- (void)setupBottomView;
- (void)setupBuyuserList;
- (void)setContentRuleView:(double)arg1;
- (void)feedbackMrore;
- (void)setContentFeedbackView:(double)arg1;
- (void)setContentCommentView:(double)arg1;
- (void)setContentImageView:(double)arg1;
- (void)rightMrore;
- (void)setContentRightsView:(double)arg1;
- (void)priceClick:(id)arg1;
- (void)onePricesUI;
- (void)twoPricesUI;
- (void)threePricesUI;
- (void)setContentPriceView:(double)arg1;
- (void)setupBuyUI;
- (void)requestData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)restorePurchases;
- (void)closeEvent;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

