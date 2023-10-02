//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CSJDislikeNewInputViewDelegate-Protocol.h"
#import "CSJDislikeNewOptionalCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CSJDislikeNewInputView, CSJMaterialMeta, NSArray, NSString, UIImageView, UITableView, UIView;

@interface CSJDislikeNewViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CSJDislikeNewOptionalCellDelegate, CSJDislikeNewInputViewDelegate>
{
    CDUnknownBlockType _dislikeResultBlock;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _dismissCompletionBlock;
    NSArray *_Ads_IconLock;
    UIView *_backgroundView;
    UITableView *_tableView;
    UIImageView *_MIT_CtaXzj;
    double _You_CharOut;
    CSJDislikeNewInputView *_dislikeNewInputView;
    CSJMaterialMeta *_meta;
    long long _A2_HashTmp;
    struct CGRect _startFrame;
}

- (void).cxx_destruct;
@property(nonatomic) long long A2_HashTmp; // @synthesize A2_HashTmp=_A2_HashTmp;
@property(retain, nonatomic) CSJMaterialMeta *meta; // @synthesize meta=_meta;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) CSJDislikeNewInputView *dislikeNewInputView; // @synthesize dislikeNewInputView=_dislikeNewInputView;
@property(nonatomic) double You_CharOut; // @synthesize You_CharOut=_You_CharOut;
@property(retain, nonatomic) UIImageView *MIT_CtaXzj; // @synthesize MIT_CtaXzj=_MIT_CtaXzj;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *Ads_IconLock; // @synthesize Ads_IconLock=_Ads_IconLock;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionBlock; // @synthesize dismissCompletionBlock=_dismissCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType dislikeResultBlock; // @synthesize dislikeResultBlock=_dislikeResultBlock;
- (void)close;
- (void)Ms_DiffIv:(id)arg1;
- (void)YES_Md5Hash:(id)arg1;
- (void)Nil_DicIs:(struct CGSize)arg1;
- (void)keyboardDidHideInDislikeNewInputView:(id)arg1;
- (void)keyboardWillHideInDislikeNewInputView:(id)arg1;
- (void)Iv_MetaStr:(id)arg1;
- (void)keyboardWillShowInDislikeNewInputView:(id)arg1;
- (void)dislikeNewInputView:(id)arg1 inputText:(id)arg2;
- (id)containerViewInDislikeNewInputView:(id)arg1;
- (void)dislikeNewOptionalCell:(id)arg1 selectedDislikeWords:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)Path_EnumLine:(id)arg1;
- (void)backgroundViewAction:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initLRect_ComOs:(id)arg1 startFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

