//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKCacheItem : NSObject
{
    NSString *_title;
    NSString *_subTitle;
    NSString *_cacheSize;
    NSString *_loadDataSEL;
    NSString *_clearDataSEL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *clearDataSEL; // @synthesize clearDataSEL=_clearDataSEL;
@property(copy, nonatomic) NSString *loadDataSEL; // @synthesize loadDataSEL=_loadDataSEL;
@property(copy, nonatomic) NSString *cacheSize; // @synthesize cacheSize=_cacheSize;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
