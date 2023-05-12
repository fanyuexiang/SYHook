//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TSFingerPrintContextUNBC, turing_3DGOSeTSEzfGbUNBC, turing_3DJhQnbeTPUTzQOUDNkWehUNBC, turing_3DKfQWdQDzlFZUNBC;
@protocol TSFinalTrackedItem;

@interface turing_3DISSikPUNBC : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _reported;
    long long _scene;
    long long _action;
    double _timestamp;
    turing_3DKfQWdQDzlFZUNBC<TSFinalTrackedItem> *_item;
    NSMutableDictionary *_externals;
    turing_3DJhQnbeTPUTzQOUDNkWehUNBC *_reportingStatistics;
    turing_3DJhQnbeTPUTzQOUDNkWehUNBC *_collectingStatistics;
    turing_3DGOSeTSEzfGbUNBC *_packageInfo;
    NSString *_storageUUID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *storageUUID; // @synthesize storageUUID=_storageUUID;
@property(retain, nonatomic) turing_3DGOSeTSEzfGbUNBC *packageInfo; // @synthesize packageInfo=_packageInfo;
@property(nonatomic) __weak turing_3DJhQnbeTPUTzQOUDNkWehUNBC *collectingStatistics; // @synthesize collectingStatistics=_collectingStatistics;
@property(nonatomic) __weak turing_3DJhQnbeTPUTzQOUDNkWehUNBC *reportingStatistics; // @synthesize reportingStatistics=_reportingStatistics;
@property(retain, nonatomic) NSMutableDictionary *externals; // @synthesize externals=_externals;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(retain, nonatomic) turing_3DKfQWdQDzlFZUNBC<TSFinalTrackedItem> *item; // @synthesize item=_item;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTrackedItem:(id)arg1 scene:(long long)arg2 action:(long long)arg3 timestamp:(double)arg4;
@property(retain, nonatomic) NSString *fingerprintTicketID;
@property(nonatomic) unsigned long long interfaceType;
@property(retain, nonatomic) NSString *userIdentifier;
@property(retain, nonatomic) TSFingerPrintContextUNBC *context;
@property(retain, nonatomic) NSDictionary *features;
@property(nonatomic) unsigned long long requireType;

@end
