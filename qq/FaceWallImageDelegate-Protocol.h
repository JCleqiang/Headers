//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class FaceWallImageView;

@protocol FaceWallImageDelegate <NSObject>

@optional
- (void)notifyNetWorkError:(FaceWallImageView *)arg1;
- (void)notifyDownloadFail:(FaceWallImageView *)arg1;
- (void)notifyDownloadSuccess:(FaceWallImageView *)arg1;
- (void)notifyDownloadProgress:(double)arg1 FaceWallImageView:(FaceWallImageView *)arg2;
- (void)notifyBeginloadImage:(FaceWallImageView *)arg1;
@end

