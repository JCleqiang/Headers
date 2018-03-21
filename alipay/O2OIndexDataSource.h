//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListViewDataSource.h"

@class NSArray, NSString, O2OIndexTabShopCache, O2OLabelItem;
@protocol O2OIndexTabChangeDelegate;

@interface O2OIndexDataSource : VZListViewDataSource
{
    O2OLabelItem *_tabItem;
    O2OIndexTabShopCache *_tabShopCache;
    id <O2OIndexTabChangeDelegate> _tabChangeDelegate;
    NSArray *_sections;
    unsigned long long _showType;
    NSString *_pageVersion;
}

+ (_Bool)isSpecialSection:(id)arg1;
@property(retain, nonatomic) NSString *pageVersion; // @synthesize pageVersion=_pageVersion;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <O2OIndexTabChangeDelegate> tabChangeDelegate; // @synthesize tabChangeDelegate=_tabChangeDelegate;
- (void).cxx_destruct;
- (_Bool)removeItemAtIndexPath:(id)arg1;
- (void)setInitItems:(id)arg1 tabs:(id)arg2 hasMore:(_Bool)arg3 hasShow:(unsigned long long)arg4 template:(id)arg5 pageType:(id)arg6 transParam:(id)arg7 type:(id)arg8;
- (id)mistSectionForList;
- (id)itemsForList;
- (void)refreshFirstTab;
- (void)setTab:(id)arg1;
- (void)tableViewControllerDidLoadModel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 AtIndex:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)dealloc;
- (id)init;

@end
