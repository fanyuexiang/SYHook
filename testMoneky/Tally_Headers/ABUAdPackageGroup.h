//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABUAdPackage.h"

#import "_ABUAdPackageGroupLink-Protocol.h"

@class NSString;
@protocol _ABUAdPackageGroupLink;

@interface ABUAdPackageGroup : ABUAdPackage <_ABUAdPackageGroupLink>
{
    id <_ABUAdPackageGroupLink> next;
}

+ (id)convertFromPackage:(id)arg1;
+ (id)packageWithPackage:(id)arg1;
+ (id)packageWithPackages:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <_ABUAdPackageGroupLink> next; // @synthesize next;
- (id)value;
- (void)enumPackagesWithBlock:(CDUnknownBlockType)arg1;
- (id)_last;
- (_Bool)_containsPackage:(id)arg1;
- (void)appendPackage:(id)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setLinkID:(id)arg1;
- (void)updateWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

