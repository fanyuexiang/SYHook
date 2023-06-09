//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCWealthClassBaseViewController.h"

#import "WCFinalExamViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface WCFinalExamViewController : WCWealthClassBaseViewController <WCFinalExamViewDelegate>
{
    long long _course_id;
    NSString *_course_name;
    NSMutableArray *_questionArray;
    NSMutableArray *_examviewArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *examviewArray; // @synthesize examviewArray=_examviewArray;
@property(retain, nonatomic) NSMutableArray *questionArray; // @synthesize questionArray=_questionArray;
@property(retain, nonatomic) NSString *course_name; // @synthesize course_name=_course_name;
@property(nonatomic) long long course_id; // @synthesize course_id=_course_id;
- (void)uploadall;
- (void)nextward:(long long)arg1;
- (void)backwardClick:(long long)arg1;
- (void)requestData;
- (void)setupUI;
- (void)closeEvent;
- (id)cancelCloseMiniProgramsTitle;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

