//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJADLoadDurationModel, CSJADLoadSplashContext, CSJAdSlot, CSJMaterialMeta;

@interface CSJADLoadContext : NSObject
{
    CSJAdSlot *_slot;
    CSJMaterialMeta *_material;
    CSJADLoadDurationModel *_loadDurationModel;
    CSJADLoadSplashContext *_splashContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSJADLoadSplashContext *splashContext; // @synthesize splashContext=_splashContext;
@property(retain, nonatomic) CSJADLoadDurationModel *loadDurationModel; // @synthesize loadDurationModel=_loadDurationModel;
@property(retain, nonatomic) CSJMaterialMeta *material; // @synthesize material=_material;
@property(retain, nonatomic) CSJAdSlot *slot; // @synthesize slot=_slot;

@end

