//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTDrawableWebViewDelegate-Protocol.h"
#import "GDTPlayerControlProtocol-Protocol.h"

@class GDTAdBaseModel, GDTBizFeedVideoPlayerView, GDTDrawableWebView, GDTPlayer, NSString;
@protocol GDTLandpageVideoModuleViewDelegate;

@interface GDTLandingPageVideoModuleView : UIView <GDTDrawableWebViewDelegate, GDTPlayerControlProtocol>
{
    _Bool _videoWindowEnable;
    _Bool _landpageHasShownFullScreen;
    GDTPlayer *player;
    id <GDTLandpageVideoModuleViewDelegate> _delegate;
    GDTAdBaseModel *_adModel;
    double _videoAreaMinHeight;
    double _videoAreaMaxHeight;
    double _videoAdsorbRatio;
    long long _videoMoveType;
    GDTBizFeedVideoPlayerView *_videoPlayerView;
    GDTDrawableWebView *_webviewControl;
    struct CGRect _videoOriginFrame;
    struct CGRect _videoWindowOriginFrame;
}

@property(nonatomic) struct CGRect videoWindowOriginFrame; // @synthesize videoWindowOriginFrame=_videoWindowOriginFrame;
@property(nonatomic) struct CGRect videoOriginFrame; // @synthesize videoOriginFrame=_videoOriginFrame;
@property(retain, nonatomic) GDTDrawableWebView *webviewControl; // @synthesize webviewControl=_webviewControl;
@property(retain, nonatomic) GDTBizFeedVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(nonatomic) _Bool landpageHasShownFullScreen; // @synthesize landpageHasShownFullScreen=_landpageHasShownFullScreen;
@property(nonatomic) _Bool videoWindowEnable; // @synthesize videoWindowEnable=_videoWindowEnable;
@property(nonatomic) long long videoMoveType; // @synthesize videoMoveType=_videoMoveType;
@property(nonatomic) double videoAdsorbRatio; // @synthesize videoAdsorbRatio=_videoAdsorbRatio;
@property(nonatomic) double videoAreaMaxHeight; // @synthesize videoAreaMaxHeight=_videoAreaMaxHeight;
@property(nonatomic) double videoAreaMinHeight; // @synthesize videoAreaMinHeight=_videoAreaMinHeight;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) __weak id <GDTLandpageVideoModuleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect)GDTfunctiont93kX1;
- (struct CGRect)GDTfunctiond41KDa:(double)arg1;
- (struct CGRect)GDTfunctionv6AIT5;
- (void)GDTfunctionv3OM42:(double)arg1;
- (void)GDTfunctionv5kx86;
- (double)GDTfunctione2ZyKH;
- (double)GDTfunctionz3BXJx;
- (void)GDTfunctione2IDBg:(id)arg1 clicked:(id)arg2;
- (void)GDTfunctione2IDBg:(id)arg1 autoAdsorbedSpace:(double)arg2;
- (void)GDTfunctione2IDBg:(id)arg1 slidingSpace:(double)arg2;
- (void)GDTfunctionv5VBfo;
- (void)GDTfunctione7c5fP;
- (void)GDTfunctionq52YMM:(id)arg1 error:(id)arg2;
- (void)GDTfunctionx46oKV:(id)arg1;
- (void)GDTfunctionz0w6fl;
- (void)GDTfunctionk67YkO;
- (void)GDTfunctionm6oEMN:(id)arg1;
- (void)GDTfunctiong2OvFN:(struct CGRect)arg1;
- (void)GDTfunctionz4Qyqb:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

