//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AlibcTradeListenerItem : NSObject
{
    _Bool _singleton;
    id _instance;
    NSString *_instanceType;
    Class _handlerClass;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool singleton; // @synthesize singleton=_singleton;
@property(retain, nonatomic) Class handlerClass; // @synthesize handlerClass=_handlerClass;
@property(readonly, copy, nonatomic) NSString *instanceType; // @synthesize instanceType=_instanceType;
@property(readonly, nonatomic) id instance; // @synthesize instance=_instance;
- (id)initWithClass:(Class)arg1 isSingleton:(_Bool)arg2;
- (id)initWithInstance:(id)arg1;

@end

