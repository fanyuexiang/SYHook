//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class DetaiTableView, DetailAccountingCycleTipView, DetailTopView, InformationRedDot, KnowledgePurchaseDetailView, LOTAnimationView, MarqueeView, NSCalendar, NSDateFormatter, NSMutableDictionary, NSString, NTallyModel, OperationManager, SAImagePickerManager, SKNormalHighlightedButton, UIButton, UIImageView, UILabel, UIView, VIPPopopStayView, WXLoginButton;

@interface DetailViewController : UIViewController
{
    DetailTopView *_topView;
    InformationRedDot *_information;
    NSDateFormatter *_dateFormatter;
    NSString *_monthBillYear;
    NSString *_monthBillMonth;
    NSCalendar *_calendar;
    UIView *_recommendbgView;
    NSMutableDictionary *_recommendDict;
    _Bool _needLoginAfterEvent;
    _Bool _needSmartEvent;
    KnowledgePurchaseDetailView *_knowledgePurchaseView;
    VIPPopopStayView *_vipstayView;
    SAImagePickerManager *_imagePicker;
    DetaiTableView *_tableView;
    MarqueeView *_marqueeView;
    _Bool _fromMediator;
    double _tabBarHeight;
    NSMutableDictionary *_marqueeDict;
    _Bool _isShowOperation;
    OperationManager *_operationView;
    NSMutableDictionary *_operationDict;
    double _statusBarHeight;
    double _navStatusBarHeight;
    UILabel *_redNewMessageLabel;
    UIImageView *_navBarImageView;
    UIImageView *_navBarBgImageView;
    UIButton *_searchBtn;
    UIButton *_calendarBtn;
    LOTAnimationView *_messageentrance;
    UIImageView *_topIconImageView;
    UIImageView *_tallyEntranceImgView;
    SKNormalHighlightedButton *_tallyEntranceBtn;
    UILabel *_redDotLabel;
    double _topHeight;
    UIView *_shadowCoverView;
    WXLoginButton *_wxBindBtn;
    LOTAnimationView *_saveAnimationView;
    NSString *_imageUrl;
    UIView *_yellowborderView;
    _Bool _showedBottomOperationBar;
    NTallyModel *_imageTallyModel;
    long long _networkStatus;
    DetailAccountingCycleTipView *_acMonthTipView;
    UIView *_itemsView;
    UIView *_whiteView;
}

+ (id)loadConfigsWithBottomOperationBar;
+ (void)saveConfigsWithBottomOperationBar:(id)arg1;
+ (id)loadConfigsWithSmallYellowBar;
+ (void)saveConfigsWithSmallYellowBar:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) DetailAccountingCycleTipView *acMonthTipView; // @synthesize acMonthTipView=_acMonthTipView;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) _Bool showedBottomOperationBar; // @synthesize showedBottomOperationBar=_showedBottomOperationBar;
@property(retain, nonatomic) NTallyModel *imageTallyModel; // @synthesize imageTallyModel=_imageTallyModel;
- (void)userConfigNotification:(id)arg1;
- (void)publicConfigNotification:(id)arg1;
- (void)destroyNotification;
- (id)imageNameWithName:(id)arg1;
- (id)textColor;
- (void)refreshTheme;
- (void)responseNotification:(id)arg1;
- (void)refreshTallyEntranceAction;
- (void)refreshACMonthTipView;
- (void)vipBuySuccessNotification:(id)arg1;
- (_Bool)needShowACMonthTipView;
- (void)hideStayView;
- (void)showStayView;
- (void)closeLogin;
- (void)refreshNewSmartCount;
- (void)goSmartMessage;
- (void)refreshReddotLabel;
- (void)adjustOperationViewHidden:(_Bool)arg1;
- (void)closeOperationAction;
- (void)operationAction;
- (void)showOperationView;
- (void)adjustOperationViewContent;
- (_Bool)showPhoneBind;
- (_Bool)displayBindWX;
- (void)requestOperationInfo;
- (void)adjustMarqueeViewHidden:(_Bool)arg1;
- (void)marqueeRightButtonAction;
- (void)marqueeAction;
- (void)showMarqueeView:(id)arg1 contentWidth:(double)arg2;
- (void)refreshMarqueeView;
- (void)checkNetworkStatus:(id)arg1;
- (void)refreshDetailBarDataWithCache;
- (void)refreshDetailBarDataWithNetwork;
- (void)refreshDetailBarData;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)animationStart;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateAccountInfo;
- (void)refreshVipStatus;
- (void)userAccountDidChange;
- (void)userInfoDidChange;
- (void)enterForground;
- (void)refreshCoverViewHidden;
- (void)setupShadowView;
- (void)setupTabelView;
- (id)addTopButtonWithTitle:(id)arg1 frame:(struct CGRect)arg2 image:(id)arg3 selector:(SEL)arg4 superView:(id)arg5;
- (void)setupNavBar;
- (void)handleLoginAction;
- (void)viewDidLoad;
- (void)parseParameters:(id)arg1;
- (long long)stayviewType;
- (void)tallyEntranceAction;
- (void)goMore;
- (id)imagePicker;
- (void)gotoAlbumList;
- (void)goImagePicker:(long long)arg1;
- (void)goChooseImage;
- (void)goTallyAddImage:(id)arg1;
- (void)goCoupon;
- (void)goAssetManager;
- (void)goBudget;
- (void)goMonthBill;
- (void)VIPPopupViewClick;
- (void)showVIPPopupView;
- (void)knowledgeViewClick;
- (void)showKnowledgePurchaseView;
- (void)addTimesToRecommend;
- (void)recommendClose;
- (void)recommendBtnClick;
- (void)requestRecommendWithCache;
- (void)requestRecommendWithNetwork;
- (void)requestRecommend;
- (id)information;
- (void)wxzfbAction;
- (void)delayRegisterLocalNotification;
- (void)registerLocalNotification;
- (void)requestWealthImage;
- (void)closeMonthBill;
- (_Bool)canShowMonthBill;
- (void)requestBadge;
- (_Bool)showKnowledgeClass;
- (_Bool)showInviteFriends;
- (_Bool)showConditionAlert;
- (void)setupInformation;
- (void)informatioinAction;
- (void)searchAction;
- (void)calendarAction;
- (void)backAction;

@end

