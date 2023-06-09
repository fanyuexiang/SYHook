//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseFullScreenViewController.h"

#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"

@class GDTAdViewExposureWithAntiSpamChecker, NSString, UIView;
@protocol GDTVideoEndcardAppearanceProtocol;

@interface GDTCustomFullScreenViewController : GDTBaseFullScreenViewController <GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTClickFacadeDelegate>
{
    UIView<GDTVideoEndcardAppearanceProtocol> *_endcardView;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
}

@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
- (void)setEndcardView:(id)arg1;
- (void).cxx_destruct;
- (id)endcardView;
- (void)GDTfunctionc2KuxD;
- (void)GDTfunctiont2TjKb;
- (void)GDTfunctionf9FpGH;
- (void)GDTfunctiona5niFi:(id)arg1;
- (void)GDTfunctiona3U30I;
- (void)GDTfunctionr1pGyp;
- (void)GDTfunctions4VuM4;
- (void)GDTfunctionl0jnur;
- (void)GDTfunctionm3ITfn;
- (void)GDTfunctiony4SnW5;
- (void)GDTfunctions5EvCf;
- (void)GDTfunctionv74elc:(id)arg1;
- (void)GDTfunctionn7LY4V;
- (void)GDTfunctioni6XLyw;
- (void)GDTfunctiond4adpo;
- (void)GDTfunctionn3Hg6g;
- (void)GDTfunctionb8V1lD;
- (void)GDTfunctionl5xTAW:(id)arg1 clickArea:(long long)arg2;
- (void)GDTfunctionj1gdZO;
- (void)GDTfunctionb4qvLp:(id)arg1;
- (void)GDTfunctionn7rszq;
- (void)GDTfunctiond6EGcX;
- (void)GDTfunctionn2uLoD;
- (void)GDTfunctionc19Wuj;
- (void)GDTfunctiont8VkMo;
- (void)GDTfunctionk7HWOp;
- (void)GDTfunctioni5Q9Nc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

