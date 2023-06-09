//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCWealthClassBaseViewController.h"

@class NSArray, NSMutableDictionary, UIView;

@interface WCXBQuestionnaireController : WCWealthClassBaseViewController
{
    UIView *_progressView;
    NSMutableDictionary *_subjectViewDict;
    NSArray *_subjectArray;
    long long _currentIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *subjectArray; // @synthesize subjectArray=_subjectArray;
- (void)requestSubject:(_Bool)arg1;
- (void)commitAction:(long long)arg1;
- (void)lastSubjectAction;
- (void)seartQuestionnaireAction;
- (void)navBackAction;
- (void)setupProgressView;
- (void)setupNextSubjectViewWithIndex:(long long)arg1;
- (void)setupStartView;
- (void)setupNavBackItem;
- (id)cancelCloseMiniProgramsTitle;
- (void)viewDidLoad;

@end

