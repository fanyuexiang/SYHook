//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMUShareCommonModel.h"

@class NSString;

@interface UMCommonDauModel : UMUShareCommonModel
{
    NSString *_s_t;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *s_t; // @synthesize s_t=_s_t;
- (id)description;
- (void)generateDeleteSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)generateSaveSQLWithSQLStringArray:(id)arg1 withSQLColumnValueArray:(id)arg2;
- (void)parseDictionary:(id)arg1;
- (id)toDictionary;

@end

