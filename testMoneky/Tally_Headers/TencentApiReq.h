//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface TencentApiReq : NSObject <NSSecureCoding>
{
    long long _nMessageType;
    long long _nPlatform;
    long long _nSdkVersion;
    long long _nSeq;
    NSString *_sAppID;
    NSArray *_arrMessage;
    NSString *_sDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)reqFromSeq:(long long)arg1 type:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sDescription; // @synthesize sDescription=_sDescription;
@property(retain, nonatomic) NSArray *arrMessage; // @synthesize arrMessage=_arrMessage;
@property(retain, nonatomic) NSString *sAppID; // @synthesize sAppID=_sAppID;
@property(readonly, nonatomic) long long nSeq; // @synthesize nSeq=_nSeq;
@property(readonly, nonatomic) long long nSdkVersion; // @synthesize nSdkVersion=_nSdkVersion;
@property(readonly, nonatomic) long long nPlatform; // @synthesize nPlatform=_nPlatform;
@property(readonly, nonatomic) long long nMessageType; // @synthesize nMessageType=_nMessageType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(long long)arg1 type:(int)arg2;

@end

