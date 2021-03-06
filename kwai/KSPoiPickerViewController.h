//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSSearchableTableViewController.h"

#import "UITableViewDelegate-Protocol.h"

@class KSPoi, KSPoiListDataSource, KSPoiSearchDataSource, NSString;
@protocol KSPoiPickerDelegate;

@interface KSPoiPickerViewController : KSSearchableTableViewController <UITableViewDelegate>
{
    _Bool _tryLocating;
    _Bool _firstAppeared;
    KSPoiListDataSource *_dataSource;
    id <KSPoiPickerDelegate> _delegate;
    KSPoiSearchDataSource *_searchDatasource;
}

@property(nonatomic) _Bool firstAppeared; // @synthesize firstAppeared=_firstAppeared;
@property(nonatomic) _Bool tryLocating; // @synthesize tryLocating=_tryLocating;
@property(retain, nonatomic) KSPoiSearchDataSource *searchDatasource; // @synthesize searchDatasource=_searchDatasource;
@property(nonatomic) __weak id <KSPoiPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KSPoiListDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
@property(retain, nonatomic) KSPoi *poi; // @dynamic poi;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchWithKeyword:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)disablesReturnKeyAutomatically:(id)arg1;
- (id)nearbyTableView;
- (void)configTableView;
- (void)loadNearbyPois;
- (void)didDragToRefresh:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (_Bool)locationPermissionNotDetermined;
- (_Bool)hasLocationPermission;
- (id)scrollViewForSessionPage;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

