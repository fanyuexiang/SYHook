//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_SVGKParserExtension-Protocol.h"

@class NSString;

@interface BU_SVGKParserPatternsAndGradients : NSObject <BU_SVGKParserExtension>
{
}

- (void)handleEndElement:(id)arg1 document:(id)arg2 parseResult:(id)arg3;
- (id)handleStartElement:(id)arg1 document:(id)arg2 namePrefix:(id)arg3 namespaceURI:(id)arg4 attributes:(id)arg5 parseResult:(id)arg6 parentNode:(id)arg7;
- (id)supportedTags;
- (id)supportedNamespaces;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

