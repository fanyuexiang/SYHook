//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface CSJPersonalizationPrompts : NSObject <NSCoding>
{
    NSString *_personalizationName;
    NSString *_personalizationUrl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *personalizationUrl; // @synthesize personalizationUrl=_personalizationUrl;
@property(copy, nonatomic) NSString *personalizationName; // @synthesize personalizationName=_personalizationName;
- (_Bool)validPersonalPrompts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

