//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString;

@interface BaiduMobAdRecommendView : UIView
{
    double _recommendNum;
    double _labelAlpha;
    double _textSize;
    double _cornerRate;
    double _space;
    NSString *_labelTextColor;
    NSString *_labelBackgrountColor;
    NSArray *_textColorArr;
    NSArray *_textBackgroundColorArr;
    NSMutableArray *_recommendReason;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSArray *textBackgroundColorArr; // @synthesize textBackgroundColorArr=_textBackgroundColorArr;
@property(retain, nonatomic) NSArray *textColorArr; // @synthesize textColorArr=_textColorArr;
@property(retain, nonatomic) NSString *labelBackgrountColor; // @synthesize labelBackgrountColor=_labelBackgrountColor;
@property(retain, nonatomic) NSString *labelTextColor; // @synthesize labelTextColor=_labelTextColor;
@property(nonatomic) double space; // @synthesize space=_space;
@property(nonatomic) double cornerRate; // @synthesize cornerRate=_cornerRate;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property(nonatomic) double recommendNum; // @synthesize recommendNum=_recommendNum;
- (void)setupConfig;
- (void)setupUIWithWidth:(double)arg1 height:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 recommendNum:(unsigned long long)arg2 labelAlpha:(double)arg3 textSize:(double)arg4 cornerRate:(double)arg5 space:(double)arg6 textColor:(id)arg7 textBackgroundColor:(id)arg8 recommendLabelText:(id)arg9;

@end

