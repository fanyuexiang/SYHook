//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AssetBaseController.h"

@class AssetSelectTableView, NSDictionary;

@interface AssetSelectController : AssetBaseController
{
    AssetSelectTableView *_selectTableView;
    _Bool _needCloseWithAddFinished;
    NSDictionary *_model;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needCloseWithAddFinished; // @synthesize needCloseWithAddFinished=_needCloseWithAddFinished;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void)backAction;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

