//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMThreadBlockCheckerConfig : NSObject
{
    float _sendBeatInterval;
    float _checkBeatInterval;
    long long _toleranceBeatMissingCount;
}

@property(nonatomic) long long toleranceBeatMissingCount; // @synthesize toleranceBeatMissingCount=_toleranceBeatMissingCount;
@property(nonatomic) float checkBeatInterval; // @synthesize checkBeatInterval=_checkBeatInterval;
@property(nonatomic) float sendBeatInterval; // @synthesize sendBeatInterval=_sendBeatInterval;

@end
