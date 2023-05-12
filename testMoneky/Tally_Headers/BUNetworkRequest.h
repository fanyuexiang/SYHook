//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUBaseRequest.h"

@class NSDictionary, NSString;

@interface BUNetworkRequest : BUBaseRequest
{
    NSString *_buRequestUrl;
    NSDictionary *_parameter;
    long long _method;
    long long _buRequestSerializerType;
    long long _buResponseSerializerType;
}

+ (id)requestWithURL:(id)arg1 parameter:(id)arg2 completionWithSuccess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)requestWithURL:(id)arg1 method:(long long)arg2 parameter:(id)arg3 completionWithSuccess:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) long long buResponseSerializerType; // @synthesize buResponseSerializerType=_buResponseSerializerType;
@property(nonatomic) long long buRequestSerializerType; // @synthesize buRequestSerializerType=_buRequestSerializerType;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(retain, nonatomic) NSDictionary *parameter; // @synthesize parameter=_parameter;
@property(copy, nonatomic) NSString *buRequestUrl; // @synthesize buRequestUrl=_buRequestUrl;
- (id)requestArgument;
- (long long)responseSerializerType;
- (long long)requestSerializerType;
- (long long)requestMethod;
- (id)requestUrl;
- (id)initWithUrl:(id)arg1 method:(long long)arg2 parameter:(id)arg3;
- (CDUnknownBlockType)successCompletionBlockWithTNC;
- (CDUnknownBlockType)failureCompletionBlockWithTNC;
- (id)TNCServiceKey;

@end

