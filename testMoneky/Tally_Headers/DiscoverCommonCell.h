//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DiscoverModel, NSMutableSet, NSString;

@interface DiscoverCommonCell : UITableViewCell
{
    NSMutableSet *_resuseSet;
    NSMutableSet *_visibleSet;
    NSString *_skaTitle;
    DiscoverModel *_model;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DiscoverModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *skaTitle; // @synthesize skaTitle=_skaTitle;
- (void)layoutSubviews;
- (id)controller;
- (void)buttonAction:(id)arg1;
- (id)addBtn:(id)arg1 title:(id)arg2 frame:(struct CGRect)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

