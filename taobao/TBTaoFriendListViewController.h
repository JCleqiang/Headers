//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MUKSearchViewController.h"

#import "MUKIndexBarDelegate-Protocol.h"
#import "MUKSearchViewControllerDelegate-Protocol.h"
#import "TBAMPModifyNameDelegate-Protocol.h"
#import "TBIMRelationServiceDelegate-Protocol.h"
#import "TBIMUserServiceDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTBNavigator-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBIMPerformProxy, TBModelStatusHandler;
@protocol MUKIndexBarDelegate, TBIMRelationServiceAdapter, UITableViewDataSource, UITableViewDelegate;

@interface TBTaoFriendListViewController : MUKSearchViewController <TBIMRelationServiceDelegate, TBAMPModifyNameDelegate, TBIMUserServiceDelegate, MUKSearchViewControllerDelegate, MUKIndexBarDelegate, UIViewControllerTBNavigator, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    TBModelStatusHandler *_handler;
    _Bool _needSearchRealTime;
    NSString *_searchBarTip;
    id <UITableViewDataSource> _showTableViewDataSource;
    id <UITableViewDelegate> _showTableViewDelegate;
    id <UITableViewDataSource> _searchTableViewDataSource;
    id <UITableViewDelegate> _searchTableViewDelegate;
    id <MUKIndexBarDelegate> _indexBarDelegate;
    NSString *_selfUserNick;
    id <TBIMRelationServiceAdapter> _relationAdapter;
    NSArray *_topList;
    NSMutableArray *_list;
    NSMutableArray *_showList;
    NSMutableArray *_sectionIndexTitles;
    NSMutableArray *_searchModels;
    TBIMPerformProxy *_performProxy;
}

@property(retain, nonatomic) TBIMPerformProxy *performProxy; // @synthesize performProxy=_performProxy;
@property(retain, nonatomic) NSMutableArray *searchModels; // @synthesize searchModels=_searchModels;
@property(retain, nonatomic) NSMutableArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
@property(retain, nonatomic) NSMutableArray *showList; // @synthesize showList=_showList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSArray *topList; // @synthesize topList=_topList;
@property(retain, nonatomic) id <TBIMRelationServiceAdapter> relationAdapter; // @synthesize relationAdapter=_relationAdapter;
@property(copy, nonatomic) NSString *selfUserNick; // @synthesize selfUserNick=_selfUserNick;
@property(nonatomic) __weak id <MUKIndexBarDelegate> indexBarDelegate; // @synthesize indexBarDelegate=_indexBarDelegate;
@property(nonatomic) __weak id <UITableViewDelegate> searchTableViewDelegate; // @synthesize searchTableViewDelegate=_searchTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchTableViewDataSource; // @synthesize searchTableViewDataSource=_searchTableViewDataSource;
@property(nonatomic) __weak id <UITableViewDelegate> showTableViewDelegate; // @synthesize showTableViewDelegate=_showTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> showTableViewDataSource; // @synthesize showTableViewDataSource=_showTableViewDataSource;
@property(copy, nonatomic) NSString *searchBarTip; // @synthesize searchBarTip=_searchBarTip;
@property(nonatomic) _Bool needSearchRealTime; // @synthesize needSearchRealTime=_needSearchRealTime;
- (void).cxx_destruct;
- (void)refleshFriendData;
- (void)findAndUpdateDataWithUserId:(id)arg1;
- (void)UserChange:(id)arg1;
- (void)updateNameSuccess:(id)arg1 newName:(id)arg2;
- (void)friendDeleteIsSuccess:(_Bool)arg1 userId:(id)arg2 error:(id)arg3;
- (void)taoFriendDataUpdate:(id)arg1;
- (void)searchDataWithText:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)indexBar:(id)arg1 didSelectIndex:(unsigned long long)arg2;
- (id)stringForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexesForIndexBar:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)assembleShowList;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewWillAppear:(_Bool)arg1;
- (id)handler;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)resignActive:(id)arg1;
- (void)setTwoDimentionAryWithAry:(id)arg1;
- (id)initWithRequestData;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)clearData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

