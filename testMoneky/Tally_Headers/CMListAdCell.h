//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AdjustButton, CMExpressModel, SKPraiseButton, UIImageView, UILabel, UIView;

@interface CMListAdCell : UITableViewCell
{
    UIImageView *_headerBtn;
    UILabel *_nickLabel;
    UILabel *_contentLabel;
    UIImageView *_imgView;
    UIView *_bottomView;
    AdjustButton *_shareBtn;
    AdjustButton *_commentBtn;
    SKPraiseButton *_praiseBtn;
    CMExpressModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMExpressModel *model; // @synthesize model=_model;
- (void)changeSelfClick:(id)arg1;
- (id)adjustButtonWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 highlightedImage:(id)arg3 selectedImage:(id)arg4 isPraise:(_Bool)arg5 action:(SEL)arg6;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

