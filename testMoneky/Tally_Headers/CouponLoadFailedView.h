//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface CouponLoadFailedView : UIView
{
    UIButton *_reloadBtn;
    UILabel *_tipLabel;
    CDUnknownBlockType _reloadHandle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reloadHandle; // @synthesize reloadHandle=_reloadHandle;
- (void)removeReloadButton;
- (void)setTipText:(id)arg1;
- (void)retryEvent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

