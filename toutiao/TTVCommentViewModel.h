//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, TTVideoCommentService;
@protocol TTVCommentDataSource;

@interface TTVCommentViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _isLoadingMore;
    _Bool _bannComment;
    _Bool _banEmojiInput;
    _Bool _goTopicDetail;
    _Bool _detailNoComment;
    _Bool _hasFoldComment;
    _Bool _hasSendFoldCommentCellShowTracker;
    _Bool _hasMoreStickComment;
    _Bool _reloadFlag;
    id <TTVCommentDataSource> _datasource;
    long long _loadResult;
    long long _commentTotalNum;
    double _containViewWidth;
    NSMutableDictionary *_commentCategoryModels;
    long long _curCommentCategory;
    long long _lastLoadMode;
    NSArray *_commentTabNames;
    TTVideoCommentService *_commentService;
    NSString *_topCommentID;
}

@property(nonatomic) _Bool reloadFlag; // @synthesize reloadFlag=_reloadFlag;
@property(retain, nonatomic) NSString *topCommentID; // @synthesize topCommentID=_topCommentID;
@property(nonatomic) _Bool hasMoreStickComment; // @synthesize hasMoreStickComment=_hasMoreStickComment;
@property(nonatomic) _Bool hasSendFoldCommentCellShowTracker; // @synthesize hasSendFoldCommentCellShowTracker=_hasSendFoldCommentCellShowTracker;
@property(retain, nonatomic) TTVideoCommentService *commentService; // @synthesize commentService=_commentService;
@property(retain, nonatomic) NSArray *commentTabNames; // @synthesize commentTabNames=_commentTabNames;
@property(nonatomic) long long lastLoadMode; // @synthesize lastLoadMode=_lastLoadMode;
@property(nonatomic) long long curCommentCategory; // @synthesize curCommentCategory=_curCommentCategory;
@property(retain, nonatomic) NSMutableDictionary *commentCategoryModels; // @synthesize commentCategoryModels=_commentCategoryModels;
@property(nonatomic) _Bool hasFoldComment; // @synthesize hasFoldComment=_hasFoldComment;
@property(nonatomic) double containViewWidth; // @synthesize containViewWidth=_containViewWidth;
@property(nonatomic) _Bool detailNoComment; // @synthesize detailNoComment=_detailNoComment;
@property(nonatomic) _Bool goTopicDetail; // @synthesize goTopicDetail=_goTopicDetail;
@property(nonatomic) _Bool banEmojiInput; // @synthesize banEmojiInput=_banEmojiInput;
@property(nonatomic) _Bool bannComment; // @synthesize bannComment=_bannComment;
@property(nonatomic) long long commentTotalNum; // @synthesize commentTotalNum=_commentTotalNum;
@property(nonatomic) long long loadResult; // @synthesize loadResult=_loadResult;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <TTVCommentDataSource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (id)getArticle;
- (void)p_setShouldRefreshCommentTableView;
- (id)p_constructCommentListItemWithItems:(id)arg1;
- (void)p_setCommentObject:(id)arg1 fromResult:(id)arg2;
- (void)p_parseRefreshResult:(id)arg1;
- (id)p_curCommentManagedObject;
- (void)p_resetViewModelFlags;
- (void)p_setViewModelFlagsWithLoadMode:(long long)arg1;
- (_Bool)p_isValidLoadRequest;
- (_Bool)p_isInvalidLoadMore;
- (_Bool)p_isLoadingMore;
- (_Bool)p_isUnnecessaryLoad;
- (_Bool)p_hasLoadCommentsForCurCategory;
- (_Bool)needStashStickCommentModelsWithResponse:(id)arg1;
- (void)p_fetchDataWithParameters:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)p_getCommentParameterForMode:(long long)arg1;
- (void)refreshLayout:(CDUnknownBlockType)arg1;
- (_Bool)needShowFooterCell;
- (_Bool)isFooterCellWithIndexPath:(id)arg1;
- (_Bool)needLoadingMore;
- (_Bool)needLoadingUpdate;
- (void)addToTopWithCommentItem:(id)arg1;
- (_Bool)removeCommentItem:(id)arg1;
- (void)clearDefaultReplyCommentItem;
- (id)defaultReplyCommentItem;
- (_Bool)removeCommentItemWithCommentID:(id)arg1;
- (id)commentItemWithCommentID:(id)arg1;
- (id)commentItemAtIndex:(unsigned long long)arg1;
- (id)curCommentItems;
- (void)startLoadCommentsForMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)commonInit;
- (id)init;
- (void)p_sendShowTrackForFoldCommentCellIfNeed:(id)arg1;
- (void)sendShowTrackForEmbeddedCell:(id)arg1 atIndexPath:(id)arg2;
- (void)sendCommentClickTrackWithTagIndex:(long long)arg1;
- (void)recordForComment:(id)arg1 status:(long long)arg2;
- (void)leaveCommentImpression;
- (void)enterCommentImpression;
- (void)unregisterFromImpressionManager:(id)arg1;
- (void)registerToImpressionManager:(id)arg1;

@end
