//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "SSImpressionProtocol-Protocol.h"
#import "Subscriber-Protocol.h"
#import "TTCommentDetailCellDelegate-Protocol.h"
#import "TTCommentDetailHeaderDelegate-Protocol.h"
#import "TTCommentEmptyViewDelegate-Protocol.h"
#import "TTModalWrapControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerErrorHandler-Protocol.h"

@class Article, NSDate, NSDictionary, NSString, SSThemedTableView, TTCommentDetailHeader, TTCommentDetailToolbarView, TTCommentEmptyView, TTGroupModel, TTMomentDetailIndependenceState, TTMomentDetailStore, TTViewWrapper;
@protocol TTCommentModelProtocol;

@interface TTCommentDetailViewController : SSViewControllerBase <TTCommentDetailHeaderDelegate, TTCommentDetailCellDelegate, UITableViewDelegate, UITableViewDataSource, Subscriber, UIGestureRecognizerDelegate, TTCommentEmptyViewDelegate, UIViewControllerErrorHandler, SSImpressionProtocol, TTModalWrapControllerProtocol>
{
    _Bool _hasNestedInModalContainer;
    _Bool _showWriteComment;
    _Bool _showComment;
    _Bool _isViewAppear;
    _Bool _isFollow;
    _Bool _isBanBackGestureAnimate;
    _Bool _isBanCommentRepost;
    id <TTCommentModelProtocol> _commentModel;
    TTGroupModel *_groupModel;
    CDUnknownBlockType _dismissComplete;
    TTCommentDetailToolbarView *_toolbarView;
    Article *_article;
    TTViewWrapper *_viewWrapper;
    TTCommentDetailHeader *_headerView;
    SSThemedTableView *_tableView;
    TTCommentEmptyView *_emptyView;
    TTMomentDetailStore *_store;
    TTMomentDetailIndependenceState *_pageState;
    NSString *_recommendReason;
    NSString *_categoryName;
    NSString *_enterFrom;
    NSString *_commentId;
    NSString *_gtype;
    NSString *_clickArea;
    NSString *_itemId;
    NSString *_groupSource;
    NSString *_groupUserId;
    NSString *_follow;
    NSString *_groupId;
    NSString *_fromPage;
    NSDictionary *_logpb;
    NSDictionary *_trackExtra;
    long long _uniqueID;
    NSDate *_enterDate;
}

+ (void)load;
@property(nonatomic) _Bool isBanCommentRepost; // @synthesize isBanCommentRepost=_isBanCommentRepost;
@property(nonatomic) _Bool isBanBackGestureAnimate; // @synthesize isBanBackGestureAnimate=_isBanBackGestureAnimate;
@property(retain, nonatomic) NSDate *enterDate; // @synthesize enterDate=_enterDate;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSDictionary *trackExtra; // @synthesize trackExtra=_trackExtra;
@property(retain, nonatomic) NSDictionary *logpb; // @synthesize logpb=_logpb;
@property(retain, nonatomic) NSString *fromPage; // @synthesize fromPage=_fromPage;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *follow; // @synthesize follow=_follow;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(retain, nonatomic) NSString *groupUserId; // @synthesize groupUserId=_groupUserId;
@property(nonatomic) NSString *groupSource; // @synthesize groupSource=_groupSource;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *clickArea; // @synthesize clickArea=_clickArea;
@property(retain, nonatomic) NSString *gtype; // @synthesize gtype=_gtype;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) TTMomentDetailIndependenceState *pageState; // @synthesize pageState=_pageState;
@property(retain, nonatomic) TTMomentDetailStore *store; // @synthesize store=_store;
@property(retain, nonatomic) TTCommentEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TTCommentDetailHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TTViewWrapper *viewWrapper; // @synthesize viewWrapper=_viewWrapper;
@property(retain, nonatomic) Article *article; // @synthesize article=_article;
@property(retain, nonatomic) TTCommentDetailToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(copy, nonatomic) CDUnknownBlockType dismissComplete; // @synthesize dismissComplete=_dismissComplete;
@property(nonatomic) _Bool showComment; // @synthesize showComment=_showComment;
@property(nonatomic) _Bool showWriteComment; // @synthesize showWriteComment=_showWriteComment;
@property(retain, nonatomic) TTGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) id <TTCommentModelProtocol> commentModel; // @synthesize commentModel=_commentModel;
@property(nonatomic) _Bool hasNestedInModalContainer; // @synthesize hasNestedInModalContainer=_hasNestedInModalContainer;
- (void).cxx_destruct;
- (void)tt_recordForComment:(id)arg1 status:(long long)arg2;
- (void)tt_leaveCommentImpression;
- (void)tt_enterCommentImpression;
- (void)tt_unregisterFromImpressionManager:(id)arg1;
- (void)tt_registerToImpressionManager:(id)arg1;
- (void)needRerecordImpressions;
- (id)tt_scrollView;
- (void)tt_commentCell:(id)arg1 quotedNameOnClickedWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 nameViewonClickedWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 digCommentWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 deleteCommentWithCommentModel:(id)arg2;
- (void)tt_commentCell:(id)arg1 avatarTappedWithCommentModel:(id)arg2;
- (void)followNotifyHandler:(id)arg1;
- (void)dynamicDetailHeader:(id)arg1 diggCountLabelOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 diggedUserAvatarOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 quotedNameViewOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 reportButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 deleteButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 blockButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 followButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 replyButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 digButtonOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 nameViewOnClick:(id)arg2;
- (void)dynamicDetailHeader:(id)arg1 avatarViewOnClick:(id)arg2;
- (void)emptyView:(id)arg1 buttonClickedForType:(long long)arg2;
- (void)toolbarWriteButtonOnClicked:(id)arg1;
- (void)toolbarShareButtonOnClicked:(id)arg1;
- (void)toolbarDiggButtonOnClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldDisableRightSwipeGesture;
- (_Bool)hasDeleteReplyPermission;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)isIndependentPage;
- (void)_updateWriteCommentViewIfNeeded;
- (_Bool)tt_hasValidateData;
- (void)_removeContext;
- (void)_scrollToSelfCommentIfNeed;
- (void)_refreshEmptyViewIfNeed;
- (void)_showDefaultReplyUserIfNeed;
- (void)themeChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observeCommentDeleted:(id)arg1;
- (void)_registerObserver;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)onStateChange:(id)arg1;
- (void)updateFollowStatus:(id)arg1;
- (void)dealloc;
- (void)sendCurrentPageStayTime:(double)arg1;
- (id)commentTrackDictionary;
- (void)trackCommentClose;
- (void)trackCommentEnter;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)trySendCurrentPageStayTime;
- (void)setupWithBaseCondition:(id)arg1;
- (id)initWithRouteParamObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

