//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSJModelSerialization-Protocol.h"

@class NSString;

@interface CSJWCMiniappResponseModel : NSObject <CSJModelSerialization>
{
    NSString *_scheme;
    NSString *_userName;
    NSString *_path;
}

+ (id)fromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (_Bool)validSchemeInfo;
- (_Bool)validOpenSDKInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
