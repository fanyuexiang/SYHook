//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GADOMIDCommandPublisher;

@interface GADOMIDAdSessionStatePublisher : NSObject
{
    id <GADOMIDCommandPublisher> _commandPublisher;
    unsigned long long _adState;
    double _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long adState; // @synthesize adState=_adState;
@property(readonly, nonatomic) id <GADOMIDCommandPublisher> commandPublisher; // @synthesize commandPublisher=_commandPublisher;
- (void)publishDeviceVolume:(double)arg1;
- (void)publishAppState:(id)arg1;
- (void)publishEmptyNativeViewStateWithHierarchy:(id)arg1 timestamp:(double)arg2;
- (void)publishNativeViewStateWithHierarchy:(id)arg1 timestamp:(double)arg2;
- (void)cleanupAdState;
- (id)initWithCommandPublisher:(id)arg1;

@end
