//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CSJRenderModel : NSObject <NSCoding>
{
    float _retryTimeout;
    long long _renderSequence;
    long long _backupRenderControl;
    long long _renderThread;
    long long _reserveTime;
    long long _retryEnable;
}

@property(nonatomic) float retryTimeout; // @synthesize retryTimeout=_retryTimeout;
@property(nonatomic) long long retryEnable; // @synthesize retryEnable=_retryEnable;
@property(nonatomic) long long reserveTime; // @synthesize reserveTime=_reserveTime;
@property(nonatomic) long long renderThread; // @synthesize renderThread=_renderThread;
@property(nonatomic) long long backupRenderControl; // @synthesize backupRenderControl=_backupRenderControl;
@property(nonatomic) long long renderSequence; // @synthesize renderSequence=_renderSequence;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)enableRetry;
- (id)initWithDictionary:(id)arg1;

@end
