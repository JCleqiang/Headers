//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEPagingTableController.h"

#import "BEECategoryViewDelegate-Protocol.h"

@class BEECategoryView, NSArray, NSMutableArray, NSString;

@interface ALPFundIncomeListViewController : BEEPagingTableController <BEECategoryViewDelegate>
{
    _Bool _canRedirect;
    NSArray *_tradeTypeArray;
    NSArray *_tradeTypeValueArray;
    int number;
    NSArray *_categoryData;
    NSString *tradeType;
    BEECategoryView *_categoryView;
    NSMutableArray *_fundTradeArray;
}

@property(retain, nonatomic) NSMutableArray *fundTradeArray; // @synthesize fundTradeArray=_fundTradeArray;
@property(retain, nonatomic) BEECategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) NSString *tradeType; // @synthesize tradeType;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getFundTradeRecordNodeInSection:(long long)arg1 row:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideContentViewInTableView:(_Bool)arg1;
- (void)loadException:(int)arg1 info:(id)arg2 retry:(_Bool)arg3;
- (void)loadError:(id)arg1;
- (id)emptyText;
- (_Bool)hasNextPage;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)loadEnded:(id)arg1;
- (void)loadBegan;
- (void)addMonitorLog:(id)arg1;
- (void)viewWillDestroy;
- (void)releaseUI;
- (void)initUI;
- (id)generateConfigInfo;
- (_Bool)isConfigServerOpen;
- (void)changeShowStatus:(_Bool)arg1;
- (void)selectCategory;
- (void)rightBtnClick;
- (void)updateNavigationTitle:(id)arg1 displayName:(id)arg2;
- (void)viewDidLoad;
- (id)initWithTransType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

