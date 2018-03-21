//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EWBaseViewController.h"

#import "APMapKitViewDelegate-Protocol.h"
#import "AUDialogDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "EGORefreshTableHeaderDelegate-Protocol.h"
#import "EWCardListViewDelegate-Protocol.h"
#import "PromotionCenterDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class APExceptionView, BEECity, CDPSpaceObjectInfo, EGORefreshTableHeaderView, EWCardListView, EWFilterPopoverView, EWListMenu, EWMapView, EWPolyPointView, EWSearchBar, MOPEnterDaowayMainViewReq, NSArray, NSMutableArray, NSString, NSTimer, UIButton, UILabel, UITableView, UIView;

@interface EWMainViewController : EWBaseViewController <CLLocationManagerDelegate, UITextFieldDelegate, APMapKitViewDelegate, EWCardListViewDelegate, UITableViewDataSource, UITableViewDelegate, EGORefreshTableHeaderDelegate, AUDialogDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PromotionCenterDelegate>
{
    _Bool _mapZoomLevelChanged;
    _Bool _isAutoZoomMap;
    _Bool _mapIsReady;
    _Bool _isRefresh;
    _Bool _isFirstWillAppear;
    _Bool _isFirstDidAppear;
    _Bool _hasNextPage;
    _Bool _isLoading;
    _Bool _isLocationFailed;
    _Bool _viewDidAppear;
    _Bool _activeFiredByCardList;
    int _serviceType;
    int _showMode;
    int _searchMode;
    int _markMode;
    EWMapView *_mapView;
    UIView *_mapViewWrap;
    EWListMenu *_listMenu;
    EWCardListView *_cardListView;
    UIButton *_locationPointButton;
    UIButton *_showModeSwitchButton;
    APExceptionView *_exceptionView;
    UIView *_tableViewWrap;
    UITableView *_tableView;
    EGORefreshTableHeaderView *_refreshTableView;
    UILabel *_tableFooterView;
    UILabel *_productDescription;
    NSTimer *_mapRegionChangedTimer;
    double _lastMapZoomLevel;
    double _mapZoomLevel;
    long long _needShowFirstAnnotationView;
    NSArray *_categoryList;
    NSMutableArray *_tableDataList;
    NSString *_userAdCode;
    BEECity *_city;
    long long _pageNo;
    NSString *_highlightCategoryId;
    long long _listTimestamp;
    long long _mapTimestamp;
    MOPEnterDaowayMainViewReq *_lastRequest;
    EWPolyPointView *_currentPolyPointView;
    UIView *_propmotionView;
    long long _mapCityLevel;
    NSArray *_allCityList;
    NSString *_highlightItemId;
    NSString *_queryHint;
    NSString *_queryWord;
    EWSearchBar *_searchBar;
    CDPSpaceObjectInfo *_spaceObjInfo;
    EWFilterPopoverView *_popoverView;
    struct CLLocationCoordinate2D _userLocation;
    struct CLLocationCoordinate2D _mapBottomLeftCoordinate2D;
    struct CLLocationCoordinate2D _mapTopRightCoordinate2D;
}

