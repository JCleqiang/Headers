//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class HotPicInfo, HotPicInfoListRet, HotPicTagListRet, UIImage;

@protocol IHotPicLibraryEngineDelegate <NSObject>

@optional
- (_Bool)hotPicOpenPredownload;
- (void)hotPicInfoImgReadyImg:(UIImage *)arg1 tagId:(unsigned long long)arg2 picInfo:(HotPicInfo *)arg3 loadStatus:(int)arg4 isThumbPicFile:(_Bool)arg5;
- (void)hotPicTagListReady:(HotPicTagListRet *)arg1;
- (void)hotPicInfoListReadyPicTag:(unsigned long long)arg1 infoList:(HotPicInfoListRet *)arg2;
@end
