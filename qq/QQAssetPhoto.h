//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBasePhoto.h>

@class QQAsset, UIImage;

@interface QQAssetPhoto : QQBasePhoto
{
    QQAsset *_asset;
    UIImage *_assetImage;
    long long _newOrientation;
}

@property(nonatomic) long long newOrientation; // @synthesize newOrientation=_newOrientation;
@property(retain, nonatomic) QQAsset *asset; // @synthesize asset=_asset;
- (_Bool)isNeedAsyncLoad;
- (void)releaseImage;
- (id)getThumbImage;
- (struct CGSize)getImageSize;
- (id)getPhotoPath;
- (_Bool)isGif;
- (id)getImageRaw;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end
