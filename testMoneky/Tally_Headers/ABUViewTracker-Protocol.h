//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol ABUViewTracker <NSObject>
@property(retain, nonatomic) id admodel;
@property(retain, nonatomic) NSDictionary *extra;
@property(copy, nonatomic) CDUnknownBlockType hideEvent;
@property(copy, nonatomic) CDUnknownBlockType showEvent;
@property(nonatomic) double showTimestamp;
@property(nonatomic) long long lastPresentation;
@property(nonatomic) long long repeatType;
@property(nonatomic) _Bool isWitness;
- (void)snapShot;
- (_Bool)checkIfViewInScreen;
- (_Bool)invalid;
@end

