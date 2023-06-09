//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSJFinishViewStyleModel : NSObject
{
    _Bool _showButton;
    long long _iconWidth;
    long long _labelWidth;
    long long _labelHeight;
    long long _buttonWidth;
    long long _buttonHeight;
    long long _labelButtonGap;
    long long _labelFontSize;
    long long _buttonFontSize;
}

+ (id)styleModelSmall;
+ (id)styleModelMiddle;
+ (id)styleModelLarge;
+ (id)styleModelWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool showButton; // @synthesize showButton=_showButton;
@property(nonatomic) long long buttonFontSize; // @synthesize buttonFontSize=_buttonFontSize;
@property(nonatomic) long long labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(nonatomic) long long labelButtonGap; // @synthesize labelButtonGap=_labelButtonGap;
@property(nonatomic) long long buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) long long buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) long long labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) long long labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) long long iconWidth; // @synthesize iconWidth=_iconWidth;

@end

