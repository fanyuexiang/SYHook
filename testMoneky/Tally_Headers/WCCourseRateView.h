//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UITextView, WCCourseRateLevelView;

@interface WCCourseRateView : UIView
{
    double _offsetY;
    UILabel *_courseContentTitleLabel;
    UILabel *_classServerLevelTitleLabel;
    WCCourseRateLevelView *_courseContentLevelView;
    WCCourseRateLevelView *_classServerLevelView;
    UITextView *_textView;
    UIButton *_commitBtn;
    _Bool _banban_eva_status;
    double _rateSize;
    double _rateSpace;
    double _edgeSpace;
    double _rowSpace;
    double _starLeftSpace;
    CDUnknownBlockType _commitHandler;
}

+ (void)commitRateWithParameters:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool banban_eva_status; // @synthesize banban_eva_status=_banban_eva_status;
@property(copy, nonatomic) CDUnknownBlockType commitHandler; // @synthesize commitHandler=_commitHandler;
@property(nonatomic) double starLeftSpace; // @synthesize starLeftSpace=_starLeftSpace;
@property(nonatomic) double rowSpace; // @synthesize rowSpace=_rowSpace;
@property(nonatomic) double edgeSpace; // @synthesize edgeSpace=_edgeSpace;
@property(nonatomic) double rateSpace; // @synthesize rateSpace=_rateSpace;
@property(nonatomic) double rateSize; // @synthesize rateSize=_rateSize;
- (void)endEditeWith:(id)arg1;
- (void)endEditeWith:(long long)arg1 with:(long long)arg2 with:(id)arg3;
@property(readonly, copy, nonatomic) NSString *rateContent;
@property(nonatomic) long long classServerLevel;
@property(nonatomic) long long courseContentevel;
- (void)commitAction;
- (void)selectedRateLevelHandler;
- (void)addCommitBtnWithSize:(struct CGSize)arg1 topSpace:(double)arg2 fontSize:(double)arg3;
- (void)addRateContentViewWithHeight:(double)arg1 fontSize:(double)arg2;
- (id)addRateLevelViewWithTitle:(id)arg1;
- (void)addRaeLeveView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
