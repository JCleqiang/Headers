//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapSearchDelegate-Protocol.h"

@class AMapSearchAPI, NSMapTable, NSString;

@interface AMapSearchExecutor : NSObject <AMapSearchDelegate>
{
    AMapSearchAPI *_search;
    NSMapTable *_mapTable;
    NSString *_lastJSONString;
}

+ (SEL)searchSelectorForRequestClass:(Class)arg1;
+ (Class)searchRequestClassForService:(id)arg1;
+ (id)validServices;
- (void).cxx_destruct;
- (void)onShareSearchDone:(id)arg1 response:(id)arg2;
- (void)onCloudSearchDone:(id)arg1 response:(id)arg2;
- (void)onNearbySearchDone:(id)arg1 response:(id)arg2;
- (void)onRoadTrafficSearchDone:(id)arg1 response:(id)arg2;
- (void)onWeatherSearchDone:(id)arg1 response:(id)arg2;
- (void)onRouteSearchDone:(id)arg1 response:(id)arg2;
- (void)onDistrictSearchDone:(id)arg1 response:(id)arg2;
- (void)onBusLineSearchDone:(id)arg1 response:(id)arg2;
- (void)onBusStopSearchDone:(id)arg1 response:(id)arg2;
- (void)onInputTipsSearchDone:(id)arg1 response:(id)arg2;
- (void)onReGeocodeSearchDone:(id)arg1 response:(id)arg2;
- (void)onGeocodeSearchDone:(id)arg1 response:(id)arg2;
- (void)onRoutePOISearchDone:(id)arg1 response:(id)arg2;
- (void)onPOISearchDone:(id)arg1 response:(id)arg2;
- (void)AMapSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)performBlockWithRequest:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)performSearchWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performSearchServiceWithJSONDic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performSearchTestWithJSONString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
