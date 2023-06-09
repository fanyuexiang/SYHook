//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaiduMobAdComponentView.h"

@class NSMutableArray, NSMutableDictionary, NSString, UILabel, UIView;
@protocol BaiduMobAdAnswerCardComponentDelegate;

@interface BaiduMobAdAnswerCardComponent : BaiduMobAdComponentView
{
    _Bool _isStop;
    int _cloudReduceTime;
    int _selectRightAnswerIndex;
    id <BaiduMobAdAnswerCardComponentDelegate> _delegate;
    NSString *_rightAnswer;
    NSMutableDictionary *_l_child_view;
    NSMutableArray *_errorAnswer;
    NSString *_errorText;
    NSString *_rewardText;
    UILabel *_answerCardRewardLabel;
    UIView *_firstAnswerView;
    UIView *_secondAnswerView;
    UILabel *_firstAnswerLabel;
    UILabel *_secondAnswerLabel;
    UIView *_answerCardCon;
    UIView *_answerResultCon;
    UIView *_answerResultErrorView;
    UIView *_answerResultRightView;
    UILabel *_answerResultRightText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStop; // @synthesize isStop=_isStop;
@property(nonatomic) int selectRightAnswerIndex; // @synthesize selectRightAnswerIndex=_selectRightAnswerIndex;
@property(retain, nonatomic) UILabel *answerResultRightText; // @synthesize answerResultRightText=_answerResultRightText;
@property(retain, nonatomic) UIView *answerResultRightView; // @synthesize answerResultRightView=_answerResultRightView;
@property(retain, nonatomic) UIView *answerResultErrorView; // @synthesize answerResultErrorView=_answerResultErrorView;
@property(retain, nonatomic) UIView *answerResultCon; // @synthesize answerResultCon=_answerResultCon;
@property(retain, nonatomic) UIView *answerCardCon; // @synthesize answerCardCon=_answerCardCon;
@property(retain, nonatomic) UILabel *secondAnswerLabel; // @synthesize secondAnswerLabel=_secondAnswerLabel;
@property(retain, nonatomic) UILabel *firstAnswerLabel; // @synthesize firstAnswerLabel=_firstAnswerLabel;
@property(retain, nonatomic) UIView *secondAnswerView; // @synthesize secondAnswerView=_secondAnswerView;
@property(retain, nonatomic) UIView *firstAnswerView; // @synthesize firstAnswerView=_firstAnswerView;
@property(retain, nonatomic) UILabel *answerCardRewardLabel; // @synthesize answerCardRewardLabel=_answerCardRewardLabel;
@property(retain, nonatomic) NSString *rewardText; // @synthesize rewardText=_rewardText;
@property(retain, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(retain, nonatomic) NSMutableArray *errorAnswer; // @synthesize errorAnswer=_errorAnswer;
@property(retain, nonatomic) NSMutableDictionary *l_child_view; // @synthesize l_child_view=_l_child_view;
@property(nonatomic) int cloudReduceTime; // @synthesize cloudReduceTime=_cloudReduceTime;
@property(retain, nonatomic) NSString *rightAnswer; // @synthesize rightAnswer=_rightAnswer;
@property(nonatomic) __weak id <BaiduMobAdAnswerCardComponentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showResultToastView:(_Bool)arg1;
- (void)answerError;
- (void)answerRight;
- (void)exitQuitClic;
- (void)clickSelectAnswer:(id)arg1;
- (void)inputAnswer:(int)arg1 labelView:(id)arg2;
- (void)successCreatComponentView:(id)arg1 model:(id)arg2;
- (void)renderComponentViewWithModel:(id)arg1 baseView:(id)arg2;
- (void)creatComponentViewWithModel:(id)arg1 baseView:(id)arg2;
- (void)destoryAnswerCardComponent;
- (void)closeAnswerCardComponent;
- (void)addNormalAnim:(id)arg1;
- (id)getAnswerCardChildViews;
- (void)renderAnswerCardComponent;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 model:(id)arg3;

@end

