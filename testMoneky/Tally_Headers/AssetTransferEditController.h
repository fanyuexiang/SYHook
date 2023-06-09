//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AssetBaseController.h"

@class AssetAccountTransferRecordModel, AssetTransferEditContentView, NSString, UIButton;

@interface AssetTransferEditController : AssetBaseController
{
    AssetAccountTransferRecordModel *_transferModel;
    NSString *_out_aid;
    NSString *_in_aid;
    CDUnknownBlockType _closeBlock;
    double _viewTop;
    double _duration;
    double _perDuration;
    double _colorAlpha;
    double _perColorAlpha;
    UIButton *_allCloseBtn;
    AssetTransferEditContentView *_contentView;
    NSString *_tf_id;
}

+ (id)skPresentViewConroller:(id)arg1 outAid:(id)arg2 inAid:(id)arg3 transfer:(id)arg4 theme:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tf_id; // @synthesize tf_id=_tf_id;
@property(retain, nonatomic) AssetTransferEditContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *allCloseBtn; // @synthesize allCloseBtn=_allCloseBtn;
@property(nonatomic) double perColorAlpha; // @synthesize perColorAlpha=_perColorAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double perDuration; // @synthesize perDuration=_perDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) NSString *in_aid; // @synthesize in_aid=_in_aid;
@property(copy, nonatomic) NSString *out_aid; // @synthesize out_aid=_out_aid;
@property(retain, nonatomic) AssetAccountTransferRecordModel *transferModel; // @synthesize transferModel=_transferModel;
- (double)contentViewHeight;
- (void)chooseAccountAction:(_Bool)arg1;
- (void)clickButtonAction:(id)arg1;
- (void)dynamicChangeBackgroundColor;
- (double)recalculateCloseAnimationDuration;
- (double)recalculateShowAnimationDuration;
- (void)close;
- (void)show;
- (void)submitAction:(id)arg1 date:(id)arg2;
- (void)setupViews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

@end

