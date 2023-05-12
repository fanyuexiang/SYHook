//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TuringPostRuleUNBC : NSObject
{
    _Bool _usesDebugServer;
    _Bool _shouldAutoPost;
    unsigned long long _protocol;
}

+ (const struct ts_networking_type *)defaultNetwork;
+ (void)setUsesDebugServerAsDefault:(_Bool)arg1;
+ (_Bool)usesDebugServerAsDefault;
+ (void)setDefaultProtocol:(unsigned long long)arg1;
+ (unsigned long long)defaultProtocol;
+ (id)postRule;
@property(nonatomic) _Bool shouldAutoPost; // @synthesize shouldAutoPost=_shouldAutoPost;
@property(nonatomic) _Bool usesDebugServer; // @synthesize usesDebugServer=_usesDebugServer;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (const struct ts_networking_type *)network;
@property(nonatomic) unsigned long long protocol; // @synthesize protocol=_protocol;
- (id)initForAutoPosting:(_Bool)arg1;

@end

