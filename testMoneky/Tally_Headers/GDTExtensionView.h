//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTAdBaseModel, NSDictionary, NSString;

@interface GDTExtensionView : UIView
{
    NSString *_key;
    NSDictionary *_cfgDic;
    struct UIEdgeInsets _edgeInset;
}

@property(retain, nonatomic) NSDictionary *cfgDic; // @synthesize cfgDic=_cfgDic;
@property(nonatomic) struct UIEdgeInsets edgeInset; // @synthesize edgeInset=_edgeInset;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (void)GDTfunctionj82Zte:(struct UIEdgeInsets)arg1;
- (void)setInsets:(id)arg1 cfgDict:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) GDTAdBaseModel *adModel;
- (void)GDTfunctionj82Zte:(struct UIEdgeInsets)arg1;

@end

