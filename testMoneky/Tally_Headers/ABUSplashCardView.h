//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol ABUSplashCardViewDelegate;

@interface ABUSplashCardView : UIView
{
    id <ABUSplashCardViewDelegate> _delegate;
    CDUnknownBlockType _showSplashCardInRootVC;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType showSplashCardInRootVC; // @synthesize showSplashCardInRootVC=_showSplashCardInRootVC;
@property(nonatomic) __weak id <ABUSplashCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setCardView:(id)arg1;
- (id)cardView;
- (void)showSplashCardInRootVC:(id)arg1;
- (id)init;
- (id)initWithCardView:(id)arg1;

@end

