//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIScrollView, WXLoginButton;

@interface CourseExchangeController : UIViewController
{
    NSArray *_dataArray;
    UIScrollView *_scrollView;
    WXLoginButton *_wxBindBtn;
    NSString *_studyCourseName;
    NSString *_courseID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *courseID; // @synthesize courseID=_courseID;
- (void)requestContentData;
- (double)addImageViewWithInfo:(id)arg1 offsetY:(double)arg2;
- (double)addTitleLabel:(id)arg1 offsetY:(double)arg2 index:(long long)arg3 boldText:(id)arg4;
- (void)setupDataView;
- (void)setupContentScrollView;
- (void)setupNavBar;
- (void)wxBindAction;
- (void)backAction;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

