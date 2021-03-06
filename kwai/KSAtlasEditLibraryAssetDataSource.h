//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasEditAssetDataSource-Protocol.h"

@class KSAtlasEditLibraryAssetManager, NSString;
@protocol KSAtlasEditAsset;

@interface KSAtlasEditLibraryAssetDataSource : NSObject <KSAtlasEditAssetDataSource>
{
    _Bool _deduplicated;
    id <KSAtlasEditAsset> _asset;
    KSAtlasEditLibraryAssetManager *_assetManager;
}

@property(retain, nonatomic) KSAtlasEditLibraryAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic) _Bool deduplicated; // @synthesize deduplicated=_deduplicated;
@property(readonly) id <KSAtlasEditAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)clearDiskCache;
- (void)clearMemoryCache;
- (id)thumbnailImageWithSize:(struct CGSize)arg1 cancelToken:(id)arg2;
- (id)imageForElement:(id)arg1 cancelToken:(id)arg2;
- (id)initWithAtlasLibraryAsset:(id)arg1 assetManager:(id)arg2 deduplicated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

