//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AssetBaseController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AssetDetailEditAmountContentView, NSString, UIButton, UIPanGestureRecognizer;

@interface AssetDetailEditAmountController : AssetBaseController <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _saveBlock;
    double _viewTop;
    double _colorAlpha;
    UIPanGestureRecognizer *_panGesture;
    UIButton *_allCloseBtn;
    AssetDetailEditAmountContentView *_contentView;
    NSString *_amountVal;
    NSString *_titleVal;
    NSString *_placeHolderVal;
    struct CGPoint _currentPoint;
}

+ (id)presentViewConroller:(id)arg1 title:(id)arg2 placeHolder:(id)arg3 amount:(id)arg4 theme:(id)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *placeHolderVal; // @synthesize placeHolderVal=_placeHolderVal;
@property(copy, nonatomic) NSString *titleVal; // @synthesize titleVal=_titleVal;
@property(copy, nonatomic) NSString *amountVal; // @synthesize amountVal=_amountVal;
@property(retain, nonatomic) AssetDetailEditAmountContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *allCloseBtn; // @synthesize allCloseBtn=_allCloseBtn;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void)saveAction:(id)arg1;
- (void)clickButtonAction:(id)arg1;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dynamicChangeBackgroundColor;
- (void)close;
- (void)show;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panEndAction;
- (void)panGestureAction:(id)arg1;
- (void)setupViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

