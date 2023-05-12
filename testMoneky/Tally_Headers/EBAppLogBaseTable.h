//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EBAppLogBaseTable : NSObject
{
    NSString *_tableName;
}

+ (id)dataBasePathComponent;
+ (id)tableWithName:(id)arg1;
+ (id)sharedDatabaseQueue;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)bd_JSONValueForString:(id)arg1;
- (id)bd_JSONRepresentation:(id)arg1;
- (id)insertSql;
- (id)createTableSql;
- (id)allTracks;
- (void)removeTracksByID:(id)arg1;
- (void)insertTrack:(id)arg1 trackID:(id)arg2;
- (void)insertTrack:(id)arg1;
- (void)checkDBFile;
- (id)initWithTableName:(id)arg1;
- (id)init;

@end
