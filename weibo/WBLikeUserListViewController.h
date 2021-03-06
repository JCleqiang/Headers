//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStatusBusinessViewController.h"

#import "WBLikeUserListTableViewCellDelegate-Protocol.h"

@class NSString, WBLikeEngine;

@interface WBLikeUserListViewController : WBStatusBusinessViewController <WBLikeUserListTableViewCellDelegate>
{
    WBLikeEngine *likeEngine;
}

- (void).cxx_destruct;
- (void)didPressUserScreenNameLabel:(id)arg1 inCell:(id)arg2;
- (void)cell:(id)arg1 didPressAvatarViewWithUser:(id)arg2;
- (void)statusLikeStateDidChangeNotification:(id)arg1;
- (void)addMeToUsersList;
- (void)removeMeFromUsersList;
- (long long)indexOfMeInUsersList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableViewHasData;
- (_Bool)tableViewHasData:(id)arg1;
- (long long)numberOfDataRows;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)initStatusBusinessEngine;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

