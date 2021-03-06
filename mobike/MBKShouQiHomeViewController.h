//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMapViewController.h"

#import "MBKAddressPickerViewDelegate-Protocol.h"
#import "MMMapContextDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class BMKMapTip, MBKAddressPickerView, MBKCarHailingOrder, MBKLBSManager, MBKOnMyLocationButton, MBKPanelCardView, MBKRegionPoiView, MBKShouQiHomeViewModel, MBKShouQiNearCarsRequest, MBKTopWarningBanner, MMRGCSearchRequest, NSLayoutConstraint, NSMutableArray, NSString;

@interface MBKShouQiHomeViewController : MBKMapViewController <MMMapContextDelegate, UIAlertViewDelegate, MBKAddressPickerViewDelegate>
{
    _Bool _isFirstLoc;
    _Bool _isTapLocation;
    _Bool _regionChangeing;
    MBKRegionPoiView *_regionPoiView;
    MBKTopWarningBanner *_topBanner;
    MBKPanelCardView *_bannerView;
    MBKAddressPickerView *_addressPickerView;
    NSLayoutConstraint *_pickViewHeightCons;
    MBKShouQiHomeViewModel *_viewModel;
    MBKOnMyLocationButton *_myLocation;
    MBKLBSManager *_lbsManager;
    MMRGCSearchRequest *_currentRGCRequest;
    BMKMapTip *_startPoi;
    NSMutableArray *_routeStarEndAnnotations;
    NSMutableArray *_nearCars;
    MBKCarHailingOrder *_ongoingShouqiOrder;
    MBKShouQiNearCarsRequest *_nearCarRequest;
    CDStruct_34734122 _lastPoint;
}

@property(retain, nonatomic) MBKShouQiNearCarsRequest *nearCarRequest; // @synthesize nearCarRequest=_nearCarRequest;
@property(retain, nonatomic) MBKCarHailingOrder *ongoingShouqiOrder; // @synthesize ongoingShouqiOrder=_ongoingShouqiOrder;
@property(retain, nonatomic) NSMutableArray *nearCars; // @synthesize nearCars=_nearCars;
@property(retain, nonatomic) NSMutableArray *routeStarEndAnnotations; // @synthesize routeStarEndAnnotations=_routeStarEndAnnotations;
@property(nonatomic) _Bool regionChangeing; // @synthesize regionChangeing=_regionChangeing;
@property(retain, nonatomic) BMKMapTip *startPoi; // @synthesize startPoi=_startPoi;
@property(nonatomic) __weak MMRGCSearchRequest *currentRGCRequest; // @synthesize currentRGCRequest=_currentRGCRequest;
@property(retain, nonatomic) MBKLBSManager *lbsManager; // @synthesize lbsManager=_lbsManager;
@property(retain, nonatomic) MBKOnMyLocationButton *myLocation; // @synthesize myLocation=_myLocation;
@property(retain, nonatomic) MBKShouQiHomeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) CDStruct_c3b9c2ee lastPoint; // @synthesize lastPoint=_lastPoint;
@property(retain, nonatomic) NSLayoutConstraint *pickViewHeightCons; // @synthesize pickViewHeightCons=_pickViewHeightCons;
@property(retain, nonatomic) MBKAddressPickerView *addressPickerView; // @synthesize addressPickerView=_addressPickerView;
@property(retain, nonatomic) MBKPanelCardView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) MBKTopWarningBanner *topBanner; // @synthesize topBanner=_topBanner;
@property(retain, nonatomic) MBKRegionPoiView *regionPoiView; // @synthesize regionPoiView=_regionPoiView;
- (void).cxx_destruct;
- (void)checkTravelingOrder;
- (void)getNearCarWith:(struct CLLocationCoordinate2D)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addressPickerView:(id)arg1 didSelectAtIndex:(long long)arg2 address:(id)arg3;
- (_Bool)addressPickerView:(id)arg1 shouldSelectAtIndex:(long long)arg2;
- (void)locationClicked:(id)arg1;
- (void)addMapUI;
- (void)setupViewModel;
- (void)mapContext:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)mapContext:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapContext:(id)arg1 renderForOverlay:(id)arg2;
- (void)updateInputUIWithHidden:(_Bool)arg1;
- (struct CGRect)mapFrame;
- (_Bool)shouldHideNavigationBarShadow;
- (void)rgcRequestWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

