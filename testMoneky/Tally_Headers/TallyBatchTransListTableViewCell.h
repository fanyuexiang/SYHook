//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSObject, UIImageView, UILabel;
@protocol OS_dispatch_queue;

@interface TallyBatchTransListTableViewCell : UITableViewCell
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_numberLabel;
    NSDictionary *_modeldic;
    CDUnknownBlockType _recoveryHandel;
    NSObject<OS_dispatch_queue> *_deleteHandel;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *deleteHandel; // @synthesize deleteHandel=_deleteHandel;
@property(copy) CDUnknownBlockType recoveryHandel; // @synthesize recoveryHandel=_recoveryHandel;
@property(copy, nonatomic) NSDictionary *modeldic; // @synthesize modeldic=_modeldic;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

