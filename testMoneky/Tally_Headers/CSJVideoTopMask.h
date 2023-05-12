//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CSJAdSlot, CSJMaterialMeta, CSJStarView, NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol CSJCSJVideoTopMaskClickDelegate;

@interface CSJVideoTopMask : UIView <UIGestureRecognizerDelegate>
{
    id <CSJCSJVideoTopMaskClickDelegate> _delegate;
    CSJMaterialMeta *_materialMeta;
    CSJAdSlot *_slot;
    UIView *_containerView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    CSJStarView *_starView;
    UILabel *_scoreLabel;
    UITapGestureRecognizer *_tapGesture;
    UITapGestureRecognizer *_subviewsTapGesture;
    NSString *_clickTypeString;
    long long _starCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long starCount; // @synthesize starCount=_starCount;
@property(copy, nonatomic) NSString *clickTypeString; // @synthesize clickTypeString=_clickTypeString;
@property(retain, nonatomic) UITapGestureRecognizer *subviewsTapGesture; // @synthesize subviewsTapGesture=_subviewsTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) CSJStarView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) CSJAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) __weak id <CSJCSJVideoTopMaskClickDelegate> delegate; // @synthesize delegate=_delegate;
- (id)c_xyDict;
- (void)subViewsTapped:(id)arg1;
- (void)maskTapped:(id)arg1;
- (void)addGesture;
- (void)buildUpView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)layoutSubviews;
- (id)initWithMaterialMeta:(id)arg1 slot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
