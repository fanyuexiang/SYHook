//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTNativeDSLPropertyModel, NSString;

@interface GDTNativeDSLModel : NSObject
{
    NSString *_data;
    NSString *_dslId;
    NSString *_rootId;
    long long _ver;
    long long _orientation;
    GDTNativeDSLPropertyModel *_dslProperty;
    NSString *_dsl;
}

@property(copy, nonatomic) NSString *dsl; // @synthesize dsl=_dsl;
@property(retain, nonatomic) GDTNativeDSLPropertyModel *dslProperty; // @synthesize dslProperty=_dslProperty;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long ver; // @synthesize ver=_ver;
@property(copy, nonatomic) NSString *rootId; // @synthesize rootId=_rootId;
@property(copy, nonatomic) NSString *dslId; // @synthesize dslId=_dslId;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;

@end

