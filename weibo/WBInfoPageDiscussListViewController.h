//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCommentListViewController.h"

@class WBInfoPageDiscussEngine;

@interface WBInfoPageDiscussListViewController : WBCommentListViewController
{
    WBInfoPageDiscussEngine *discussEngine;
}

- (void).cxx_destruct;
- (void)newCommentDidSentOut:(id)arg1;
- (void)hideAdInMessageContentViewController;
- (void)showAdInMessageContentViewController;
- (void)didPressUserScreenName:(id)arg1 inCell:(id)arg2;
- (void)didPressLikeButtonInCell:(id)arg1;
- (void)didPressReplyButtonInCell:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)loadMoreData;
- (void)reloadData;
- (void)initStatusBusinessEngine;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

