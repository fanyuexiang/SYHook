//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface HeimdallrBUEmbedConfig : NSObject
{
    NSString *_sdkID;
    NSDictionary *_filter;
    NSArray *_addressRanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *addressRanges; // @synthesize addressRanges=_addressRanges;
@property(retain, nonatomic) NSDictionary *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSString *sdkID; // @synthesize sdkID=_sdkID;

@end

