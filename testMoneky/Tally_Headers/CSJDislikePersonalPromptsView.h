//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol CSJDislikePersonalPromptsDelegate;

@interface CSJDislikePersonalPromptsView : UIView
{
    id <CSJDislikePersonalPromptsDelegate> _delegate;
    UILabel *_promptsL;
    UIButton *_disclosureIndicator;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(retain, nonatomic) UILabel *promptsL; // @synthesize promptsL=_promptsL;
@property(nonatomic) __weak id <CSJDislikePersonalPromptsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDarkStyle;
- (void)setLightStyle;
- (void)layoutSubviews;
- (void)pbuSafe_dislikePersonalPromptsDidSelected:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tapGestureAction:(id)arg1;
- (void)configureWith:(id)arg1;
- (void)promptsLayout;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

