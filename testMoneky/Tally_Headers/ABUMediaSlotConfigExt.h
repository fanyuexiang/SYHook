//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class ABUMediaSlotConfig, NSString;

@interface ABUMediaSlotConfigExt : NSProxy
{
    ABUMediaSlotConfig *_config;
    NSString *_adm;
    NSString *_aid;
    id _extraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *adm; // @synthesize adm=_adm;
@property(readonly, nonatomic) ABUMediaSlotConfig *config; // @synthesize config=_config;
- (id)debugDescription;
- (id)description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithConfig:(id)arg1;

@end

