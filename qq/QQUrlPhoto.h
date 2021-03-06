//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBasePhoto.h>

@class NSString;

@interface QQUrlPhoto : QQBasePhoto
{
    NSString *_photoUrl;
    NSString *_thumbUrl;
    NSString *imageTypeFromHTTP;
    NSString *imageFormat;
    _Bool _needRouteAdapterIpList;
}

@property(nonatomic) _Bool needRouteAdapterIpList; // @synthesize needRouteAdapterIpList=_needRouteAdapterIpList;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
- (void).cxx_destruct;
- (void)thumbPhotoRequestDidFinishLoad;
- (void)photoRequestDidFinishLoad;
- (void)sendThumbRequest;
- (void)sendRequest;
- (void)cancelDownloadPhoto;
- (void)downloadThumbPhoto;
- (void)downloadPhoto;
- (_Bool)isGif;
- (id)getImageRaw;

@end

