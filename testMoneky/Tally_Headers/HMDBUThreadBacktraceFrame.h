//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDBUThreadBacktraceFrame : NSObject
{
    unsigned long long _stackIndex;
    unsigned long long _address;
    unsigned long long _imageAddress;
    NSString *_imageName;
    unsigned long long _symbolAddress;
    NSString *_symbolName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(nonatomic) unsigned long long symbolAddress; // @synthesize symbolAddress=_symbolAddress;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) unsigned long long imageAddress; // @synthesize imageAddress=_imageAddress;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(nonatomic) unsigned long long stackIndex; // @synthesize stackIndex=_stackIndex;
- (_Bool)symbolicate;
- (id)init;
- (id)description;
- (id)jsonObject;

@end

