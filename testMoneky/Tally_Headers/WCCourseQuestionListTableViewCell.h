//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, WCCourseQuestionModel;

@interface WCCourseQuestionListTableViewCell : UITableViewCell
{
    UIView *_whitebgView;
    UIImageView *_qicon;
    UILabel *_qLabel;
    UIImageView *_aicon;
    UILabel *_aLabel;
    WCCourseQuestionModel *_model;
}

+ (double)getHeight:(id)arg1;
+ (void)initialSizeLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) WCCourseQuestionModel *model; // @synthesize model=_model;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

