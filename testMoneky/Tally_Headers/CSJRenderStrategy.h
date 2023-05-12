//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDynamicRenderTimeOutControlServer, CSJRenderEngineViewModel, CSJRenderResultModel, UIView;

@interface CSJRenderStrategy : NSObject
{
    _Bool _haveRenderResult;
    CSJRenderEngineViewModel *_renderEngineViewModel;
    UIView *_containerView;
    CSJRenderResultModel *_renderResultModel;
    CSJDynamicRenderTimeOutControlServer *_timeOutControlServer;
    id _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSJDynamicRenderTimeOutControlServer *timeOutControlServer; // @synthesize timeOutControlServer=_timeOutControlServer;
@property(nonatomic) _Bool haveRenderResult; // @synthesize haveRenderResult=_haveRenderResult;
@property(retain, nonatomic) CSJRenderResultModel *renderResultModel; // @synthesize renderResultModel=_renderResultModel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CSJRenderEngineViewModel *renderEngineViewModel; // @synthesize renderEngineViewModel=_renderEngineViewModel;
- (id)logKeyName;
- (void)reportRenderSuccessWithInfo:(id)arg1;
- (long long)renderType;
- (void)safeDelegate_renderStrategy:(id)arg1 report_webview_time_trackWithParams:(id)arg2;
- (void)safeDelegate_renderStrategy:(id)arg1 interceptArray:(id)arg2;
- (id)safeDelegate_renderStrategy:(id)arg1 renderInteractionModel:(id)arg2 clickExtraInfo:(id)arg3;
- (id)safeDelegate_nativeAdInRenderStrategy:(id)arg1;
- (void)safeDelegate_renderStrategy:(id)arg1 logWithMsg:(id)arg2 isInternal:(_Bool)arg3;
- (void)safeDelegate_renderStrategy:(id)arg1 successView:(id)arg2 error:(id)arg3;
- (long long)playerTotalTime;
- (double)playerCurrentTime;
- (void)refreshWKWebViewIfNeed;
- (void)sendShowToast:(id)arg1;
- (void)sendShowSkipInLiveScene:(_Bool)arg1;
- (void)sendPlayableStateChange:(_Bool)arg1 reduceDuration:(long long)arg2;
- (void)reportMaterialMetaIfNeedWithRelatedMaterialMetaJson:(id)arg1;
- (void)reportShowEventIfNeed;
- (void)detectBlankIfNeed;
- (void)updateWithThemeStatus:(long long)arg1;
- (void)invokeWebEvent:(id)arg1 data:(id)arg2;
- (void)render;
- (id)initWithRenderEngineViewModel:(id)arg1 containerView:(id)arg2;

@end

