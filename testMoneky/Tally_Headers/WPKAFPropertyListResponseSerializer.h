//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPKAFHTTPResponseSerializer.h"

@interface WPKAFPropertyListResponseSerializer : WPKAFHTTPResponseSerializer
{
    unsigned long long _format;
    unsigned long long _readOptions;
}

+ (id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2;
+ (id)serializer;
@property(nonatomic) unsigned long long readOptions; // @synthesize readOptions=_readOptions;
@property(nonatomic) unsigned long long format; // @synthesize format=_format;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

