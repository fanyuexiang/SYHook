//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FamilyDetailsController, NSMutableArray, UIImageView;

@interface FamilyDetailsHeaderToolsView : UIView
{
    FamilyDetailsController *_controller;
    UIView *_itemsView;
    UIImageView *_maskView;
    NSMutableArray *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *itemsView; // @synthesize itemsView=_itemsView;
@property(nonatomic) __weak FamilyDetailsController *controller; // @synthesize controller=_controller;
- (void)refreshTheme;
- (void)reloadData;
- (void)clickButtonAction:(id)arg1;
- (id)itemButton;
- (void)setupViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (void)dealloc;

@end
