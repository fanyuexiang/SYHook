//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AligmentButton, NTallyModel, SKThemeBaseView, UIButton, UILabel;

@interface FamilyNewDetailCell : UITableViewCell
{
    AligmentButton *_remarkBtn;
    UIButton *_typeButton;
    AligmentButton *_amountBtn;
    NTallyModel *_model;
    UILabel *_imageremarkLabel;
    SKThemeBaseView *_themeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SKThemeBaseView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) NTallyModel *model; // @synthesize model=_model;
- (void)reloadThemeViewImage:(id)arg1;
- (id)themeImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
