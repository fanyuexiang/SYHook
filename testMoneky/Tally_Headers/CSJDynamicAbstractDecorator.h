//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSJDynamicAbstractView, NSString;

@interface CSJDynamicAbstractDecorator : NSObject
{
    _Bool _needUsePadding;
    CSJDynamicAbstractView *_dynamicAbstractView;
    NSString *_brickType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needUsePadding; // @synthesize needUsePadding=_needUsePadding;
@property(copy, nonatomic) NSString *brickType; // @synthesize brickType=_brickType;
@property(nonatomic) __weak CSJDynamicAbstractView *dynamicAbstractView; // @synthesize dynamicAbstractView=_dynamicAbstractView;
- (struct CGRect)subComponentFrame;
- (void)updateTheme;
- (void)render;
- (id)init;

@end

