//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface ABUAdStorageMatchingIndicator : NSObject
{
    _Bool _needCheckAd;
    NSString *_linkID;
    unsigned long long _linkIDMatchMode;
    NSString *_reuseIdentifier;
    CDUnknownBlockType _allowReuse;
    NSString *_lookupID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lookupID; // @synthesize lookupID=_lookupID;
@property(nonatomic) _Bool needCheckAd; // @synthesize needCheckAd=_needCheckAd;
@property(copy, nonatomic) CDUnknownBlockType allowReuse; // @synthesize allowReuse=_allowReuse;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) unsigned long long linkIDMatchMode; // @synthesize linkIDMatchMode=_linkIDMatchMode;
@property(copy, nonatomic) NSString *linkID; // @synthesize linkID=_linkID;
@property(copy, nonatomic) NSMutableSet *excludePackageIds;

@end

