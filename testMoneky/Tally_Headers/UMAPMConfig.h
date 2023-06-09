//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface UMAPMConfig : NSObject <NSCopying>
{
    _Bool _crashAndBlockMonitorEnable;
    _Bool _launchMonitorEnable;
    _Bool _memMonitorEnable;
    _Bool _oomMonitorEnable;
    _Bool _networkEnable;
    _Bool _javaScriptBridgeEnable;
    _Bool _pageMonitorEnable;
    float _sendBeatInterval;
    float _checkBeatInterval;
    long long _toleranceBeatMissingCount;
}

+ (void)addAPMPublicParams:(id)arg1;
+ (_Bool)handleUrl:(id)arg1;
+ (id)_defaultConfig;
+ (id)defaultConfig;
@property(nonatomic) long long toleranceBeatMissingCount; // @synthesize toleranceBeatMissingCount=_toleranceBeatMissingCount;
@property(nonatomic) float checkBeatInterval; // @synthesize checkBeatInterval=_checkBeatInterval;
@property(nonatomic) float sendBeatInterval; // @synthesize sendBeatInterval=_sendBeatInterval;
@property(nonatomic) _Bool pageMonitorEnable; // @synthesize pageMonitorEnable=_pageMonitorEnable;
@property(nonatomic) _Bool javaScriptBridgeEnable; // @synthesize javaScriptBridgeEnable=_javaScriptBridgeEnable;
@property(nonatomic) _Bool networkEnable; // @synthesize networkEnable=_networkEnable;
@property(nonatomic) _Bool oomMonitorEnable; // @synthesize oomMonitorEnable=_oomMonitorEnable;
@property(nonatomic) _Bool memMonitorEnable; // @synthesize memMonitorEnable=_memMonitorEnable;
@property(nonatomic) _Bool launchMonitorEnable; // @synthesize launchMonitorEnable=_launchMonitorEnable;
@property(nonatomic) _Bool crashAndBlockMonitorEnable; // @synthesize crashAndBlockMonitorEnable=_crashAndBlockMonitorEnable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

