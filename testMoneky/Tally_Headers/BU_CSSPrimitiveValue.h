//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BU_CSSValue.h"

@class NSString;

@interface BU_CSSPrimitiveValue : BU_CSSValue
{
    float pixelsPerInch;
    float internalValue;
    int primitiveType;
    NSString *internalString;
}

- (void).cxx_destruct;
@property(nonatomic) int primitiveType; // @synthesize primitiveType;
@property(retain, nonatomic) NSString *internalString; // @synthesize internalString;
@property(nonatomic) float internalValue; // @synthesize internalValue;
@property(nonatomic) float pixelsPerInch; // @synthesize pixelsPerInch;
- (void)setCssText:(id)arg1;
- (void)setStringValue:(int)arg1 stringValue:(id)arg2;
- (float)getFloatValue:(int)arg1;
- (void)setFloatValue:(int)arg1 floatValue:(float)arg2;
- (id)init;

@end

