//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface GULURLSessionDataResponse : NSObject
{
    NSHTTPURLResponse *_HTTPResponse;
    NSData *_HTTPBody;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *HTTPBody; // @synthesize HTTPBody=_HTTPBody;
@property(readonly, nonatomic) NSHTTPURLResponse *HTTPResponse; // @synthesize HTTPResponse=_HTTPResponse;
- (id)initWithResponse:(id)arg1 HTTPBody:(id)arg2;

@end
