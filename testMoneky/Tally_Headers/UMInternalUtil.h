//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UITapGestureRecognizer;

@interface UMInternalUtil : NSObject
{
    NSMutableArray *_muttaparray;
    UITapGestureRecognizer *_testTapRecognizer;
}

+ (id)Value8;
+ (unsigned long long)getFreeMemeorySize;
+ (unsigned long long)getTotalMemeorySize;
+ (id)Value4;
+ (id)formatIPV4Address:(struct in_addr)arg1;
+ (id)formatIPV6Address:(struct in6_addr)arg1;
+ (id)getWifiInfo;
+ (id)getWifiSSID;
+ (id)getWifiBSSID;
+ (id)getwinfoValue;
+ (id)getwinfo;
+ (id)Value3;
+ (id)Value7;
+ (int)getSysFontSize;
+ (id)Value2;
+ (unsigned long long)getFreeDiskSize;
+ (unsigned long long)getTotalDiskSize;
+ (id)Value1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *testTapRecognizer; // @synthesize testTapRecognizer=_testTapRecognizer;
@property(retain, nonatomic) NSMutableArray *muttaparray; // @synthesize muttaparray=_muttaparray;
- (struct UMCMRotationRate)getrotationRateWithObj:(id)arg1;
- (void)setObj:(id)arg1 updateInterval:(double)arg2;
- (void)stopGyroUpdates:(id)arg1;
- (_Bool)isGAvailable:(id)arg1;
- (void)connectGestureRecognized;
- (void)networkchange;
- (void)handlenetworknotification;
- (void)appActivate;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
