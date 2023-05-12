//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIImage, UIScrollView, UIViewController;

@interface FCXShareManager : UIView
{
    UIView *_bottomView;
    double _bottomHeight;
    UIButton *_cancelButton;
    double _bottomSpaceHeight;
    NSArray *_specifiedPlatforms;
    NSArray *_customPlatforms;
    NSArray *_secondPlatforms;
    NSArray *_customSecondPlatforms;
    UIScrollView *_topBgScrollView;
    UIView *_rowLine;
    _Bool _appendPlatform;
    _Bool _twoRowsShare;
    UIViewController *_presentedController;
    NSString *_shareTitle;
    NSString *_shareContent;
    NSString *_wxTimelineTitle;
    NSString *_shareURL;
    NSString *_wShareURL;
    UIImage *_shareImage;
    UIImage *_sinaShareImage;
    NSString *_shareImageURL;
    NSString *_musicURL;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _reportHandle;
    CDUnknownBlockType _deleteHandle;
    CDUnknownBlockType _copyHandle;
    NSString *_app;
    long long _shareType;
    CDUnknownBlockType _shareSuccessBlock;
    CDUnknownBlockType _shareClickBlock;
    CDUnknownBlockType _willShareToPlatformHandle;
    UIScrollView *_bottomBgScrollView;
}

+ (void)dismissView;
+ (_Bool)openWeiboApp;
+ (_Bool)openQQ;
+ (_Bool)openWXApp;
+ (_Bool)isWeiboAppInstalled;
+ (_Bool)isQQInstalled;
+ (_Bool)isWXAppInstalled;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *bottomBgScrollView; // @synthesize bottomBgScrollView=_bottomBgScrollView;
@property(copy, nonatomic) CDUnknownBlockType willShareToPlatformHandle; // @synthesize willShareToPlatformHandle=_willShareToPlatformHandle;
@property(nonatomic) _Bool twoRowsShare; // @synthesize twoRowsShare=_twoRowsShare;
@property(nonatomic) _Bool appendPlatform; // @synthesize appendPlatform=_appendPlatform;
@property(copy, nonatomic) CDUnknownBlockType shareClickBlock; // @synthesize shareClickBlock=_shareClickBlock;
@property(copy, nonatomic) CDUnknownBlockType shareSuccessBlock; // @synthesize shareSuccessBlock=_shareSuccessBlock;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(copy, nonatomic) NSString *app; // @synthesize app=_app;
@property(copy, nonatomic) CDUnknownBlockType copyHandle; // @synthesize copyHandle=_copyHandle;
@property(copy, nonatomic) CDUnknownBlockType deleteHandle; // @synthesize deleteHandle=_deleteHandle;
@property(copy, nonatomic) CDUnknownBlockType reportHandle; // @synthesize reportHandle=_reportHandle;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) NSString *musicURL; // @synthesize musicURL=_musicURL;
@property(retain, nonatomic) NSString *shareImageURL; // @synthesize shareImageURL=_shareImageURL;
@property(retain, nonatomic) UIImage *sinaShareImage; // @synthesize sinaShareImage=_sinaShareImage;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) NSString *wShareURL; // @synthesize wShareURL=_wShareURL;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSString *wxTimelineTitle; // @synthesize wxTimelineTitle=_wxTimelineTitle;
@property(retain, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(nonatomic) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
- (id)appendPlatformShareURL:(long long)arg1;
- (id)getShortShareContent;
- (void)shareToPlatform:(long long)arg1;
- (void)clearCutomPlatformArray;
- (void)shareButtonAction:(id)arg1;
- (void)shareToSpecifiedPlatforms:(id)arg1;
- (void)shareToSms;
- (void)shareToSina;
- (void)shareToQzone;
- (void)shareToQQ;
- (void)shareToWXTimeline;
- (void)shareToWXSession;
- (void)shareMusicToQQWithType:(int)arg1;
- (void)shareMusicToWXWithType:(int)arg1;
- (void)showMusicShare;
- (void)showImageShare;
- (void)showInviteFriendsShareView;
- (void)dismissView;
- (void)adjustRowStyle;
- (void)showTwoRowsCustomShareWithSecondPlatforms:(id)arg1;
- (void)showTwoRowsShareWithSecondPlatforms:(id)arg1;
- (void)showCustomShareWithPlatforms:(id)arg1;
- (void)showReportCopyShareView;
- (void)showShareView;
- (void)tapAction;
- (id)createCustomButton:(struct CGRect)arg1 title:(id)arg2 normalImage:(id)arg3 highlightedImage:(id)arg4 customInfo:(id)arg5;
- (id)createShareButtonWithFrame:(struct CGRect)arg1 tag:(int)arg2 title:(id)arg3 normalImage:(id)arg4 highlightedImage:(id)arg5 superView:(id)arg6 customInfo:(id)arg7;
- (id)createPlatformShareButtonWithFrame:(struct CGRect)arg1 platform:(long long)arg2 customShareIndex:(long long)arg3 customInfo:(id)arg4 superView:(id)arg5;
- (void)createCustomlatformButtonWithButtonWidth:(double)arg1 buttonHeight:(double)arg2 space:(double)arg3;
- (void)createSpecialPlatformButtonWithButtonWidth:(double)arg1 buttonHeight:(double)arg2 space:(double)arg3;
- (void)createShareButtons;
- (void)judgeBottomHeight;
- (id)init;

@end
