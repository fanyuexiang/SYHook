//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdContentViewCheckerDelegate-Protocol.h"

@class GDTAdViewExposeRuleChecker, GDTAntiSpamBusinessData, NSString, UIView;
@protocol GDTAdViewExposureWithAntiSpamCheckerDelegate;

@interface GDTAdViewExposureWithAntiSpamChecker : NSObject <GDTAdContentViewCheckerDelegate>
{
    _Bool _stopCheckerWhenExposed;
    double _checkInterval;
    id <GDTAdViewExposureWithAntiSpamCheckerDelegate> _delegate;
    double _visibleRatio;
    GDTAdViewExposeRuleChecker *_checker;
    UIView *_adView;
    UIView *_referenceView;
    NSString *_exposeUrl;
    long long _adType;
    NSString *_finalExposedUrl;
    GDTAntiSpamBusinessData *_businessData;
}

@property(retain, nonatomic) GDTAntiSpamBusinessData *businessData; // @synthesize businessData=_businessData;
@property(copy, nonatomic) NSString *finalExposedUrl; // @synthesize finalExposedUrl=_finalExposedUrl;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *exposeUrl; // @synthesize exposeUrl=_exposeUrl;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) GDTAdViewExposeRuleChecker *checker; // @synthesize checker=_checker;
@property(nonatomic) double visibleRatio; // @synthesize visibleRatio=_visibleRatio;
@property(nonatomic) _Bool stopCheckerWhenExposed; // @synthesize stopCheckerWhenExposed=_stopCheckerWhenExposed;
@property(nonatomic) __weak id <GDTAdViewExposureWithAntiSpamCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double checkInterval; // @synthesize checkInterval=_checkInterval;
- (void).cxx_destruct;
- (void)GDTfunctionb5eWAg;
- (void)GDTfunctioni2MwHm;
- (void)GDTfunctiona64xsX;
- (void)GDTfunctiono5rvLB;
- (void)GDTfunctione3Ss9s;
- (void)GDTfunctionf342sk;
- (void)GDTfunctionf1HjMH;
- (_Bool)GDTfunctiony2Wpds:(id)arg1 exposeUrl:(id)arg2 sdkAdType:(long long)arg3 businessData:(id)arg4;
- (void)GDTfunctiont8mLhb:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

