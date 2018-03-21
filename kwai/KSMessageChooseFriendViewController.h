//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSFollowSearchableViewController.h"

#import "KSMessageChooseFriendDataSourceDelegate-Protocol.h"
#import "KSSelectForMailViewControllerDelegate-Protocol.h"

@class KSFollowForSearchModel, KSFollowModel, KSMessageChooseFriendDataSource, NSString;
@protocol KSMessageChooseFriendViewController;

@interface KSMessageChooseFriendViewController : KSFollowSearchableViewController <KSMessageChooseFriendDataSourceDelegate, KSSelectForMailViewControllerDelegate>
{
    _Bool _showSearchResult;
    id <KSMessageChooseFriendViewController> _delegate;
    KSFollowForSearchModel *_searchModel;
    KSMessageChooseFriendDataSource *_chooseFriendDataSource;
    KSFollowModel *_followModel;
}

@property(retain, nonatomic) KSFollowModel *followModel; // @synthesize followModel=_followModel;
@property(retain, nonatomic) KSMessageChooseFriendDataSource *chooseFriendDataSource; // @synthesize chooseFriendDataSource=_chooseFriendDataSource;
@property(nonatomic) _Bool showSearchResult; // @synthesize showSearchResult=_showSearchResult;
@property(retain, nonatomic) KSFollowForSearchModel *searchModel; // @synthesize searchModel=_searchModel;
@property(nonatomic) __weak id <KSMessageChooseFriendViewController> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dataSource;
- (void)didSelectItem:(id)arg1;
- (void)onConversationLoadFinish;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)reloadDataAndShowLoading:(_Bool)arg1 showErrorAtTop:(_Bool)arg2 ignoreCache:(_Bool)arg3;
- (void)didTapLeftNavigationButton:(id)arg1;
- (void)configMenu;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
