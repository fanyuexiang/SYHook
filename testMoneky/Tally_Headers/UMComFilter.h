//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UMComBlackAndWhiteFilter;

@interface UMComFilter : NSObject
{
    NSString *_filterSource;
    UMComBlackAndWhiteFilter *_realWhiteListEventFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UMComBlackAndWhiteFilter *realWhiteListEventFilter; // @synthesize realWhiteListEventFilter=_realWhiteListEventFilter;
- (_Bool)setFilterSource:(id)arg1;
- (id)filterSource;
- (_Bool)isFilterValue:(id)arg1;
- (id)initWithFilterSource:(id)arg1;

@end

