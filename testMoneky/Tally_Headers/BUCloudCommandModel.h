//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface BUCloudCommandModel : NSObject
{
    NSNumber *_commandId;
    NSString *_type;
    NSDictionary *_params;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *commandId; // @synthesize commandId=_commandId;
- (id)initWithDict:(id)arg1;

@end
