//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUPersistenceLRULinkedNode, NSMapTable;

@interface BUPersistenceLRULinkedList : NSObject
{
    unsigned long long _currentCapacityCount;
    unsigned long long _currentCapacitySize;
    BUPersistenceLRULinkedNode *_header;
    BUPersistenceLRULinkedNode *_tail;
    NSMapTable *_mapTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
@property(retain, nonatomic) BUPersistenceLRULinkedNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) BUPersistenceLRULinkedNode *header; // @synthesize header=_header;
@property(nonatomic) unsigned long long currentCapacitySize; // @synthesize currentCapacitySize=_currentCapacitySize;
@property(nonatomic) unsigned long long currentCapacityCount; // @synthesize currentCapacityCount=_currentCapacityCount;
- (void)removeAll;
- (id)removeTailNode;
- (void)removeNodeWithKey:(id)arg1;
- (void)bringNodeToHeadWithKeys:(id)arg1;
- (void)bringNodeToHeadWithKey:(id)arg1;
- (void)insertNodeAtHeadWithKey:(id)arg1;
- (id)init;

@end

