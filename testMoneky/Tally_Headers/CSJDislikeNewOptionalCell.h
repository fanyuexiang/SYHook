//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDislikeNewBaseCell.h"

@class CSJDislikeWordsViewModel, UILabel, UIView;
@protocol CSJDislikeNewOptionalCellDelegate;

@interface CSJDislikeNewOptionalCell : CSJDislikeNewBaseCell
{
    id <CSJDislikeNewOptionalCellDelegate> _delegate;
    CSJDislikeWordsViewModel *_dislikeWordsViewModel;
    UILabel *_wordLabel;
    UIView *_optionView;
    UIView *_sepView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UIView *optionView; // @synthesize optionView=_optionView;
@property(retain, nonatomic) UILabel *wordLabel; // @synthesize wordLabel=_wordLabel;
@property(retain, nonatomic) CSJDislikeWordsViewModel *dislikeWordsViewModel; // @synthesize dislikeWordsViewModel=_dislikeWordsViewModel;
@property(nonatomic) __weak id <CSJDislikeNewOptionalCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)itemLabelAction:(id)arg1;
- (void)layoutSubviews;
- (void)refreshWithDislikeWordsViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setDarkStyle;
- (void)setLightStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

