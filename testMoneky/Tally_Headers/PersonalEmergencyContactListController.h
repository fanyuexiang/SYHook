//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PersonalEmergencyContactItemButton, UILabel, UIView;

@interface PersonalEmergencyContactListController : UIViewController
{
    long long _fromType;
    PersonalEmergencyContactItemButton *_phoneBtn;
    UIView *_lineView;
    PersonalEmergencyContactItemButton *_mailBtn;
    UILabel *_tipLab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *tipLab; // @synthesize tipLab=_tipLab;
@property(retain, nonatomic) PersonalEmergencyContactItemButton *mailBtn; // @synthesize mailBtn=_mailBtn;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) PersonalEmergencyContactItemButton *phoneBtn; // @synthesize phoneBtn=_phoneBtn;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
- (void)responseNotification:(id)arg1;
- (void)refreshTipLab;
- (void)refreshMailBtn;
- (void)mailBtnAction;
- (void)refreshPhoneBtn;
- (void)phoneBtnAction;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

