//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABUAutoDetailUValue : NSObject
{
    NSString *_wfVersion;
    NSString *_lastLoadEcpm;
    NSString *_estEcpm;
    unsigned long long _estEcpmSource;
    NSString *_biddingEcpm;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *biddingEcpm; // @synthesize biddingEcpm=_biddingEcpm;
@property(nonatomic) unsigned long long estEcpmSource; // @synthesize estEcpmSource=_estEcpmSource;
@property(copy, nonatomic) NSString *estEcpm; // @synthesize estEcpm=_estEcpm;
@property(copy, nonatomic) NSString *lastLoadEcpm; // @synthesize lastLoadEcpm=_lastLoadEcpm;
@property(copy, nonatomic) NSString *wfVersion; // @synthesize wfVersion=_wfVersion;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
