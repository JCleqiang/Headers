//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RMStorageManager : NSObject
{
}

+ (id)stringFromArray:(id)arg1;
+ (void)saveDownloadErrorListToDataCenter:(id)arg1;
+ (id)loadDownloadErrorListFromDataCenter;
+ (void)saveDownloadListToDataCenter:(id)arg1;
+ (id)loadDownloadListFromDataCenter;
+ (_Bool)needCreateBundleDirectory:(id)arg1;
+ (_Bool)isFileExist:(id)arg1 checkFileOnly:(_Bool)arg2;
+ (_Bool)isFileExist:(id)arg1;
+ (void)createDirectoryIfNeeded:(id)arg1;
+ (_Bool)hasContentInDirectory:(id)arg1;
+ (id)searchResourceByResourceRequest:(id)arg1;
+ (id)storagePathOfResourceReq:(id)arg1;

@end

