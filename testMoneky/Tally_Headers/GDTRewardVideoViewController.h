//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTCustomFullScreenViewController.h"

#import "GDTFullScreenOverlayMediatorViewDelegate-Protocol.h"
#import "GDTRewardAdPresenterProtocol-Protocol.h"

@class GDTRewardVideoAdModel, NSString;

@interface GDTRewardVideoViewController : GDTCustomFullScreenViewController <GDTFullScreenOverlayMediatorViewDelegate, GDTRewardAdPresenterProtocol>
{
    _Bool _playFinished;
    _Bool _hadPlay;
    _Bool _hasLogVideoRmove;
    CDUnknownBlockType exposedCallback;
    CDUnknownBlockType clickedCallback;
    CDUnknownBlockType closedCallback;
    CDUnknownBlockType errorCallback;
    CDUnknownBlockType finishCallback;
    CDUnknownBlockType rewardEffectiveCallBack;
    CDUnknownBlockType renderSuccessCallback;
    CDUnknownBlockType renderFailCallback;
    CDUnknownBlockType logoClickCallback;
    long long _effectiveTime;
}

@property(nonatomic) _Bool hasLogVideoRmove; // @synthesize hasLogVideoRmove=_hasLogVideoRmove;
@property(nonatomic) _Bool hadPlay; // @synthesize hadPlay=_hadPlay;
@property(nonatomic) _Bool playFinished; // @synthesize playFinished=_playFinished;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
@property(copy, nonatomic) CDUnknownBlockType logoClickCallback; // @synthesize logoClickCallback;
@property(copy, nonatomic) CDUnknownBlockType renderFailCallback; // @synthesize renderFailCallback;
@property(copy, nonatomic) CDUnknownBlockType renderSuccessCallback; // @synthesize renderSuccessCallback;
@property(copy, nonatomic) CDUnknownBlockType rewardEffectiveCallBack; // @synthesize rewardEffectiveCallBack;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback;
@property(copy, nonatomic) CDUnknownBlockType closedCallback; // @synthesize closedCallback;
@property(copy, nonatomic) CDUnknownBlockType clickedCallback; // @synthesize clickedCallback;
@property(copy, nonatomic) CDUnknownBlockType exposedCallback; // @synthesize exposedCallback;
- (void).cxx_destruct;
- (id)GDTfunctionw8CBtL:(id)arg1;
- (void)GDTfunctiont5MYIc:(id)arg1;
- (void)GDTfunctionw9UlGM:(id)arg1;
- (void)GDTfunctionu1aWwa:(id)arg1 bodyClicked:(id)arg2 clickAreaType:(long long)arg3;
- (void)GDTfunctionm9Nq7g:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctionl4zmpn:(id)arg1 didRenderFailWithError:(id)arg2;
- (void)GDTfunctiono3hKxO:(id)arg1;
- (id)GDTfunctionl3GyrH;
- (void)GDTfunctioni0LmXm;
- (void)GDTfunctionr5BvRD;
- (void)GDTfunctionq7bKoD:(_Bool)arg1;
- (void)GDTfunctiona9BodP;
- (void)GDTfunctionu2fhVF;
- (void)GDTfunctiond6SHvo:(unsigned long long)arg1;
- (void)GDTfunctionc6ZP0L;
- (void)GDTfunctionp2griK:(double)arg1 totalTime:(double)arg2;
- (void)GDTfunctioni6XLyw;
- (void)GDTfunctiond4adpo;
- (void)GDTfunctionn3Hg6g;
- (void)GDTfunctionb8V1lD;
- (void)GDTfunctionb4qvLp:(id)arg1;
- (void)GDTfunctionn7rszq;
- (void)GDTfunctionj1gdZO;
- (void)GDTfunctionl5xTAW:(id)arg1 clickArea:(long long)arg2;
- (void)GDTfunctionc19Wuj;
- (void)GDTfunctionl9DO8u;
- (void)GDTfunctionq7aEX9:(id)arg1 clickArea:(long long)arg2;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(retain, nonatomic) GDTRewardVideoAdModel *adModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

