//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTNativeExpressProAdViewDelegate-Protocol.h"
#import "GDTUnifiedInterstitialAdContentProtocol-Protocol.h"

@class GDTAdParams, GDTNativeExpressProAdView, GDTUnifiedTemplateModel, NSString;
@protocol GDTInterstitialViewManagerProtocol, GDTUnifiedInterstitialAdContentDelegate;

@interface GDTInterstitialAdExpressContent : NSObject <GDTNativeExpressProAdViewDelegate, GDTUnifiedInterstitialAdContentProtocol>
{
    _Bool _showedBuiltinEndCard;
    _Bool _hasBuiltinEndCard;
    id <GDTInterstitialViewManagerProtocol> _viewManager;
    id <GDTUnifiedInterstitialAdContentDelegate> _delegate;
    GDTNativeExpressProAdView *_adView;
    id <GDTUnifiedInterstitialAdContentDelegate> _delegateProxy;
    GDTUnifiedTemplateModel *_adModel;
    GDTAdParams *_adParams;
}

@property(nonatomic) _Bool hasBuiltinEndCard; // @synthesize hasBuiltinEndCard=_hasBuiltinEndCard;
@property(nonatomic) _Bool showedBuiltinEndCard; // @synthesize showedBuiltinEndCard=_showedBuiltinEndCard;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(retain, nonatomic) GDTUnifiedTemplateModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) id <GDTUnifiedInterstitialAdContentDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) GDTNativeExpressProAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <GDTInterstitialViewManagerProtocol> viewManager; // @synthesize viewManager=_viewManager;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GDTUnifiedInterstitialAdContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)GDTfunctionz1yQSN:(id)arg1;
- (void)gdt_NativeExpressProAdViewVideoDidFinished:(id)arg1;
- (void)gdt_NativeExpressProAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(id)arg1;
- (void)gdt_NativeExpressProAdView:(id)arg1 clickWithAntiSpamInfo:(id)arg2 CTAType:(long long)arg3;
- (void)gdt_NativeExpressProAdView:(id)arg1 exposureWithUrl:(id)arg2;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderFail:(id)arg1;
- (void)GDTfunctionp7Jzkr:(id)arg1;
- (void)GDTfunctionp1uOTN;
- (void)GDTfunctionw6qU7h;
- (void)GDTfunctionb3QQUE;
- (double)videoPlayTime;
- (void)autoPlay;
- (id)GDTfunctionw6dI7T;
- (id)player;
- (id)contentView;
- (void)render;
- (void)GDTfunctioni582bW;
- (id)initLk0QkxC:(id)arg1 adParams:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

