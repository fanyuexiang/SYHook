//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface WCCourseRateLevelView : UIView
{
    UIButton *_lastSelectedBtn;
    CDUnknownBlockType _selectedRateLevelHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectedRateLevelHandler; // @synthesize selectedRateLevelHandler=_selectedRateLevelHandler;
@property(nonatomic) long long rateLevel;
- (void)rateButtonAction:(id)arg1;
- (void)addRateViewWithSize:(double)arg1 space:(double)arg2;

@end

