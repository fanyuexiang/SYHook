//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FamilyViewController.h"

@class NTallyModel, UIView;

@interface FamilyDetailShareViewController : FamilyViewController
{
    UIView *_shareView;
    NTallyModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NTallyModel *model; // @synthesize model=_model;
- (void)dealloc;
- (void)dismissAction;
- (void)setupShareView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

