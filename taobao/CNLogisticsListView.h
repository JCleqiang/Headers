//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CNTableViewRegisterNibHelper, NSArray, NSString, UITableView, UIViewController;

@interface CNLogisticsListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isDowngrading;
    NSString *_orderId;
    CDUnknownBlockType _loadDataBlock;
    CDUnknownBlockType _whenAppearLoadDataBlock;
    UITableView *_tableView;
    NSArray *_cellModels;
    NSArray *_list;
    UIViewController *_viewController;
    CNTableViewRegisterNibHelper *_nibHelper;
}

@property(retain, nonatomic) CNTableViewRegisterNibHelper *nibHelper; // @synthesize nibHelper=_nibHelper;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType whenAppearLoadDataBlock; // @synthesize whenAppearLoadDataBlock=_whenAppearLoadDataBlock;
@property(copy, nonatomic) CDUnknownBlockType loadDataBlock; // @synthesize loadDataBlock=_loadDataBlock;
@property(nonatomic) _Bool isDowngrading; // @synthesize isDowngrading=_isDowngrading;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)configPullToRefresh;
- (void)showPackageList:(id)arg1 type:(int)arg2 models:(id)arg3;
- (void)updateList:(id)arg1 partOutPackage:(_Bool)arg2 unDeliverItemList:(id)arg3;
- (void)bindViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

