//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface BU_NamedNodeMap : NSObject <NSCopying>
{
    NSMutableDictionary *internalDictionary;
    NSMutableDictionary *internalDictionaryOfNamespaces;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *internalDictionaryOfNamespaces; // @synthesize internalDictionaryOfNamespaces;
@property(retain, nonatomic) NSMutableDictionary *internalDictionary; // @synthesize internalDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allNodesUnsortedDOM2;
- (id)description;
- (id)setNamedItemNS:(id)arg1 inNodeNamespace:(id)arg2;
- (id)setNamedItemNS:(id)arg1;
- (id)getNamedItemNS:(id)arg1 localName:(id)arg2;
- (id)item:(unsigned long long)arg1;
@property(readonly) unsigned long long length;
- (id)removeNamedItem:(id)arg1;
- (id)setNamedItem:(id)arg1;
- (id)getNamedItem:(id)arg1;
- (id)init;

@end