@property(retain, nonatomic) EWFilterPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) CDPSpaceObjectInfo *spaceObjInfo; // @synthesize spaceObjInfo=_spaceObjInfo;
@property(retain, nonatomic) EWSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *queryWord; // @synthesize queryWord=_queryWord;
@property(retain, nonatomic) NSString *queryHint; // @synthesize queryHint=_queryHint;
@property(retain, nonatomic) NSString *highlightItemId; // @synthesize highlightItemId=_highlightItemId;
@property(retain, nonatomic) NSArray *allCityList; // @synthesize allCityList=_allCityList;
@property(nonatomic) long long mapCityLevel; // @synthesize mapCityLevel=_mapCityLevel;
@property(nonatomic) _Bool activeFiredByCardList; // @synthesize activeFiredByCardList=_activeFiredByCardList;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(retain, nonatomic) UIView *propmotionView; // @synthesize propmotionView=_propmotionView;
@property(nonatomic) __weak EWPolyPointView *currentPolyPointView; // @synthesize currentPolyPointView=_currentPolyPointView;
@property(nonatomic) _Bool isLocationFailed; // @synthesize isLocationFailed=_isLocationFailed;
@property(retain, nonatomic) MOPEnterDaowayMainViewReq *lastRequest; // @synthesize lastRequest=_lastRequest;
@property(nonatomic) long long mapTimestamp; // @synthesize mapTimestamp=_mapTimestamp;
@property(nonatomic) long long listTimestamp; // @synthesize listTimestamp=_listTimestamp;
@property(retain, nonatomic) NSString *highlightCategoryId; // @synthesize highlightCategoryId=_highlightCategoryId;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) _Bool isFirstDidAppear; // @synthesize isFirstDidAppear=_isFirstDidAppear;
@property(nonatomic) _Bool isFirstWillAppear; // @synthesize isFirstWillAppear=_isFirstWillAppear;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(retain, nonatomic) BEECity *city; // @synthesize city=_city;
@property(nonatomic) struct CLLocationCoordinate2D mapTopRightCoordinate2D; // @synthesize mapTopRightCoordinate2D=_mapTopRightCoordinate2D;
@property(nonatomic) struct CLLocationCoordinate2D mapBottomLeftCoordinate2D; // @synthesize mapBottomLeftCoordinate2D=_mapBottomLeftCoordinate2D;
@property(retain, nonatomic) NSString *userAdCode; // @synthesize userAdCode=_userAdCode;
@property(nonatomic) struct CLLocationCoordinate2D userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSMutableArray *tableDataList; // @synthesize tableDataList=_tableDataList;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(nonatomic) long long needShowFirstAnnotationView; // @synthesize needShowFirstAnnotationView=_needShowFirstAnnotationView;
@property(nonatomic) _Bool mapIsReady; // @synthesize mapIsReady=_mapIsReady;
@property(nonatomic) _Bool isAutoZoomMap; // @synthesize isAutoZoomMap=_isAutoZoomMap;
@property(nonatomic) double mapZoomLevel; // @synthesize mapZoomLevel=_mapZoomLevel;
@property(nonatomic) _Bool mapZoomLevelChanged; // @synthesize mapZoomLevelChanged=_mapZoomLevelChanged;
@property(nonatomic) double lastMapZoomLevel; // @synthesize lastMapZoomLevel=_lastMapZoomLevel;
@property(retain, nonatomic) NSTimer *mapRegionChangedTimer; // @synthesize mapRegionChangedTimer=_mapRegionChangedTimer;
@property(retain, nonatomic) UILabel *productDescription; // @synthesize productDescription=_productDescription;
@property(retain, nonatomic) UILabel *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshTableView; // @synthesize refreshTableView=_refreshTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *tableViewWrap; // @synthesize tableViewWrap=_tableViewWrap;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UIButton *showModeSwitchButton; // @synthesize showModeSwitchButton=_showModeSwitchButton;
@property(retain, nonatomic) UIButton *locationPointButton; // @synthesize locationPointButton=_locationPointButton;
@property(retain, nonatomic) EWCardListView *cardListView; // @synthesize cardListView=_cardListView;
@property(retain, nonatomic) EWListMenu *listMenu; // @synthesize listMenu=_listMenu;
@property(nonatomic) int markMode; // @synthesize markMode=_markMode;
@property(retain, nonatomic) UIView *mapViewWrap; // @synthesize mapViewWrap=_mapViewWrap;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
@property(retain, nonatomic) EWMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) int showMode; // @synthesize showMode=_showMode;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (void)feedbackWithBehavior:(id)arg1;
- (void)updateSearchBarWithCdpInfo:(id)arg1;
- (void)updateSearchBarPlaceholder;
- (void)promotionDataDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)promotionViewDidFinishLoading:(id)arg1;
- (void)customTitleBar;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)citiesController:(id)arg1 didSelectCity:(id)arg2;
- (void)gotoCityPicker;
- (_Bool)isCurrentVCAppear;
- (void)customOptionMenu:(id)arg1;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (id)getAnnotationViewWithId:(id)arg1;
- (void)hideCardListOnMap;
- (void)showCardListOnMap;
- (void)hideTableView;
- (void)showTableView;
- (void)switchMapAndList;
- (void)switchButtonShowMode:(int)arg1;
- (void)clickedMenu:(id)arg1;
- (void)gotoDetailPageWithInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)cardListView:(id)arg1 didSelectCardWithId:(id)arg2;
- (void)cardListView:(id)arg1 didShowCardWithId:(id)arg2;
- (void)cardListView:(id)arg1 didHideCardWithId:(id)arg2;
- (void)moveMapToUserLocation;
- (void)updateAnnotationsDisplayFromCache;
- (void)mapKitView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapKitView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapKitView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (id)mapKitView:(id)arg1 userLocationViewForAnnotation:(id)arg2;
- (id)mapKitView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)requestDataWithMapChanged;
- (void)mapKitView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapKitView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)updateCategoryMenu:(id)arg1 highlightCategoryId:(id)arg2;
- (_Bool)shouldUpdateCategoryList:(id)arg1;
- (_Bool)hasAnnotationViewActived;
- (void)updateMapViewDataAndDisplay:(id)arg1;
- (void)updateTableViewList:(id)arg1;
- (void)retry;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)requestMainViewDataWithRequest:(id)arg1 showLoading:(_Bool)arg2;
- (id)makeDaowayMainRequestInfo;
- (void)refreshTableViewData;
- (void)confirmAuthorize;
- (void)requestFirstMainDataWithLocationFailed;
- (void)needRequestLocation:(_Bool)arg1;
- (void)activeFirstAnnotationViewIfNeed;
- (void)disActiveAnnotationView;
- (void)hideExceptionView;
- (void)showExceptionView:(id)arg1 enableRetry:(_Bool)arg2;
- (void)createTableView;
- (void)createCardListView;
- (void)createMapView;
- (void)createMapAndCardListView;
- (void)createListMenu;
- (void)createPromotionView;
- (void)createShowModeSwitchButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)refreshWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 serviceType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
