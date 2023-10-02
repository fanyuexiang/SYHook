//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUADServiceBuilder;

@interface BUADServiceCenter : NSObject
{
    BUADServiceBuilder *_builder;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
@property(retain, nonatomic) BUADServiceBuilder *builder; // @synthesize builder=_builder;
- (void)loadDefaultModules;
- (void)setupData;
- (id)getObject:(id)arg1 nameWithArgs:(id)arg2;
- (id)getObjectWithArgs:(id)arg1;
- (id)getObject:(id)arg1 name:(id)arg2;
- (id)getObject:(id)arg1;

@end

