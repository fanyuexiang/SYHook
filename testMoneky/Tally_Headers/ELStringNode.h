//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ELBaseNode.h"

@class NSString;

@interface ELStringNode : ELBaseNode
{
    NSString *_nodeRawValue;
}

+ (id)nodeWithValue:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nodeRawValue; // @synthesize nodeRawValue=_nodeRawValue;
- (id)calcuateWtihJSON:(id)arg1;
- (id)nodeStringValue;
- (id)initNodeWithValue:(id)arg1;

@end

