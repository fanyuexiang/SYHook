//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PersonalAccountSecurityHeaderView, PersonalAccountSecurityItemButton, UIScrollView, UIView, _TtC5Tally15AppLoginManager;

@interface PersonalAccountSecurityController : UIViewController
{
    UIScrollView *_listScroll;
    UIView *_listContentView;
    PersonalAccountSecurityHeaderView *_headerView;
    PersonalAccountSecurityItemButton *_phoneButton;
    PersonalAccountSecurityItemButton *_wxButton;
    PersonalAccountSecurityItemButton *_appleButton;
    PersonalAccountSecurityItemButton *_contactButton;
    PersonalAccountSecurityItemButton *_loginStatusButton;
    _TtC5Tally15AppLoginManager *_appleLoginManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC5Tally15AppLoginManager *appleLoginManager; // @synthesize appleLoginManager=_appleLoginManager;
@property(retain, nonatomic) PersonalAccountSecurityItemButton *loginStatusButton; // @synthesize loginStatusButton=_loginStatusButton;
@property(retain, nonatomic) PersonalAccountSecurityItemButton *contactButton; // @synthesize contactButton=_contactButton;
@property(retain, nonatomic) PersonalAccountSecurityItemButton *appleButton; // @synthesize appleButton=_appleButton;
@property(retain, nonatomic) PersonalAccountSecurityItemButton *wxButton; // @synthesize wxButton=_wxButton;
@property(retain, nonatomic) PersonalAccountSecurityItemButton *phoneButton; // @synthesize phoneButton=_phoneButton;
@property(retain, nonatomic) PersonalAccountSecurityHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *listContentView; // @synthesize listContentView=_listContentView;
@property(retain, nonatomic) UIScrollView *listScroll; // @synthesize listScroll=_listScroll;
- (void)responseNotification:(id)arg1;
- (void)registerNotification;
- (void)refreshLoginStatusButton;
- (void)refreshContactButton;
- (void)contactButtonAction;
- (void)refreshAppleButton;
- (void)appleButtonAction;
- (void)refreshWXButton;
- (void)wxButtonAction;
- (void)refreshPhoneButton;
- (void)phoneButtonAction;
- (void)refreshHeaderView;
- (void)refreshViews;
- (void)setupViews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
