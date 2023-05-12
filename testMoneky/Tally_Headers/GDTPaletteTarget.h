//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GDTPaletteTarget : NSObject
{
    _Bool _isExclusive;
    NSMutableArray *_saturationTargets;
    NSMutableArray *_lightnessTargets;
    NSMutableArray *_weights;
    long long _mode;
}

+ (id)getTargetModeKey:(long long)arg1;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(retain, nonatomic) NSMutableArray *weights; // @synthesize weights=_weights;
@property(retain, nonatomic) NSMutableArray *lightnessTargets; // @synthesize lightnessTargets=_lightnessTargets;
@property(retain, nonatomic) NSMutableArray *saturationTargets; // @synthesize saturationTargets=_saturationTargets;
- (void).cxx_destruct;
- (void)GDTfunctiond3VOq2;
- (id)GDTfunctionn3fIK4;
- (float)GDTfunctione2bPUq;
- (float)GDTfunctione60dDM;
- (float)GDTfunctionr9S047;
- (float)GDTfunctionx5lGNp;
- (float)GDTfunctionq0iojy;
- (float)GDTfunctions44FNZ;
- (float)GDTfunctiond7THFv;
- (float)GDTfunctionj6Imr4;
- (float)GDTfunctiont2ZBYq;
- (void)setGDTfunctionp96A3Y;
- (void)setGDTfunctione70pcE;
- (void)setGDTfunctiong9yCok;
- (void)setGDTfunctiong7eahZ;
- (void)setGDTfunctionx7ekrt;
- (void)setGDTfunctioni8EATh;
- (void)setGDTfunctionm4dyKC;
- (void)setGDTfunctiong4Yhf7;
- (void)GDTfunctionr4TpyY:(long long)arg1;
- (void)initLr9775l;
- (id)initLy2rKkC:(long long)arg1;

@end

