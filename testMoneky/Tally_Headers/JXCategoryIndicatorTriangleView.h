//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JXCategoryIndicatorComponentView.h"

@class CAShapeLayer;

@interface JXCategoryIndicatorTriangleView : JXCategoryIndicatorComponentView
{
    CAShapeLayer *_triangleLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *triangleLayer; // @synthesize triangleLayer=_triangleLayer;
- (void)jx_selectedCell:(id)arg1;
- (void)jx_contentScrollViewDidScroll:(id)arg1;
- (void)jx_refreshState:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

