//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BU_CSSRule, NSMutableDictionary, NSString;

@interface BU_CSSStyleDeclaration : NSObject
{
    NSMutableDictionary *internalDictionaryOfStylesByCSSClass;
    NSString *_cssText;
    unsigned long long length;
    BU_CSSRule *parentRule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BU_CSSRule *parentRule; // @synthesize parentRule;
@property(nonatomic) unsigned long long length; // @synthesize length;
@property(retain, nonatomic) NSString *cssText; // @synthesize cssText=_cssText;
@property(retain, nonatomic) NSMutableDictionary *internalDictionaryOfStylesByCSSClass; // @synthesize internalDictionaryOfStylesByCSSClass;
- (id)description;
- (id)item:(long long)arg1;
- (id)getPropertyCSSValue:(id)arg1;
- (id)getPropertyValue:(id)arg1;
- (id)NSDictionaryFromCSSAttributes:(id)arg1;
- (id)init;

@end
