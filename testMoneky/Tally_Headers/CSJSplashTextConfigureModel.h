//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface CSJSplashTextConfigureModel : NSObject <NSCoding>
{
    long long _font_size;
}

@property(nonatomic) long long font_size; // @synthesize font_size=_font_size;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithConfigure:(id)arg1 defaultFontSize:(double)arg2;

@end

