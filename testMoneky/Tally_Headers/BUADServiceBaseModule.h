//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BUADServiceBaseModule : NSObject
{
    NSMutableDictionary *_bindings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *bindings; // @synthesize bindings=_bindings;
- (void)ensureInstance:(id)arg1 conformsTo:(id)arg2;
- (void)configure;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2 name:(id)arg3;
- (void)bindProvider:(id)arg1 toProtocol:(id)arg2;
- (void)bind:(id)arg1 toProtocol:(id)arg2 name:(id)arg3;
- (void)bind:(id)arg1 toProtocol:(id)arg2;
- (id)init;

@end
