//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageControl.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIView;

@interface BudgetPageControl : UIPageControl <UIScrollViewDelegate>
{
    UIView *_bgView;
    UIView *_coverView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)layoutSubviews;
- (void)setupCustomView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

