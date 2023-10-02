//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UgenWidget.h"

@class NSString, UgenLabelView;

@interface UgenLabelWidget : UgenWidget
{
    NSString *_text;
    NSString *_textColor;
    long long _textSize;
    NSString *_textStyle;
    long long _lines;
    long long _maxLines;
    NSString *_ellipsize;
    NSString *_textAlign;
    NSString *_textDecoration;
    UgenLabelView *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UgenLabelView *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *textDecoration; // @synthesize textDecoration=_textDecoration;
@property(copy, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(copy, nonatomic) NSString *ellipsize; // @synthesize ellipsize=_ellipsize;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) long long lines; // @synthesize lines=_lines;
@property(copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long textSize; // @synthesize textSize=_textSize;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)render;
- (void)bindAttributeValue:(id)arg1 forKey:(id)arg2;
- (id)ugenView;
- (id)init;

@end
