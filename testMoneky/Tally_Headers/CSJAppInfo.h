//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJActionAppModel-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface CSJAppInfo : NSObject <CSJActionAppModel, NSCoding>
{
    NSString *_appName;
    NSString *_appid;
    NSString *_downloadURL;
    double _score;
    long long _commentNum;
    long long _appSize;
    NSString *_packageName;
    NSArray *_creativeTags;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *creativeTags; // @synthesize creativeTags=_creativeTags;
@property(copy, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) long long appSize; // @synthesize appSize=_appSize;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (long long)defaultCommentNumValue;
- (double)defaultScoreValue;
- (id)dictionaryValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)setupBackupWith:(id)arg1;
- (void)setupDataWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

