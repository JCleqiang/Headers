//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMapViewController.h"

#import "MBKSearchBarViewDelegate-Protocol.h"
#import "MMMapContextDelegate-Protocol.h"

@class AnimatedAnnotation, MBKLBSManager, MBKMoCarAddressView, MBKMoCarGetParkingPlacesRequest, MBKMocarAnnotation, MBKMocarParkLotBottomView, MBKOnMyLocationButton, MBKRegionPoiView, MBKTimer, MMRGCSearchRequest, NSArray, NSString;

@interface MBKMoCarParkLotSearchViewController : MBKMapViewController <MBKSearchBarViewDelegate, MMMapContextDelegate>
{
    _Bool _carViewAdded;
    _Bool _useCar;
    MBKOnMyLocationButton *_myLocation;
    MBKRegionPoiView *_regionPoiView;
    MBKLBSManager *_lbsManager;
    NSArray *_parkLotAnnotations;
    AnimatedAnnotation *_animatedAnnotation;
    NSArray *_overlays;
    MBKMoCarAddressView *_bottomView;
    MBKMocarParkLotBottomView *_parkLotBottomView;
    MBKMocarAnnotation *_carAnnotation;
    MBKMoCarGetParkingPlacesRequest *_parkingRequest;
    MBKTimer *_timer;
    MMRGCSearchRequest *_currentRGCRequest;
    NSString *_currentCityCode;
    NSString *_lastCityCode;
    struct CLLocationCoordinate2D _lastCoordinate;
    struct CLLocationCoordinate2D _currentCenterCoordinate;
}

+ (void)load;
@property(nonatomic) _Bool useCar; // @synthesize useCar=_useCar;
@property(copy, nonatomic) NSString *lastCityCode; // @synthesize lastCityCode=_lastCityCode;
@property(copy, nonatomic) NSString *currentCityCode; // @synthesize currentCityCode=_currentCityCode;
@property(nonatomic) __weak MMRGCSearchRequest *currentRGCRequest; // @synthesize currentRGCRequest=_currentRGCRequest;
@property(retain, nonatomic) MBKTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CLLocationCoordinate2D currentCenterCoordinate; // @synthesize currentCenterCoordinate=_currentCenterCoordinate;
@property(retain, nonatomic) MBKMoCarGetParkingPlacesRequest *parkingRequest; // @synthesize parkingRequest=_parkingRequest;
@property(nonatomic) _Bool carViewAdded; // @synthesize carViewAdded=_carViewAdded;
@property(retain, nonatomic) MBKMocarAnnotation *carAnnotation; // @synthesize carAnnotation=_carAnnotation;
@property(retain, nonatomic) MBKMocarParkLotBottomView *parkLotBottomView; // @synthesize parkLotBottomView=_parkLotBottomView;
@property(retain, nonatomic) MBKMoCarAddressView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property(nonatomic) struct CLLocationCoordinate2D lastCoordinate; // @synthesize lastCoordinate=_lastCoordinate;
@property(retain, nonatomic) AnimatedAnnotation *animatedAnnotation; // @synthesize animatedAnnotation=_animatedAnnotation;
@property(retain, nonatomic) NSArray *parkLotAnnotations; // @synthesize parkLotAnnotations=_parkLotAnnotations;
@property(retain, nonatomic) MBKLBSManager *lbsManager; // @synthesize lbsManager=_lbsManager;
@property(retain, nonatomic) MBKRegionPoiView *regionPoiView; // @synthesize regionPoiView=_regionPoiView;
@property(retain, nonatomic) MBKOnMyLocationButton *myLocation; // @synthesize myLocation=_myLocation;
- (void).cxx_destruct;
- (void)addPinmanAnnotation:(struct CLLocationCoordinate2D)arg1;
- (void)removePinmanAnnotation;
- (void)addNavigationBar;
- (struct CGRect)mapFrame;
- (void)mapViewAnnotationsAndFitOverLayers:(id)arg1;
- (void)buildUI;
- (void)mapContext:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (id)mapContext:(id)arg1 renderForOverlay:(id)arg2;
- (void)mapContext:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapContext:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapContext:(id)arg1 regionDidChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)mapContext:(id)arg1 regionWillChangeAnimated:(_Bool)arg2 byGesture:(_Bool)arg3;
- (void)onBackAction:(id)arg1;
- (void)mbkSearchBarCancelBtnDidClick;
- (void)updateParkLots;
- (void)loadParkLotsByCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)openSearchVC;
- (_Bool)mbkSearchBarShouldBeginEditing;
- (void)locationClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
