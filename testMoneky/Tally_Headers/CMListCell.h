//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AdjustButton, CMFollowButton, CMHeaderButton, CMListImageView, CMModel, NSAttributedString, NSString, SKPraiseButton, UIImageView, UILabel, UIView, YYLabel;

@interface CMListCell : UITableViewCell
{
    CMHeaderButton *_headerBtn;
    UIImageView *_vimgView;
    UILabel *_nickLabel;
    UILabel *_dateLabel;
    YYLabel *_contentLabel;
    CMListImageView *_imgView;
    AdjustButton *_topicBtn;
    UIView *_bottomView;
    AdjustButton *_shareBtn;
    AdjustButton *_commentBtn;
    SKPraiseButton *_praiseBtn;
    CMModel *_model;
    UIImageView *_vipImgView;
    NSAttributedString *_truncationToken;
    CMHeaderButton *_coverBtn;
    CMFollowButton *_followBtn;
    _Bool _alwaysfollowHidden;
    _Bool _alwaysShow;
    NSString *_type;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) CMModel *model; // @synthesize model=_model;
- (void)collectionStatus:(id)arg1;
- (void)followStatusChanged:(id)arg1;
- (void)followEvent;
- (id)truncationToken;
- (void)showTopicDate;
- (void)setFollwBtnAlwaysShow:(_Bool)arg1;
- (void)setFollowBtnHidden:(_Bool)arg1;
- (void)setHeaderButtonUserInteractionEnabled:(_Bool)arg1;
- (void)praiseStateChangeAction;
- (void)praiseAction;
- (_Bool)canRespondsNextAction;
- (void)commendAction;
- (void)refreshShareCount;
- (void)deletePostWithCMT:(long long)arg1;
- (void)shareAction;
- (void)topicAction;
- (id)adjustButtonWithFrame:(struct CGRect)arg1 normalImage:(id)arg2 highlightedImage:(id)arg3 selectedImage:(id)arg4 isPraise:(_Bool)arg5 action:(SEL)arg6;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
