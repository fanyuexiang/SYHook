//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicAbstractView.h"

@class UILabel;

@interface CSJDynamicLogoUnionView : CSJDynamicAbstractView
{
    UILabel *_ADXLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ADXLabel; // @synthesize ADXLabel=_ADXLabel;
- (void)viewAction:(id)arg1;
- (void)pbu_adjustADXLabelFrameIfNeed;
- (void)layoutSubviews;
- (_Bool)haveAdX;
- (void)render;
- (id)initWithGlobalModel:(id)arg1 layoutDictionary:(id)arg2 parentView:(id)arg3 error:(id *)arg4;

@end

