//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTDLWidget.h"

@class GDTDLLabel, NSString;

@interface GDTDLTextView : GDTDLWidget
{
    unsigned long long _layoutGravity;
    GDTDLLabel *_textView;
    NSString *_text;
    unsigned long long _contentGravity;
    double _textSize;
    unsigned long long _textStyle;
    long long _maxLines;
    double _minWidth;
    double _maxWidth;
    double _minHeight;
    double _maxHeight;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
@property(nonatomic) unsigned long long contentGravity; // @synthesize contentGravity=_contentGravity;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) GDTDLLabel *textView; // @synthesize textView=_textView;
- (void)setLayoutGravity:(unsigned long long)arg1;
- (unsigned long long)layoutGravity;
- (void).cxx_destruct;
- (void)GDTfunctionq9j0Ya;
- (double)GDTfunctionn6VnUb;
- (struct CGSize)GDTfunctionm3NLf1:(struct CGSize)arg1;
- (struct CGSize)GDTfunctionh5fnfN:(struct CGSize)arg1;
- (_Bool)GDTfunctiono933aW:(id)arg1 value:(id)arg2;
- (void)GDTfunctioni9KSnl;
- (void)GDTfunctioni9TCCM;
- (void)GDTfunctionr2CDN6;
- (id)cocoaView;
- (id)init;

@end

