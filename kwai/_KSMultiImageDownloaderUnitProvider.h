//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSImageAsset, UIImage;

@interface _KSMultiImageDownloaderUnitProvider : NSObject
{
    UIImage *_resultImage;
    KSImageAsset *_imageAsset;
}

@property(retain, nonatomic) KSImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;
@property(retain, nonatomic) UIImage *resultImage; // @synthesize resultImage=_resultImage;
- (void).cxx_destruct;
- (id)downloadImageWithUrl:(id)arg1;

@end
