//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface SKThemeBaseColor : NSObject
{
    UIColor *_shapeColor;
    UIColor *_strokeColor;
}

+ (id)themeColor:(id)arg1;
+ (id)defautThemeColor;
+ (id)currentThemeColor;
+ (id)themeColorWithShape:(id)arg1 withStroke:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *shapeColor; // @synthesize shapeColor=_shapeColor;
- (id)init;

@end
