//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCDPAdapterPromotionProtocol-Protocol.h"
#import "O2OSearchBarDelegate-Protocol.h"
#import "O2OSearchDimmingViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, O2OSearchDisplayListModel, O2OSearchHotwordModel, O2OSearchMiddleDisplayVCModel, O2OSearchMiddleLogic, UITableView;
@protocol O2OSearchContainerVCDelegate, O2OSearchMiddleDisplayVCDelegate;

@interface O2OSearchMiddleDisplayVC : O2OListViewController <O2OCDPAdapterPromotionProtocol, O2OSearchBarDelegate, O2OSearchDimmingViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _keepQuery;
    _Bool _shouldUpdateHintWord;
    float _width;
    float _animationDuration;
    UITableView *_tableView;
    id <O2OSearchMiddleDisplayVCDelegate> _logicDelegate;
    id <O2OSearchContainerVCDelegate> _containerVC;
    O2OSearchMiddleDisplayVCModel *_vcModel;
    NSString *_cityCode;
    NSString *_businessAreaId;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_ftCategoryId;
    NSString *_bgCategoryId;
    NSDictionary *_monitorDic;
    O2OSearchMiddleLogic *_logic;
    NSArray *_dataList;
    O2OSearchDisplayListModel *_displayListModel;
    O2OSearchHotwordModel *_hotwordModel;
    NSDictionary *_requestExtInfo;
    NSString *_lastQueryText;
    struct SearchFlag _searchFlag;
}

@property(nonatomic) _Bool shouldUpdateHintWord; // @synthesize shouldUpdateHintWord=_shouldUpdateHintWord;
@property(retain, nonatomic) NSString *lastQueryText; // @synthesize lastQueryText=_lastQueryText;
@property(copy, nonatomic) NSDictionary *requestExtInfo; // @synthesize requestExtInfo=_requestExtInfo;
@property(retain, nonatomic) O2OSearchHotwordModel *hotwordModel; // @synthesize hotwordModel=_hotwordModel;
@property(retain, nonatomic) O2OSearchDisplayListModel *displayListModel; // @synthesize displayListModel=_displayListModel;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) O2OSearchMiddleLogic *logic; // @synthesize logic=_logic;
@property(nonatomic) struct SearchFlag searchFlag; // @synthesize searchFlag=_searchFlag;
@property(nonatomic) _Bool keepQuery; // @synthesize keepQuery=_keepQuery;
@property(nonatomic) float animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) float width; // @synthesize width=_width;
@property(retain, nonatomic) NSDictionary *monitorDic; // @synthesize monitorDic=_monitorDic;
@property(retain, nonatomic) NSString *bgCategoryId; // @synthesize bgCategoryId=_bgCategoryId;
@property(retain, nonatomic) NSString *ftCategoryId; // @synthesize ftCategoryId=_ftCategoryId;
@property(retain, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *businessAreaId; // @synthesize businessAreaId=_businessAreaId;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) O2OSearchMiddleDisplayVCModel *vcModel; // @synthesize vcModel=_vcModel;
@property(nonatomic) __weak id <O2OSearchContainerVCDelegate> containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) __weak id <O2OSearchMiddleDisplayVCDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)showView:(int)arg1;
- (void)updateDimmingview;
- (void)saveSearchHistory:(id)arg1;
- (void)cancel;
- (void)becomeNoActive:(_Bool)arg1;
- (void)becomeActive:(_Bool)arg1;
- (id)searchText;
- (id)formatText:(id)arg1;
- (void)modelDidFail:(id)arg1 withError:(id)arg2;
- (void)toUpdateSearchHintWord:(id)arg1 searchWord:(id)arg2;
- (void)modelDidFinish:(id)arg1;
- (void)modelDidStart:(id)arg1;
- (_Bool)autohideNavigationBar;
- (void)setLastQuery:(id)arg1;
- (void)didSelectedQuery:(id)arg1 fromSearchSrc:(id)arg2 src:(unsigned long long)arg3 srcSPM:(id)arg4;
- (void)didSelectedRecordItem:(id)arg1 fromSearchSrc:(id)arg2 src:(unsigned long long)arg3 srcSPM:(id)arg4;
- (void)clearSearchHistory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)spmContainer:(id)arg1;
- (void)searchBarDidClickVoiceSearch:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)requestHotword;
- (void)reloadAutoTableView:(id)arg1;
- (void)reloadDimmingViewData;
- (id)dimmingViewData;
- (id)tableView;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

