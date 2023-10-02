//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJMaterialMeta, CSJNativeExpressVideoAdContext, CSJRewardAlertView, CSJRewardedRetainAlertConfig, CSJRewardedRetainAlertUgenRender, NSString, UIView;

@interface CSJRewardedRetainAlertManager : NSObject
{
    _Bool _useBackupAlert;
    _Bool _didRemoveSKOverlay;
    CSJMaterialMeta *_material;
    NSString *_slotId;
    long long _rewardLeftTime;
    long long _didWatchTime;
    CSJNativeExpressVideoAdContext *_context;
    CDUnknownBlockType _confirm;
    CDUnknownBlockType _cancel;
    long long _renderIndex;
    CSJRewardedRetainAlertUgenRender *_alertUgenRender;
    UIView *_ugenAlertView;
    CSJRewardAlertView *_backupAlertView;
    UIView *_parentView;
    CSJRewardedRetainAlertConfig *_renderSuccessConfig;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didRemoveSKOverlay; // @synthesize didRemoveSKOverlay=_didRemoveSKOverlay;
@property(retain, nonatomic) CSJRewardedRetainAlertConfig *renderSuccessConfig; // @synthesize renderSuccessConfig=_renderSuccessConfig;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) CSJRewardAlertView *backupAlertView; // @synthesize backupAlertView=_backupAlertView;
@property(retain, nonatomic) UIView *ugenAlertView; // @synthesize ugenAlertView=_ugenAlertView;
@property(retain, nonatomic) CSJRewardedRetainAlertUgenRender *alertUgenRender; // @synthesize alertUgenRender=_alertUgenRender;
@property(nonatomic) long long renderIndex; // @synthesize renderIndex=_renderIndex;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType confirm; // @synthesize confirm=_confirm;
@property(retain, nonatomic) CSJNativeExpressVideoAdContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool useBackupAlert; // @synthesize useBackupAlert=_useBackupAlert;
@property(nonatomic) long long didWatchTime; // @synthesize didWatchTime=_didWatchTime;
@property(nonatomic) long long rewardLeftTime; // @synthesize rewardLeftTime=_rewardLeftTime;
@property(copy, nonatomic) NSString *slotId; // @synthesize slotId=_slotId;
@property(retain, nonatomic) CSJMaterialMeta *material; // @synthesize material=_material;
- (id)reportAdExtraDict;
- (void)renderNativeBackupView;
- (id)ugenModelWithConfig:(id)arg1;
- (void)onCancelEvent:(id)arg1;
- (void)onConfirmEvent:(id)arg1;
- (void)renderAlertWithFinish:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1;
- (id)initWithConfirm:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;

@end
