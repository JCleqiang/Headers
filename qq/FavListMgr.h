//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/FavListSearcherDelegate-Protocol.h>
#import <QQMainProject/ListSyncDelegate-Protocol.h>

@class FavListSearcher, ListCache, ListSync, NSMutableArray, NSString;

@interface FavListMgr : NSObject <ListSyncDelegate, FavListSearcherDelegate>
{
    ListCache *_listCacher;
    ListSync *_listSync;
    FavListSearcher *_listSearcher;
    NSMutableArray *_unknownItems;
    NSMutableArray *_autoRetryItems;
    unsigned long long _fetchFlag;
    int _fetchPolicy;
    _Bool _updatingFolderInfos;
    NSMutableArray *_itemsToChangeFolder;
    NSMutableArray *_successFolderChangingCids;
    unsigned long long _maxFolderCount;
    int _repSource;
    int _wifiFetch_maxItems;
}

+ (id)getInstance;
@property(nonatomic) int wifiFetch_maxItems; // @synthesize wifiFetch_maxItems=_wifiFetch_maxItems;
- (void)Callback_GetCollection2Group:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (void)Callback_GetCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (void)Callback_ModCollection2Group:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (void)Callback_DelCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (void)Callback_ModCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (void)Callback_AddCustomGroup:(int)arg1 ErrorType:(int)arg2 userInfo:(id)arg3;
- (id)folderCountLimitTips;
- (_Bool)_moveCidsBatch:(id)arg1 toFolder:(unsigned int)arg2 limit:(unsigned long long)arg3;
- (_Bool)moveFavorites:(id)arg1 toFolder:(unsigned int)arg2;
- (_Bool)deleteFolders:(id)arg1;
- (_Bool)modifyFolder:(unsigned int)arg1 name:(id)arg2;
- (_Bool)addNewFolder:(id)arg1;
- (id)queryFolder:(unsigned int)arg1;
- (_Bool)_refreshFolderInfos;
- (id)getFolderList;
- (id)spaceLimitTips;
- (_Bool)hasMoreDataOnServer;
- (_Bool)updateItem:(unsigned long long)arg1 topTime:(unsigned long long)arg2;
- (_Bool)updateItemWithModel:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)reachabilityChanged;
- (void)_RetryDeleteFav;
- (_Bool)_RetryUploadFav:(_Bool)arg1;
- (void)_RetryUploadFav:(_Bool)arg1 resultCallBack:(CDUnknownBlockType)arg2;
- (void)_RetryUploadFav;
- (_Bool)refreshUnknownItems;
- (_Bool)getSummaries:(id)arg1;
- (_Bool)getSummary:(unsigned long long)arg1;
- (_Bool)getCompatibleHtmlInfo:(unsigned long long)arg1;
- (_Bool)getShareUrl:(unsigned long long)arg1;
- (void)stopSearch:(_Bool)arg1;
- (void)searchMore;
- (void)startSearch:(id)arg1 class:(int)arg2 folder:(unsigned int)arg3 searchType:(int)arg4 isAsync:(_Bool)arg5;
- (void)saveNovieGuide:(_Bool)arg1;
- (_Bool)isNoviceGuideShowed;
- (void)saveHasUsed:(_Bool)arg1;
- (void)Callback_ListSearch:(id)arg1;
- (void)Callback_GetSummary:(int)arg1 ErrorType:(int)arg2 favList:(id)arg3;
- (void)Callback_GetCompatibleHtmlInfo:(int)arg1 ErrorType:(int)arg2 Cid:(id)arg3 HtmlContent:(id)arg4 ResourceList:(id)arg5;
- (void)Callback_GetShareUrl:(int)arg1 ErrorType:(int)arg2 Cid:(id)arg3 Url:(id)arg4;
- (void)Callback_DetailFetch:(int)arg1 ErrorType:(int)arg2 model:(id)arg3;
- (void)Callback_DelFav:(int)arg1 ErrorType:(int)arg2 CId:(id)arg3;
- (int)delFavWithCids:(id)arg1;
- (int)delFav:(id)arg1;
- (void)retryAddFav:(id)arg1;
- (int)sendAddCmdAndNotify:(id)arg1 userInfo:(id)arg2;
- (int)sendAddCmdAndNotify:(id)arg1;
- (void)Callback_ModifyFav:(int)arg1 errorType:(int)arg2 model:(id)arg3 userInfo:(id)arg4;
- (void)Callback_AddFav:(int)arg1 errorType:(int)arg2 model:(id)arg3 userInfo:(id)arg4;
- (int)modifyFav:(id)arg1;
- (int)addFav:(id)arg1;
- (unsigned long long)getFetchingDetailId;
- (id)getDetail:(unsigned long long)arg1;
- (id)queryImageSiblingForItem:(unsigned long long)arg1 next:(_Bool)arg2;
- (id)queryItem:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (id)queryTopItems:(unsigned int)arg1;
- (id)queryUploadingAndFailedList;
- (id)queryListWithDetail:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (id)queryList:(unsigned long long)arg1 count:(unsigned long long)arg2 filterFolder:(unsigned int)arg3 class:(int)arg4 flag:(unsigned long long)arg5 repSource:(int)arg6;
- (void)Callback_ListFetch:(int)arg1 ErrorType:(int)arg2 addList:(id)arg3 delList:(id)arg4;
- (void)Callback_ListFetchDescending:(int)arg1 ErrorType:(int)arg2 addList:(id)arg3 delList:(id)arg4;
- (void)onFetchResult:(int)arg1 errorType:(int)arg2 addList:(id)arg3 delList:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)dealFetchResult:(id)arg1 delList:(id)arg2 qzoneAddList:(id)arg3 qzoneDelList:(id)arg4 maxTime:(unsigned long long)arg5 minTime:(unsigned long long)arg6 insertCount:(unsigned long long)arg7 callback:(CDUnknownBlockType)arg8;
- (_Bool)_refreshInternal:(int)arg1;
- (int)fetchLimit;
- (_Bool)refresh:(int)arg1;
- (void)clearCacheData;
- (void)notifyUIWithNotification:(id)arg1 userInfo:(id)arg2 async:(_Bool)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

