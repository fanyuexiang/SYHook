//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ABUAutoDetailCondition : NSObject
{
    unsigned long long _useEcpmType;
    unsigned long long _posState;
    NSString *_useEcpm;
    NSDictionary *_extraParam;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(copy, nonatomic) NSString *useEcpm; // @synthesize useEcpm=_useEcpm;
@property(nonatomic) unsigned long long posState; // @synthesize posState=_posState;
@property(nonatomic) unsigned long long useEcpmType; // @synthesize useEcpmType=_useEcpmType;

@end

