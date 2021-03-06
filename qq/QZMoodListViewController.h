//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZCommonFeedListViewController.h>

#import <QQMainProject/UISearchBarDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class MQZoneHomepageMemorySealOffView, NSString, QzoneFeedModel, UIButton, UIView;

@interface QZMoodListViewController : MQZCommonFeedListViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentView;
    long long _uin;
    NSString *_nickname;
    long long _lastUpdateTime;
    long long _hasMore;
    long long _moodListReqID;
    UIView *_customTableHeaderView;
    UIButton *_timerMoodEntranceBar;
    double _layoutDrawingBeginTime;
    MQZoneHomepageMemorySealOffView *_sealOffView;
    QzoneFeedModel *_memorySealOffModel;
    struct CGRect _memorySealOffCellRect;
}

- (void).cxx_destruct;
- (long long)liveReportExpose;
- (id)feedModelList4Font;
- (void)advReportWithFeedModel:(id)arg1 requestId:(long long)arg2 position:(long long)arg3;
- (_Bool)enableFeedVisitReport;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (id)searchBar;
- (void)timerMoodUpdateNotify:(id)arg1;
- (void)refreshTimerMoodEntranceBar:(int)arg1;
- (void)didTimerMoodEntranceBarClicked:(id)arg1;
- (id)timerMoodEntranceBar;
- (id)customTableHeaderView;
- (void)checkFootViewState;
- (_Bool)onLoadMore;
- (_Bool)onHasMore;
- (unsigned long long)onGetLastRefreshTime;
- (_Bool)onRefresh;
- (int)onNotifyGetMoodList:(id)arg1;
- (long long)onFakeFeedNotify:(id)arg1;
- (void)cancelCurrentRequest;
- (_Bool)hasNoFeeds;
- (_Bool)shouldHandleFakeFeedType:(long long)arg1;
- (id)getDictFeedsWithKey;
- (id)getFeedList;
- (int)onSetConcernNotify:(id)arg1;
- (void)initNotificationObservers:(id)arg1;
- (_Bool)handleClickRichTextItem:(id)arg1 itemRect:(struct CGRect)arg2 param:(id)arg3;
- (void)handleDidSelectCell:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onRightButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)gotoSearchBoard;
- (void)loadView;
- (void)hanldeTouchSealOffSettingBtn:(id)arg1 feedModel:(id)arg2;
- (_Bool)hasMemorySealOffModel;
- (void)hideMemorySealOffView;
- (void)showMemorySealOff:(id)arg1;
- (void)shouldShowMemorySealOff:(id)arg1;
- (_Bool)isMyMood;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithUin:(long long)arg1 nickname:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

