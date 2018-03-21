//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicViewController.h"

#import "TBAdaptationProtocol-Protocol.h"
#import "TBOrderKitListDataSourceProtocol-Protocol.h"

@class HMSegmentedControl, NSDictionary, NSString, TBHUDActivityView, TBOrderKitListDataSource, UITableView, UITableViewCell, UIView;

@interface TBOrderListViewController : TBOrderBasicViewController <TBAdaptationProtocol, TBOrderKitListDataSourceProtocol>
{
    _Bool _hasMoreData;
    _Bool _isReloadData;
    _Bool _isLoadingMore;
    _Bool _isEmptyAreadyShow;
    _Bool _isErrorViewShow;
    _Bool _isFirstPage;
    _Bool _hideTab;
    _Bool _hideSearch;
    _Bool _needRefreshBatchView;
    _Bool _needRefreshFloatView;
    TBOrderKitListDataSource *_dataSource;
    NSString *_orderListType;
    NSString *_statusId;
    HMSegmentedControl *_orderSegmentedControl;
    UITableView *_orderListTable;
    NSString *_searchKey;
    long long _orderType;
    long long _lastSelectSegmentIndex;
    UITableViewCell *_emptyCell;
    UIView *_ipadSearchView;
    TBHUDActivityView *_activityView;
    NSDictionary *_query;
}

@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(nonatomic) _Bool needRefreshFloatView; // @synthesize needRefreshFloatView=_needRefreshFloatView;
@property(nonatomic) _Bool needRefreshBatchView; // @synthesize needRefreshBatchView=_needRefreshBatchView;
@property(retain, nonatomic) TBHUDActivityView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *ipadSearchView; // @synthesize ipadSearchView=_ipadSearchView;
@property(nonatomic) _Bool hideSearch; // @synthesize hideSearch=_hideSearch;
@property(nonatomic) _Bool hideTab; // @synthesize hideTab=_hideTab;
@property(nonatomic) _Bool isFirstPage; // @synthesize isFirstPage=_isFirstPage;
@property(retain, nonatomic) UITableViewCell *emptyCell; // @synthesize emptyCell=_emptyCell;
@property(nonatomic) _Bool isErrorViewShow; // @synthesize isErrorViewShow=_isErrorViewShow;
@property(nonatomic) _Bool isEmptyAreadyShow; // @synthesize isEmptyAreadyShow=_isEmptyAreadyShow;
@property(nonatomic) long long lastSelectSegmentIndex; // @synthesize lastSelectSegmentIndex=_lastSelectSegmentIndex;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) _Bool isReloadData; // @synthesize isReloadData=_isReloadData;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(retain, nonatomic) UITableView *orderListTable; // @synthesize orderListTable=_orderListTable;
@property(retain, nonatomic) HMSegmentedControl *orderSegmentedControl; // @synthesize orderSegmentedControl=_orderSegmentedControl;
@property(retain, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;
@property(retain, nonatomic) NSString *orderListType; // @synthesize orderListType=_orderListType;
@property(retain, nonatomic) TBOrderKitListDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)isTabSupportScroll;
- (id)pageUserInfo;
- (id)pageName;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)dismissSearchInputAndShowAuction:(id)arg1 isItem:(_Bool)arg2;
- (double)heightOfTipsCell;
- (id)requestFailTipsCell;
- (id)emptyTipsCell;
- (void)currentViewUrl:(id)arg1 code:(id)arg2;
- (void)didCancelOrder;
- (void)didDeleteOrder;
- (void)refreshBatchOperationView:(_Bool)arg1 floatTipsView:(_Bool)arg2;
- (void)refreshBatchOperationView:(_Bool)arg1;
- (void)loadData;
- (void)reloadData;
- (void)refreshUI;
- (void)requestFailWithResult:(id)arg1;
- (void)requestSuccessWithResult:(id)arg1;
- (void)requestEnd;
- (void)requestBegin;
- (void)orderSegmentedControlChangedValue;
- (void)tableLoadMoreStopAnimatingWithHide:(_Bool)arg1;
- (void)tableRefreshStopAnimating;
- (void)configLoadMore;
- (void)configPullToRefresh;
- (int)tbOrderListType;
- (void)toOrderListTypeV2:(id)arg1;
- (void)toOrderListType:(id)arg1;
- (void)showFestivalNavi;
- (void)festivalStateChange:(id)arg1;
- (void)registerOrderNotification;
- (void)showRightBarbuttonItem;
- (void)addNaviTitle;
- (void)showActivityView;
- (void)initSegementControlView;
- (void)initBatchOperateView;
- (void)initTableView;
- (void)initDataSource;
- (void)sendRequest:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)orderTabSelected;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
