//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SmartColorConfig, UIImage;

@interface SmartColorFetchLib : NSObject
{
    UIImage *_targetImage;
    SmartColorConfig *_smartColorConfig;
}

+ (id)smartColorFetchWithPath:(id)arg1 alpha:(double)arg2;
+ (id)smartColorFetchWithPath:(id)arg1;
+ (id)smartColorHexFetchWithPath:(id)arg1;
+ (id)smartColorFetchWithImage:(id)arg1 alpha:(double)arg2;
+ (id)smartColorFetchWithImage:(id)arg1;
+ (id)smartColorHexFetchWithImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SmartColorConfig *smartColorConfig; // @synthesize smartColorConfig=_smartColorConfig;
@property(retain, nonatomic) UIImage *targetImage; // @synthesize targetImage=_targetImage;
- (id)smartColorFetchWithAlpha:(double)arg1;
- (id)smartColorFetch;
- (id)smartColorHexFetch;
- (id)initWithSmartColorConfig:(id)arg1 targetImage:(id)arg2;

@end

