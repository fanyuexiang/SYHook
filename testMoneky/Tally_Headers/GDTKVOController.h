//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GDTKVOController : NSObject
{
    NSObject *_target;
    NSMutableArray *_observerArray;
}

@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (_Bool)GDTfunctiond7SzY5:(id)arg1 forKeyPath:(id)arg2;
- (void)GDTfunctiony1Y6kM;
- (void)GDTfunctiond4RUGc:(id)arg1 forKeyPath:(id)arg2;
- (void)GDTfunctionc0qXL0:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)initWithTarget:(id)arg1;

@end

