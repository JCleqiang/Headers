//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "SSActivityViewDelegate-Protocol.h"
#import "TTCommentDetailCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class Article, ArticleCommentView, ArticleMomentCommentManager, ArticleMomentCommentModel, ArticleMomentManager, ArticleMomentModel, FRPostCommonButton, NSDictionary, NSString, SSActivityView, SSLoadMoreCell, SSNavigationBar, TTActivityShareManager, TTCommentDetailReplyCommentModel, TTGroupModel, Thread, UITableView;
@protocol ExploreMomentListCellUserActionItemDelegate, TTCommentModelProtocol;

@interface TTVideoCommentDetailView : SSViewBase <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, TTCommentDetailCellDelegate, SSActivityViewDelegate>
{
    double _midnightInterval;
    _Bool _hasMore;
    _Bool _fromThread;
    _Bool _showComment;
    _Bool _banEmojiInput;
    _Bool _enterFromClickComment;
    _Bool _isAdVideo;
    _Bool _showWriteComment;
    _Bool _isSelfDeleted;
    _Bool _isViewAppear;
    _Bool _fromVideoDetail;
    _Bool _fromMessage;
    UITableView *_commentListView;
    unsigned long long _sourceType;
    ArticleMomentModel *_momentModel;
    id <ExploreMomentListCellUserActionItemDelegate> _delegate;
    TTGroupModel *_groupModel;
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _updateMomentCountBlock;
    CDUnknownBlockType _scrollViewDidScrollBlock;
    CDUnknownBlockType _syncDigCountBlock;
    id <TTCommentModelProtocol> _commentModel;
    NSString *_categoryID;
    NSDictionary *_extraTrackDict;
    NSDictionary *_commentTrackDict;
    ArticleMomentCommentManager *_manager;
    ArticleMomentManager *_momentManager;
    SSNavigationBar *_navigationBar;
    ArticleCommentView *_commentView;
    TTCommentDetailReplyCommentModel *_needDeleteCommentModel;
    SSLoadMoreCell *_loadMoreCell;
    TTActivityShareManager *_activityActionManager;
    SSActivityView *_phoneShareView;
    ArticleMomentCommentModel *_replyMomentCommentModel;
    FRPostCommonButton *_postCommonButton;
    long long _publishStatusForTrack;
    NSString *_mediaId;
    NSString *_commentId;
    NSString *_gid;
    Thread *_thread;
    Thread *_originThread;
    Article *_originArticle;
    unsigned long long _repostType;
    unsigned long long _repostOriginType;
    NSString *_authorID;
    long long _groupSource;
}

