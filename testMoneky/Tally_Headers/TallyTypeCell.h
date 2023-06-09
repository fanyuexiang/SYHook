//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIAlertViewDelegate-Protocol.h"

@class CBAttributedLabel, NSDictionary, NSString, UIButton, UIImageView;

@interface TallyTypeCell : UITableViewCell <UIAlertViewDelegate>
{
    UIImageView *_themeImageView;
    CBAttributedLabel *_typeLabel;
    UIButton *_editeBtn;
    NSDictionary *_tallyTypeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *tallyTypeInfo; // @synthesize tallyTypeInfo=_tallyTypeInfo;
- (void)editeClick;
- (void)reloadThemeViewImage:(id)arg1;
- (id)themeImage:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)viewController;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)changeEditeIcon;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

