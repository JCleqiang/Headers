//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCPluginBaseProtocol-Protocol.h"
#import "MCRecentSessionDelegate-Protocol.h"
#import "MCRecommendModelDelegate-Protocol.h"

@class MCRecommendModel, NSDictionary, NSString, UITableView;
@protocol MCRecentContactCustomInterface;

@interface MCRecentContactRecommendPlugin : NSObject <MCRecentSessionDelegate, MCRecommendModelDelegate, MCPluginBaseProtocol>
{
    id <MCRecentContactCustomInterface> _recentContactCustomInterface;
    MCRecommendModel *_recommendModule;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MCRecommendModel *recommendModule; // @synthesize recommendModule=_recommendModule;
@property(nonatomic) __weak id <MCRecentContactCustomInterface> recentContactCustomInterface; // @synthesize recentContactCustomInterface=_recentContactCustomInterface;
- (void).cxx_destruct;
- (_Bool)orangeRecommendOn;
- (void)recommendExposure;
- (void)handleExposure;
- (_Bool)recommendEnable;
- (void)moreItemClicked:(id)arg1;
- (id)sectionHeaderView;
- (void)recommendModel:(id)arg1 uniqueId:(id)arg2 subcribeResult:(_Bool)arg3 error:(id)arg4;
- (void)recommendModel:(id)arg1 recommendData:(id)arg2;
- (void)presenter:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3;
- (id)presenter:(id)arg1 tableView:(id)arg2 cellForRowAtIndexPath:(id)arg3;
- (unsigned long long)presenter:(id)arg1 tableView:(id)arg2 numberOfRowsInSection:(long long)arg3;
- (double)presenter:(id)arg1 tableView:(id)arg2 rowHeightForIndexPath:(id)arg3;
- (id)presenter:(id)arg1 tableView:(id)arg2 viewForHeaderInSection:(long long)arg3;
- (id)presenter:(id)arg1 tableView:(id)arg2 viewForFooterInSection:(long long)arg3;
- (double)presenter:(id)arg1 tableView:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)presenter:(id)arg1 tableView:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (void)presenterDataLoadOver:(id)arg1;
- (void)processPage:(id)arg1;
- (void)unLoad:(id)arg1;
- (void)load:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

