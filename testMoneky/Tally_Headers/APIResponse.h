//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface APIResponse : NSObject <NSSecureCoding>
{
    int _detailRetCode;
    int _retCode;
    int _seq;
    NSString *_errorMsg;
    NSDictionary *_jsonResponse;
    NSString *_message;
    id _userData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDictionary *jsonResponse; // @synthesize jsonResponse=_jsonResponse;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) int detailRetCode; // @synthesize detailRetCode=_detailRetCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

