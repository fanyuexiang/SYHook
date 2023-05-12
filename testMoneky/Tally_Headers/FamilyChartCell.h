//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CBAttributedLabel, ChartModel, SKThemeBaseView, UIImageView, UILabel;

@interface FamilyChartCell : UITableViewCell
{
    SKThemeBaseView *_themeView;
    CBAttributedLabel *_remarkLabel;
    UILabel *_dateLabel;
    UILabel *_amountLabel;
    UILabel *_progressView;
    UIImageView *_increaseImageView;
    ChartModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChartModel *model; // @synthesize model=_model;
- (void)reloadThemeViewImage:(id)arg1;
- (id)themeImage:(id)arg1;
- (id)themeView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

