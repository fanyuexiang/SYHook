//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADResponseInfo, NSArray, NSString;

@interface GADInspectorAdTransaction : NSObject
{
    NSString *_state;
    double _responseTimeSinceEpoch;
    GADResponseInfo *_responseInfo;
    NSArray *_errors;
    NSString *_adType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *adType; // @synthesize adType=_adType;
@property(readonly, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) GADResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, nonatomic) double responseTimeSinceEpoch; // @synthesize responseTimeSinceEpoch=_responseTimeSinceEpoch;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
- (id)initWithResponseInfo:(id)arg1 adTypes:(id)arg2 errors:(id)arg3;

@end

