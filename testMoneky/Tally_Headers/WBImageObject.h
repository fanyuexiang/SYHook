//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, PHAsset;
@protocol WBMediaTransferProtocol;

@interface WBImageObject : NSObject
{
    _Bool _isShareToStory;
    _Bool _isLivePhoto;
    NSData *imageData;
    id <WBMediaTransferProtocol> _delegate;
    PHAsset *_livePhotoAsset;
    NSArray *_finalAssetArray;
    NSArray *_imageDataArray;
    NSArray *_imagePathArray;
    NSData *_livePhotoImageData;
    NSData *_livePhotoVideoData;
    NSString *_livePhotoImagePath;
    NSString *_livePhotoVideoPath;
    NSString *_livePhotoVideoFormat;
    NSData *_panoramaImageData;
}

+ (id)imageObjectWithDictionary:(id)arg1;
+ (id)dictionaryWithImageObject:(id)arg1;
+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *panoramaImageData; // @synthesize panoramaImageData=_panoramaImageData;
@property(nonatomic) _Bool isLivePhoto; // @synthesize isLivePhoto=_isLivePhoto;
@property(retain, nonatomic) NSString *livePhotoVideoFormat; // @synthesize livePhotoVideoFormat=_livePhotoVideoFormat;
@property(retain, nonatomic) NSString *livePhotoVideoPath; // @synthesize livePhotoVideoPath=_livePhotoVideoPath;
@property(retain, nonatomic) NSString *livePhotoImagePath; // @synthesize livePhotoImagePath=_livePhotoImagePath;
@property(retain, nonatomic) NSData *livePhotoVideoData; // @synthesize livePhotoVideoData=_livePhotoVideoData;
@property(retain, nonatomic) NSData *livePhotoImageData; // @synthesize livePhotoImageData=_livePhotoImageData;
@property(retain, nonatomic) NSArray *imagePathArray; // @synthesize imagePathArray=_imagePathArray;
@property(retain, nonatomic) NSArray *imageDataArray; // @synthesize imageDataArray=_imageDataArray;
@property(retain, nonatomic) NSArray *finalAssetArray; // @synthesize finalAssetArray=_finalAssetArray;
@property(retain, nonatomic) PHAsset *livePhotoAsset; // @synthesize livePhotoAsset=_livePhotoAsset;
@property(nonatomic) __weak id <WBMediaTransferProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShareToStory; // @synthesize isShareToStory=_isShareToStory;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData;
- (id)image;
- (void)setLivePhotoImageUrl:(id)arg1 livePhotoVideoUrl:(id)arg2;
- (void)callAddLivePhoto:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLivePhotoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addImages:(id)arg1;
- (id)validate;

@end

