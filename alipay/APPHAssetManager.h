//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APMCache, NSLock, NSMutableDictionary;

@interface APPHAssetManager : NSObject
{
    NSMutableDictionary *_statusDic;
    NSMutableDictionary *_progressDic;
    NSLock *_lock;
    NSMutableDictionary *_progressHanlderDic;
    NSMutableDictionary *_statusHanlderDic;
    APMCache *_statusCache;
    NSMutableDictionary *_queryInfoDic;
    APMCache *_localIDPHAssetCache;
}

+ (id)asyncImageRequestOptions;
+ (id)syncImageRequestOptions;
+ (id)queryInfoForPHAsset:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) APMCache *localIDPHAssetCache; // @synthesize localIDPHAssetCache=_localIDPHAssetCache;
@property(retain, nonatomic) NSMutableDictionary *queryInfoDic; // @synthesize queryInfoDic=_queryInfoDic;
@property(retain, nonatomic) APMCache *statusCache; // @synthesize statusCache=_statusCache;
@property(retain, nonatomic) NSMutableDictionary *statusHanlderDic; // @synthesize statusHanlderDic=_statusHanlderDic;
@property(retain, nonatomic) NSMutableDictionary *progressHanlderDic; // @synthesize progressHanlderDic=_progressHanlderDic;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *progressDic; // @synthesize progressDic=_progressDic;
@property(retain, nonatomic) NSMutableDictionary *statusDic; // @synthesize statusDic=_statusDic;
- (void).cxx_destruct;
- (id)addPrefix:(id)arg1 withKey:(id)arg2;
- (id)getPHAsstByLocalID:(id)arg1;
- (void)removePhassetByLocalID:(id)arg1;
- (id)getLocalIdentiferOfPHAssetWithLocalID:(id)arg1;
- (void)mappingLocalID:(id)arg1 withPHAsset:(id)arg2;
- (void)removePhassetInfo:(id)arg1;
- (id)phassetInfo:(id)arg1;
- (void)addQueryInfo:(id)arg1 asset:(id)arg2;
- (void)removeStatusFromCacheByLocalID:(id)arg1;
- (void)saveStatusToCache:(unsigned long long)arg1 localID:(id)arg2;
- (void)doStatusCallback:(unsigned long long)arg1 localID:(id)arg2;
- (void)removeStatussHandlerByLocalID:(id)arg1;
- (void)addStatusHandler:(CDUnknownBlockType)arg1 localID:(id)arg2;
- (void)doProgressCallback:(double)arg1 localID:(id)arg2;
- (void)removeProgressHandlerByLocalID:(id)arg1;
- (void)addProgressHandler:(CDUnknownBlockType)arg1 localID:(id)arg2;
- (double)progressForPHAssetByLocalID:(id)arg1;
- (void)progressChangedTo:(double)arg1 localID:(id)arg2;
- (unsigned long long)statusForPHAssetByLocalID:(id)arg1;
- (void)statusChangedTo:(unsigned long long)arg1 localID:(id)arg2;
- (void)safeRemoveObjectForKey:(id)arg1 atDic:(id)arg2;
- (id)safeGetObjectForKey:(id)arg1 atDic:(id)arg2;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2 atDic:(id)arg3;
- (_Bool)progressWithLocalID:(id)arg1 sysProgress:(double)arg2 curProgress:(double)arg3;
- (_Bool)isPHImageManagerMaximumSize:(struct CGSize)arg1;
- (_Bool)shouldUseImageInterface:(id)arg1 needCompress:(_Bool)arg2;
- (struct CGSize)generateReasonableImageSize:(id)arg1 maxSizeIsForced:(_Bool)arg2;
- (id)workAroundWhenAssetNotFound:(id)arg1;
- (id)retrievePHAssetFromLocalIdentifier:(id)arg1;
- (void)getLowQualityImage:(id)arg1 size:(struct CGSize)arg2 curTryCount:(int)arg3 lastTry:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
- (void)asyncGetBestLowQualityImageForPHAsset:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (int)asyncGetImage:(id)arg1 localID:(id)arg2 targetSize:(struct CGSize)arg3 status:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (int)asyncGetImageByPHAsset:(id)arg1 targetSize:(struct CGSize)arg2 status:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (int)asyncGetImageByLocalID:(id)arg1 targetSize:(struct CGSize)arg2 status:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (id)syncGetDataByLocalID:(id)arg1 status:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (id)syncGetImageByLocalID:(id)arg1 targetSize:(struct CGSize)arg2 status:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4;
- (id)init;

@end

