//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABU_BUSplashAdDelegate-Protocol.h"
#import "ABU_BUSplashCardDelegate-Protocol.h"
#import "ABU_BUSplashZoomOutDelegate-Protocol.h"

@class ABUCsjSplashAdapter, NSString;

@interface ABUCsjNewSplashAdapterReplacer : NSObject <ABU_BUSplashAdDelegate, ABU_BUSplashZoomOutDelegate, ABU_BUSplashCardDelegate>
{
    _Bool _didCallbackClose;
    _Bool _hasShowSplashView;
    _Bool _hasClickZoomOutView;
    ABUCsjSplashAdapter *_adapter;
    long long _splashStatus;
}

- (void).cxx_destruct;
@property(nonatomic) long long splashStatus; // @synthesize splashStatus=_splashStatus;
@property(nonatomic) _Bool hasClickZoomOutView; // @synthesize hasClickZoomOutView=_hasClickZoomOutView;
@property(nonatomic) _Bool hasShowSplashView; // @synthesize hasShowSplashView=_hasShowSplashView;
@property(nonatomic) _Bool didCallbackClose; // @synthesize didCallbackClose=_didCallbackClose;
@property(nonatomic) __weak ABUCsjSplashAdapter *adapter; // @synthesize adapter=_adapter;
- (void)splashCardViewDidClose:(id)arg1;
- (void)splashCardViewDidClick:(id)arg1;
- (void)splashCardReadyToShow:(id)arg1;
- (void)splashZoomOutViewDidClose:(id)arg1;
- (void)splashZoomOutViewDidClick:(id)arg1;
- (void)splashZoomOutReadyToShow:(id)arg1;
- (void)splashVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)splashDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)splashAdDidClick:(id)arg1;
- (void)splashAdDidClose:(id)arg1 closeType:(long long)arg2;
- (void)splashAdDidShow:(id)arg1;
- (void)splashAdWillShow:(id)arg1;
- (void)splashAdViewControllerDidClose:(id)arg1;
- (void)splashAdRenderFail:(id)arg1 error:(id)arg2;
- (void)splashAdRenderSuccess:(id)arg1;
- (void)splashAdLoadFail:(id)arg1 error:(id)arg2;
- (void)splashAdLoadSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
