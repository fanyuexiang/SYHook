//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BU_Node, BU_SVGKParseResult, BU_SVGKSource, NSArray, NSMutableDictionary, NSString;

@protocol BU_SVGKParserExtension <NSObject>
- (void)handleEndElement:(BU_Node *)arg1 document:(BU_SVGKSource *)arg2 parseResult:(BU_SVGKParseResult *)arg3;
- (BU_Node *)handleStartElement:(NSString *)arg1 document:(BU_SVGKSource *)arg2 namePrefix:(NSString *)arg3 namespaceURI:(NSString *)arg4 attributes:(NSMutableDictionary *)arg5 parseResult:(BU_SVGKParseResult *)arg6 parentNode:(BU_Node *)arg7;
- (NSArray *)supportedTags;
- (NSArray *)supportedNamespaces;
@end

