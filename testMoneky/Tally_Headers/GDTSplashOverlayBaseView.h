//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTSplashAdModel, GDTSplashSkipView;
@protocol GDTSplashViewDelegate;

@interface GDTSplashOverlayBaseView : UIView
{
    GDTSplashAdModel *_adModel;
    UIView *_adProviderView;
    GDTSplashSkipView *_skipView;
    id <GDTSplashViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GDTSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GDTSplashSkipView *skipView; // @synthesize skipView=_skipView;
@property(retain, nonatomic) UIView *adProviderView; // @synthesize adProviderView=_adProviderView;
@property(retain, nonatomic) GDTSplashAdModel *adModel; // @synthesize adModel=_adModel;
- (void).cxx_destruct;
- (id)GDTfunctionh292Al;
- (void)GDTfunctionx6O09O;
- (void)GDTfunctionp4mTMU;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)GDTfunctionb4yJN9;
- (id)initLk0QkxC:(id)arg1 adProviderView:(id)arg2 skipView:(id)arg3;

@end
