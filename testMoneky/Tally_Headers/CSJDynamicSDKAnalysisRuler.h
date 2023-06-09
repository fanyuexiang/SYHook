//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CSJDynamicSDKAnalysisRuler : NSObject
{
    NSMutableDictionary *__dataLenCache_;
    NSMutableDictionary *__brickSizeCache_;
    NSMutableDictionary *__groupSizeCache_;
    NSString *_debugType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *debugType; // @synthesize debugType=_debugType;
@property(retain, nonatomic) NSMutableDictionary *_groupSizeCache_; // @synthesize _groupSizeCache_=__groupSizeCache_;
@property(retain, nonatomic) NSMutableDictionary *_brickSizeCache_; // @synthesize _brickSizeCache_=__brickSizeCache_;
@property(retain, nonatomic) NSMutableDictionary *_dataLenCache_; // @synthesize _dataLenCache_=__dataLenCache_;
- (void)_setGroupHeightCache_:(id)arg1 size:(struct CGSize)arg2;
- (void)_setBrickSizeCache_:(id)arg1 size:(struct CGSize)arg2;
- (id)_getGroupCacheKey_:(id)arg1;
- (id)_getBrickCacheKey_:(id)arg1;
- (void)_markGroupHeightDirty_:(id)arg1;
- (void)_markBrickSizeDirty_:(id)arg1;
- (void)_titleFlexWhenOverflow_:(id)arg1 maxWidth:(double)arg2 flowGroup:(id)arg3;
- (struct CGSize)_computeGroupSize_:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)computeGroupSize:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)_computeLeafBrickSize_:(id)arg1 limit:(struct CGSize)arg2;
- (_Bool)_brickHeightCanFlexWhenAuto_:(id)arg1;
- (_Bool)_brickHeightCanFlex_:(id)arg1;
- (_Bool)_isHeightFlexiableGroup_:(id)arg1 imageAutoFlex:(_Bool)arg2;
- (_Bool)_isWidthFlexiableGroup_:(id)arg1;
- (void)_reflowHeight_:(id)arg1 width:(double)arg2 height:(double)arg3;
- (struct CGSize)_computeBrickSize_:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)computeBrickSize:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)getGroupSize:(id)arg1;
- (struct CGSize)getBrickSize:(id)arg1;
- (struct CGSize)_getDomWidthFn_:(id)arg1 fontWidthStyleModel:(id)arg2 lineFeed:(_Bool)arg3 lineLimit:(_Bool)arg4 lineCount:(long long)arg5 brick:(id)arg6;
- (struct CGSize)_getDataLens_:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)getDataLens:(id)arg1 limit:(struct CGSize)arg2;
- (struct CGSize)_computeContentSize_:(id)arg1 limit:(struct CGSize)arg2;
- (void)resetCache;
- (id)init;

@end

