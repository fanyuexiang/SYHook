//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJWebViewJSBridgeHandler.h"

@class CSJUgenInteractionWebViewParamModel;

@interface CSJInteractionWebViewJSBridgeHandler : CSJWebViewJSBridgeHandler
{
    CDUnknownBlockType _closeIframe;
    CSJUgenInteractionWebViewParamModel *_interactionParamModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJUgenInteractionWebViewParamModel *interactionParamModel; // @synthesize interactionParamModel=_interactionParamModel;
@property(copy, nonatomic) CDUnknownBlockType closeIframe; // @synthesize closeIframe=_closeIframe;
- (id)trackTag;
- (id)jsCallNative_resumeRewardCountDown;
- (id)jsCallNative_pauseRewardCountDown;
- (id)jsCallNative_adInfoWithValid:(_Bool *)arg1;
- (id)jsCallNative_getAdsWithParams:(id)arg1;
- (id)buJSB3_resumeRewardCountDownWithViewModel:(id)arg1;
- (id)buJSB3_pauseRewardCountDownWithViewModel:(id)arg1;
- (id)buJSB3_closeWebviewWithViewModel:(id)arg1;
- (id)buJSB3_changeVideoStateWithViewModel:(id)arg1;
- (id)buJSB3_getAdsDataWithViewModel:(id)arg1;
- (void)p_registerJSBridge3;
- (void)p_registChangeVideoState;
- (void)p_registerCloseIframe;
- (void)p_registerResumeRewardCountDown;
- (void)p_registerPauseRewardCountDown;
- (void)p_registerGetAdsData;
- (void)registerInteractionJsBridge;

@end

