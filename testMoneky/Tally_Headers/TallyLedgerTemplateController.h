//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, TallyLedgerTemplateContentView, UIButton, UIPanGestureRecognizer;

@interface TallyLedgerTemplateController : UIViewController <UIGestureRecognizerDelegate>
{
    double _viewTop;
    double _duration;
    double _perDuration;
    double _colorAlpha;
    double _perColorAlpha;
    CDUnknownBlockType _selectBlock;
    CDUnknownBlockType _joinBlock;
    CDUnknownBlockType _joinBuyVIPBlock;
    UIPanGestureRecognizer *_panGesture;
    UIButton *_allCloseBtn;
    TallyLedgerTemplateContentView *_contentView;
    struct CGPoint _currentPoint;
}

+ (id)presentViewConroller:(id)arg1 theme:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TallyLedgerTemplateContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *allCloseBtn; // @synthesize allCloseBtn=_allCloseBtn;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(copy, nonatomic) CDUnknownBlockType joinBuyVIPBlock; // @synthesize joinBuyVIPBlock=_joinBuyVIPBlock;
@property(copy, nonatomic) CDUnknownBlockType joinBlock; // @synthesize joinBlock=_joinBlock;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) double perColorAlpha; // @synthesize perColorAlpha=_perColorAlpha;
@property(nonatomic) double colorAlpha; // @synthesize colorAlpha=_colorAlpha;
@property(nonatomic) double perDuration; // @synthesize perDuration=_perDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double viewTop; // @synthesize viewTop=_viewTop;
- (void)clickButtonAction:(id)arg1;
- (void)dynamicChangeBackgroundColor;
- (double)recalculateCloseAnimationDuration;
- (double)recalculateShowAnimationDuration;
- (void)close;
- (void)show;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panEndAction;
- (void)panGestureAction:(id)arg1;
- (void)dismissWithNoAnimationAction:(CDUnknownBlockType)arg1;
- (void)setupViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

