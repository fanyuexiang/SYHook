//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCWealthClassBaseViewController.h"

@class NSDictionary, NSString, UIView, WCCourseRateView;

@interface WCCourseRateAlertController : WCWealthClassBaseViewController
{
    WCCourseRateView *_rateView;
    UIView *_bgView;
    NSString *_chapterIndexStr;
    NSDictionary *_dataInfo;
    long long _courseID;
    long long _cha_id;
    CDUnknownBlockType _commitFinishHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType commitFinishHandler; // @synthesize commitFinishHandler=_commitFinishHandler;
@property(nonatomic) long long cha_id; // @synthesize cha_id=_cha_id;
@property(nonatomic) long long courseID; // @synthesize courseID=_courseID;
@property(retain, nonatomic) NSDictionary *dataInfo; // @synthesize dataInfo=_dataInfo;
@property(copy, nonatomic) NSString *chapterIndexStr; // @synthesize chapterIndexStr=_chapterIndexStr;
- (void)closeAction;
- (void)commitRateAction;
- (void)tapGestureAction;
- (void)keyboardWillHidden:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

