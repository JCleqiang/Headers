//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBARCacheManager : NSObject
{
    int _limitMaxNum;
    NSString *_cacheRootPath;
    NSString *_identifier;
    NSMutableArray *_downloadList;
}

@property(nonatomic) int limitMaxNum; // @synthesize limitMaxNum=_limitMaxNum;
@property(retain, nonatomic) NSMutableArray *downloadList; // @synthesize downloadList=_downloadList;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *cacheRootPath; // @synthesize cacheRootPath=_cacheRootPath;
- (void).cxx_destruct;
- (id)loadData;
- (void)saveDownloadList;
- (id)saveDownloadPath;
- (_Bool)downloadListContainsPath:(id)arg1;
- (id)filePathsWithDirPath:(id)arg1;
- (void)clearUnUsePath;
- (void)checkAndClearPath;
- (void)updateDownloadWithZipPath:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

