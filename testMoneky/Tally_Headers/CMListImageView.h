//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CMModel, NSMutableDictionary;

@interface CMListImageView : UIView
{
    NSMutableDictionary *_contentImages;
    double _imgWidth;
    CMModel *_model;
}

- (void).cxx_destruct;
- (id)buttomImageAtIndex:(long long)arg1;
- (void)buttonAction:(id)arg1;
- (id)addImageAtIndex:(long long)arg1 url:(id)arg2 frame:(struct CGRect)arg3;
- (void)addImagesWithCMModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
