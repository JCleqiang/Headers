//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache, NSMutableArray, NSMutableDictionary;
@protocol WKTemplateDownloadProtocol, WKTemplateStorageProtocol;

@interface MQPTemplateManager : NSObject
{
    NSMutableDictionary *_cachedQuickPayTpls;
    id <WKTemplateDownloadProtocol> _downloadManager;
    id <WKTemplateStorageProtocol> _dbManager;
    NSCache *_cacheTemplate;
    NSMutableArray *_blockArray;
}

+ (id)tplVersion;
+ (id)defaultManager;
@property(retain) NSMutableArray *blockArray; // @synthesize blockArray=_blockArray;
@property(retain, nonatomic) NSCache *cacheTemplate; // @synthesize cacheTemplate=_cacheTemplate;
@property(retain, nonatomic) id <WKTemplateStorageProtocol> dbManager; // @synthesize dbManager=_dbManager;
@property(retain, nonatomic) id <WKTemplateDownloadProtocol> downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) NSMutableDictionary *cachedQuickPayTpls; // @synthesize cachedQuickPayTpls=_cachedQuickPayTpls;
- (void).cxx_destruct;
- (id)cachedTemplatesByIds:(id)arg1;
- (void)addTemplateCaches:(id)arg1;
- (void)addTemplateCache:(id)arg1;
- (_Bool)saveTemplates:(id)arg1;
- (void)requestTemplates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedTemplateById:(id)arg1;
- (_Bool)save:(id)arg1;
- (void)setupTemplateManager;
- (id)init;

@end
