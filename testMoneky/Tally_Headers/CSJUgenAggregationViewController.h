//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CSJAdInfoViewModel;
@protocol CSJUgenAggregationLifeCycleProtocol;

@interface CSJUgenAggregationViewController : UIViewController
{
    CSJAdInfoViewModel *_infoViewModel;
    id <CSJUgenAggregationLifeCycleProtocol> _Ran_AdmCta;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSJUgenAggregationLifeCycleProtocol> Ran_AdmCta; // @synthesize Ran_AdmCta=_Ran_AdmCta;
@property(retain, nonatomic) CSJAdInfoViewModel *infoViewModel; // @synthesize infoViewModel=_infoViewModel;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithInfoViewModel:(id)arg1 viewModel:(id)arg2;

@end

