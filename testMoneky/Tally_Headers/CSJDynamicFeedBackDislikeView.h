//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicAbstractView.h"

@class CSJDynamicLabelDecorator, CSJDynamicTapGestureDecorator;

@interface CSJDynamicFeedBackDislikeView : CSJDynamicAbstractView
{
    CSJDynamicTapGestureDecorator *_tapGestureDecorator;
    CSJDynamicLabelDecorator *_labelDecorator;
}

+ (id)updateContentForSizeWithOriginContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicLabelDecorator *labelDecorator; // @synthesize labelDecorator=_labelDecorator;
@property(retain, nonatomic) CSJDynamicTapGestureDecorator *tapGestureDecorator; // @synthesize tapGestureDecorator=_tapGestureDecorator;
- (void)layoutSubviews;
- (void)updateWithDarkMode:(_Bool)arg1;
- (void)render;
- (void)adjust_buDynamic_frameIfNeed;
- (id)initWithGlobalModel:(id)arg1 layoutDictionary:(id)arg2 parentView:(id)arg3 error:(id *)arg4;

@end
