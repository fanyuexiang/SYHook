//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class InviteFriendsModel, UIImageView, UILabel;

@interface InviteFriendsCell : UITableViewCell
{
    UIImageView *_imgView;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    InviteFriendsModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) InviteFriendsModel *model; // @synthesize model=_model;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
