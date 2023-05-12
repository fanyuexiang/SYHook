//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCWealthClassBaseViewController.h"

@class NSArray, NSMutableArray, UIButton, UIScrollView, WCChapterInfo;

@interface WCHomeworkController : WCWealthClassBaseViewController
{
    UIScrollView *_scrollView;
    NSArray *_homeworkArray;
    NSMutableArray *_homeworkViewArray;
    UIButton *_bottomBtn;
    _Bool _getAchievements;
    WCChapterInfo *_info;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool getAchievements; // @synthesize getAchievements=_getAchievements;
@property(retain, nonatomic) WCChapterInfo *info; // @synthesize info=_info;
- (void)requestHomework;
- (void)commitAction;
- (void)getAchievementsSuccess;
- (void)bottomButtonAction;
- (void)tapGestureAction;
- (void)refreshBottomBtnSatus;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)changeHomeworkViewHeight;
- (void)setupContentView;
- (void)viewDidLoad;

@end
