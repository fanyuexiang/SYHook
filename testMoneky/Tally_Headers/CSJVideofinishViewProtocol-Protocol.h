//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSJAdSlot, CSJMaterialMeta;

@protocol CSJVideofinishViewProtocol <NSObject>
@property(retain, nonatomic) CSJAdSlot *adSlot;
@property(retain, nonatomic) CSJMaterialMeta *materialMeta;
@property(copy, nonatomic) CDUnknownBlockType detailClick;
- (void)reSetFrameWithsuperFrame:(struct CGRect)arg1;
- (void)setFinishViewDataWithMaterialMeta:(CSJMaterialMeta *)arg1;
@end

