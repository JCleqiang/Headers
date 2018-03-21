//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <QQMainProject/QIMRecommendFriPopDelegate-Protocol.h>
#import <QQMainProject/QIMRecommendFriendCellDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, QIMRecommendFriendsPopView, UIWindow;

@interface QIMRecommendMultiFriendPopViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, QIMRecommendFriendCellDelegate, QIMRecommendFriPopDelegate>
{
    NSMutableArray *_friendList;
    NSMutableArray *_agreeFriend;
    NSMutableDictionary *_isAgreeDic;
    UIWindow *_popWindow;
    QIMRecommendFriendsPopView *_popView;
}

+ (unsigned long long)currentPopViewType;
+ (_Bool)isShowing;
@property(retain, nonatomic) QIMRecommendFriendsPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIWindow *popWindow; // @synthesize popWindow=_popWindow;
@property(retain, nonatomic) NSMutableDictionary *isAgreeDic; // @synthesize isAgreeDic=_isAgreeDic;
@property(retain, nonatomic) NSMutableArray *agreeFriend; // @synthesize agreeFriend=_agreeFriend;
@property(retain, nonatomic) NSMutableArray *friendList; // @synthesize friendList=_friendList;
- (void).cxx_destruct;
- (void)onClickCover:(id)arg1 index:(int)arg2 animationView:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCellSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateConfirmButton;
- (void)addFriend;
- (void)onReceivePush:(id)arg1;
- (void)onVideoChatEnd:(id)arg1;
- (void)onVideoChatBegin:(id)arg1;
- (void)interrupt;
- (void)dismiss;
- (void)showOverWindow;
- (void)showView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFriendList:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
