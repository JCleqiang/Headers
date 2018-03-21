//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/UISearchBarDelegate-Protocol.h>
#import <QQMainProject/UISearchDisplayDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableString, NSString, QQSearchHomeViewController, UITableView;

@interface AddBaseController : QQViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UISearchBarDelegate, UISearchDisplayDelegate>
{
    UITableView *_tableView;
    int _reqSummarySeqID;
    NSMutableString *_contactString;
    UITableView *_dropdownTable;
    NSArray *_accountSearchResult;
    NSArray *_groupSearchResult;
    NSArray *_publicSearchResult;
    NSArray *_titlesForSection;
    int _xo;
    QQSearchHomeViewController *_containerController;
    NSMutableArray *_dataSource;
    NSString *_keyword;
}

+ (id)segmentTitle;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak QQSearchHomeViewController *containerController; // @synthesize containerController=_containerController;
- (void).cxx_destruct;
- (void)reloadAppearance;
- (void)searchLifServiceWithName:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
- (void)setInprogress:(_Bool)arg1;
- (int)getSummaryTypeUsingSearchResult:(id)arg1;
- (void)onGetSearchResultNoti:(id)arg1;
- (void)onTimeout;
- (id)getCountryCode;
- (void)requestSearchFriendModel:(id)arg1;
- (void)onClickSearchButton:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setEntryData;
- (void)uploadData;
- (void)handleClickSearchCell;
- (id)advancedSearchCell:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)loadView;
- (_Bool)isSupportFullScreenLayout;
- (id)init;
- (void)viewDidSelect;
@property(retain, nonatomic) UITableView *dropdownTable; // @dynamic dropdownTable;
@property(retain, nonatomic) NSArray *publicSearchResult; // @dynamic publicSearchResult;
@property(retain, nonatomic) NSArray *groupSearchResult; // @dynamic groupSearchResult;
@property(retain, nonatomic) NSArray *accountSearchResult; // @dynamic accountSearchResult;
@property(retain, nonatomic) NSArray *titlesForSection; // @dynamic titlesForSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
