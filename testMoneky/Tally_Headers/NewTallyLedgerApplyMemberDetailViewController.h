//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UIButton, UILabel, UIScrollView, UIView;

@interface NewTallyLedgerApplyMemberDetailViewController : UIViewController
{
    UIScrollView *_contentScroll;
    UIView *_whitebg;
    UILabel *_roleLabel;
    UILabel *_rightTitleLabel;
    UIView *_rightsdesView;
    UIButton *_ignorBtn;
    UIButton *_agreeBtn;
    long long _chooseroleid;
    NSDictionary *_memberInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *memberInfo; // @synthesize memberInfo=_memberInfo;
- (void)refreshRightView;
- (void)clickRole;
- (void)agreeAction:(long long)arg1;
- (void)agreeClick;
- (void)ignorClick;
- (void)setupUI;
- (void)requestDetail;
- (void)viewWillAppear:(_Bool)arg1;
- (void)backAction;
- (void)viewDidLoad;

@end
