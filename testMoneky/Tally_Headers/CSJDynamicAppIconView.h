//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSJDynamicAbstractView.h"

@class CSJDynamicImageViewDecorator;

@interface CSJDynamicAppIconView : CSJDynamicAbstractView
{
    CSJDynamicImageViewDecorator *_imageViewDecorator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJDynamicImageViewDecorator *imageViewDecorator; // @synthesize imageViewDecorator=_imageViewDecorator;
- (void)layoutSubviews;
- (void)render;
- (id)initWithGlobalModel:(id)arg1 layoutDictionary:(id)arg2 parentView:(id)arg3 error:(id *)arg4;

@end

