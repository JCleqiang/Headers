//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSRefreshableTableView, NSArray, NSString;
@protocol KSRecommendUserCellDelegate;

@interface KSSearchInterestedUsersController : KSBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_interestedUsers;
    NSString *_keyword;
    id <KSRecommendUserCellDelegate> _cellDelegate;
    KSRefreshableTableView *_tableView;
}

@property(retain, nonatomic) KSRefreshableTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <KSRecommendUserCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSArray *interestedUsers; // @synthesize interestedUsers=_interestedUsers;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)hideSearchInterestedUsersController;
- (void)showSearchInterestedUsersController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

