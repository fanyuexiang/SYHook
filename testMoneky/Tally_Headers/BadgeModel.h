//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BadgeModel : NSObject
{
    _Bool _hasGet;
    NSString *_name;
    NSString *_badgeID;
    NSString *_imageName;
    NSString *_shareTitle;
    NSString *_shareSubTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *shareSubTitle; // @synthesize shareSubTitle=_shareSubTitle;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool hasGet; // @synthesize hasGet=_hasGet;
@property(retain, nonatomic) NSString *badgeID; // @synthesize badgeID=_badgeID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bigImageName;
- (id)initDict:(id)arg1;

@end

