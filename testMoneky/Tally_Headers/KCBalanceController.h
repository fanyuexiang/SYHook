//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KCBaseController.h"

@class CBAttributedLabel, KCModel, UIButton;

@interface KCBalanceController : KCBaseController
{
    UIButton *_rechargeBtn;
    UIButton *_paymentBtn;
    CBAttributedLabel *_balanceLabel;
    KCModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KCModel *model; // @synthesize model=_model;
- (void)paymentAction;
- (void)rechargeAction;
- (void)addTopContentView:(id)arg1;
- (id)addTopBgView;
- (void)updateBalance;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
