//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUStorageField : NSObject
{
    _Bool _primary;
    _Bool _notNull;
    NSString *_name;
    unsigned long long _type;
}

+ (id)convertToSqlStringWithFields:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool notNull; // @synthesize notNull=_notNull;
@property(nonatomic) _Bool primary; // @synthesize primary=_primary;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)defaultSqlString;
- (_Bool)hasDefault;
@property(readonly, copy, nonatomic) NSString *typeDescription;
- (id)_convertType;
- (id)convertToSqlString;

@end

