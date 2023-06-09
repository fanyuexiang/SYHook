//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface CSJProgressHUD : UIView
{
    long long _numberOfLine;
    NSString *_firstLineString;
    NSString *_secondLineString;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(copy, nonatomic) NSString *secondLineString; // @synthesize secondLineString=_secondLineString;
@property(copy, nonatomic) NSString *firstLineString; // @synthesize firstLineString=_firstLineString;
@property(nonatomic) long long numberOfLine; // @synthesize numberOfLine=_numberOfLine;
- (void)hidden;
- (void)showInView:(id)arg1 hiddenAfterDelay:(long long)arg2;
- (void)relayoutLabel:(id)arg1 string:(id)arg2;
- (void)creatSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