+ (void)configGlobalCustomWidth:(double)arg1;
@property(nonatomic) long long groupSource; // @synthesize groupSource=_groupSource;
@property(nonatomic) _Bool fromMessage; // @synthesize fromMessage=_fromMessage;
@property(retain, nonatomic) NSString *authorID; // @synthesize authorID=_authorID;
@property(nonatomic) unsigned long long repostOriginType; // @synthesize repostOriginType=_repostOriginType;
@property(nonatomic) unsigned long long repostType; // @synthesize repostType=_repostType;
@property(retain, nonatomic) Article *originArticle; // @synthesize originArticle=_originArticle;
@property(retain, nonatomic) Thread *originThread; // @synthesize originThread=_originThread;
@property(retain, nonatomic) Thread *thread; // @synthesize thread=_thread;
@property(nonatomic) _Bool fromVideoDetail; // @synthesize fromVideoDetail=_fromVideoDetail;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(copy, nonatomic) NSString *gid; // @synthesize gid=_gid;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) long long publishStatusForTrack; // @synthesize publishStatusForTrack=_publishStatusForTrack;
@property(nonatomic) _Bool isSelfDeleted; // @synthesize isSelfDeleted=_isSelfDeleted;
@property(retain, nonatomic) FRPostCommonButton *postCommonButton; // @synthesize postCommonButton=_postCommonButton;
@property(nonatomic) _Bool showWriteComment; // @synthesize showWriteComment=_showWriteComment;
@property(retain, nonatomic) ArticleMomentCommentModel *replyMomentCommentModel; // @synthesize replyMomentCommentModel=_replyMomentCommentModel;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(retain, nonatomic) TTActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
@property(retain, nonatomic) SSLoadMoreCell *loadMoreCell; // @synthesize loadMoreCell=_loadMoreCell;
@property(retain, nonatomic) TTCommentDetailReplyCommentModel *needDeleteCommentModel; // @synthesize needDeleteCommentModel=_needDeleteCommentModel;
@property(retain, nonatomic) ArticleCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) SSNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) ArticleMomentManager *momentManager; // @synthesize momentManager=_momentManager;
@property(retain, nonatomic) ArticleMomentCommentManager *manager; // @synthesize manager=_manager;
@property(nonatomic) _Bool isAdVideo; // @synthesize isAdVideo=_isAdVideo;
@property(copy, nonatomic) NSDictionary *commentTrackDict; // @synthesize commentTrackDict=_commentTrackDict;
@property(copy, nonatomic) NSDictionary *extraTrackDict; // @synthesize extraTrackDict=_extraTrackDict;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) _Bool enterFromClickComment; // @synthesize enterFromClickComment=_enterFromClickComment;
@property(nonatomic) _Bool banEmojiInput; // @synthesize banEmojiInput=_banEmojiInput;
@property(nonatomic) _Bool showComment; // @synthesize showComment=_showComment;
@property(nonatomic) _Bool fromThread; // @synthesize fromThread=_fromThread;
@property(retain, nonatomic) id <TTCommentModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
@property(copy, nonatomic) CDUnknownBlockType syncDigCountBlock; // @synthesize syncDigCountBlock=_syncDigCountBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
@property(copy, nonatomic) CDUnknownBlockType updateMomentCountBlock; // @synthesize updateMomentCountBlock=_updateMomentCountBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(nonatomic) __weak id <ExploreMomentListCellUserActionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ArticleMomentModel *momentModel; // @synthesize momentModel=_momentModel;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) UITableView *commentListView; // @synthesize commentListView=_commentListView;
- (void).cxx_destruct;
- (void)p_deleteReplyComment;
- (void)p_replyCommentWithModel:(id)arg1 switchToEmojiInput:(_Bool)arg2;
- (void)p_enterProfileWithUserID:(id)arg1;
- (void)tt_commentCell:(id)arg1 quotedNameOnClickedWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 nameViewonClickedWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 digCommentWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 deleteCommentWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 avatarTappedWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 replyButtonClickedWithModel:(id)arg2;
- (id)umengEventName;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_needResponder;
- (void)sendMomentDetailShareTrackWithItemType:(long long)arg1;
- (long long)sourceTypeForSharedHeaderItem:(id)arg1 momentModel:(id)arg2;
- (void)replyToCommentModel:(id)arg1 rectInKeyWindow:(struct CGRect)arg2;
- (void)loginOrReplyToCommentModel:(id)arg1 rectInKeyWindow:(struct CGRect)arg2;
- (void)activityView:(id)arg1 didCompleteByItemType:(long long)arg2;
- (void)shareButtonPressed;
- (void)diggButtonPressed;
- (void)commentDiggButtonClicked;
- (void)userInfoDiggButtonClicked:(id)arg1;
- (void)commentButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deleteLocalCommentModel:(id)arg1;
- (void)insertLocalMomentCommentModel:(id)arg1;
- (void)openForwardView;
- (void)forwardToWeitoutiao;
- (void)forwardButtonClicked;
- (void)backButtonClicked;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (void)loadMore;
- (void)reloadArticleCommentListIfNeeded;
- (void)reloadListViewData;
- (void)refreshHeaderView;
- (void)loadHeaderViewForMomentModel:(id)arg1 delegate:(id)arg2;
- (void)refreshMomentDetailViewWithModel:(id)arg1 delegate:(id)arg2;
- (void)refreshMomentModel:(id)arg1;
- (void)receiveDeleteMomentNotification:(id)arg1;
- (void)notifyDeleteIfNeed;
- (void)fontSizeChanged:(id)arg1;
- (void)receiveMomentCommentNeedDeleteNotification:(id)arg1;
- (id)getDetailViewHeaderItem;
- (void)commonInitialization;
- (void)refreshBottomSendMomentButtonTitle;
- (void)scrollCommentIfNeed;
- (void)showWriteCommentIfNeed;
- (void)refreshDiggButtonStatus;
- (void)markShowCommentViewTimeout;
- (void)willDisappear;
- (void)didAppear;
- (void)requestThreadDetailInfoIfNeed;
- (id)initWithFrame:(struct CGRect)arg1 commentId:(long long)arg2 momentModel:(id)arg3 delegate:(id)arg4 showWriteComment:(_Bool)arg5 fromVideoDetail:(_Bool)arg6 fromMessage:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1 momentModel:(id)arg2 articleMomentManager:(id)arg3 sourceType:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 momentModel:(id)arg2 articleMomentManager:(id)arg3 sourceType:(unsigned long long)arg4 replyMomentCommentModel:(id)arg5 showWriteComment:(_Bool)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
