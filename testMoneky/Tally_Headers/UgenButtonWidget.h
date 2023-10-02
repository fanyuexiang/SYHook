//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UgenWidget.h"

@class NSString, UIButton;

@interface UgenButtonWidget : UgenWidget
{
    NSString *_text;
    NSString *_textColor;
    NSString *_highlightedTextColor;
    long long _textSize;
    NSString *_textStyle;
    long long _lines;
    long long _maxLines;
    NSString *_ellipsize;
    NSString *_textDecoration;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) NSString *textDecoration; // @synthesize textDecoration=_textDecoration;
@property(copy, nonatomic) NSString *ellipsize; // @synthesize ellipsize=_ellipsize;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) long long lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long textSize; // @synthesize textSize=_textSize;
@property(copy, nonatomic) NSString *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)render;
- (id)ugenView;
- (id)init;

@end

