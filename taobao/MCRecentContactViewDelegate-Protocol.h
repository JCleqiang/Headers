//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, UIScrollView, UITableView, UITableViewCell, UIView;

@protocol MCRecentContactViewDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(UITableView *)arg1;
- (UIView *)tableFooterViewForTableView:(UITableView *)arg1;
- (UIView *)tableHeaderViewForTableView:(UITableView *)arg1;
- (void)refreshData;

@optional
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
@end

