//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class RConveterModel, UIImageView, UILabel, UITextField;

@interface RConverterButton : UIButton
{
    UIImageView *_iconImgView;
    UILabel *_codeLabel;
    RConveterModel *_model;
    UITextField *_textField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) RConveterModel *model; // @synthesize model=_model;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
