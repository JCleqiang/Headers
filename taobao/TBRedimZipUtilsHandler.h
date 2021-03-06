//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXRDMZipUtilsProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface TBRedimZipUtilsHandler : NSObject <WXRDMZipUtilsProtocol>
{
}

+ (id)videoCacheDocumentDir;
+ (id)imageCacheDocumentDir;
+ (id)zipCacheDocumentDir;
- (id)getAutoCacheManagerPath:(id)arg1 type:(unsigned long long)arg2;
- (_Bool)syncUnzipFileWithZipPath:(id)arg1 unZipPath:(id)arg2;
- (void)asyncUnzipFileWithZipPath:(id)arg1 unZipPath:(id)arg2 complete:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

