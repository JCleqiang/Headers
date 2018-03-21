//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "TNodeComponentContainerProtocol-Protocol.h"
#import "TNodeMessageHandler-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;

@interface JSList : UITableView <TNodeComponentContainerProtocol, TNodeMessageHandler, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _horizontal;
    _Bool _enabledLazyRender;
    _Bool _firstShow;
    CDUnknownBlockType _loadMore;
    NSMutableArray *_cellCache;
    double _headerHeight;
    UIScrollView *_tabhost;
}

+ (void)attrsTNodeMapper:(id)arg1;
@property(nonatomic) __weak UIScrollView *tabhost; // @synthesize tabhost=_tabhost;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) _Bool firstShow; // @synthesize firstShow=_firstShow;
@property(nonatomic) _Bool enabledLazyRender; // @synthesize enabledLazyRender=_enabledLazyRender;
@property(retain, nonatomic) NSMutableArray *cellCache; // @synthesize cellCache=_cellCache;
@property(copy, nonatomic) CDUnknownBlockType loadMore; // @synthesize loadMore=_loadMore;
@property(nonatomic) _Bool horizontal; // @synthesize horizontal=_horizontal;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)visibleCellNodes;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)componentWillDisapper;
- (void)componentWillAppear;
- (void)tabBarDidScroll:(id)arg1;
- (_Bool)onHandlerTNodeMessage:(TNodeMsg_ca2753ae *)arg1;
- (void)renderCell:(id)arg1 node:(id)arg2;
- (id)cellNode:(id)arg1 indexPath:(id)arg2;
- (id)cellsNode:(id)arg1 section:(long long)arg2;
- (id)footerNode:(id)arg1 section:(long long)arg2;
- (id)headerNode:(id)arg1 section:(long long)arg2;
- (id)subNode:(id)arg1 section:(long long)arg2 type:(id)arg3;
- (id)sectionNode:(id)arg1 section:(long long)arg2;
- (void)setupParams;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 subDoms:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)removeFromSuperview;
- (void)willMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
