//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface YWModular : NSObject
{
    _Bool _hasSetup;
    id _contextRef;
    NSDictionary *_extraInfo;
    NSString *_sectionName;
    NSMutableDictionary *_serviceImplDictionary;
    NSMutableArray *_serviceImplsArray;
    NSMutableArray *_currentSetupImpls;
    NSMutableArray *_delayedUnfulfilledArrays;
}

@property(retain, nonatomic) NSMutableArray *delayedUnfulfilledArrays; // @synthesize delayedUnfulfilledArrays=_delayedUnfulfilledArrays;
@property(retain, nonatomic) NSMutableArray *currentSetupImpls; // @synthesize currentSetupImpls=_currentSetupImpls;
@property(retain, nonatomic) NSMutableArray *serviceImplsArray; // @synthesize serviceImplsArray=_serviceImplsArray;
@property(retain, nonatomic) NSMutableDictionary *serviceImplDictionary; // @synthesize serviceImplDictionary=_serviceImplDictionary;
@property(copy, nonatomic) NSString *sectionName; // @synthesize sectionName=_sectionName;
@property _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(nonatomic) __weak id contextRef; // @synthesize contextRef=_contextRef;
- (void).cxx_destruct;
- (void)_removeAllDelayedUnfulfilledObjects;
- (void)_removeDelayedUnfulfilledObject:(id)arg1;
- (void)_fulfillDelayedUnfulfilledArray;
- (void)_appendDelayedUnfulfilledArray:(id)arg1;
- (void)_fulfillImmediateImplsArray:(id)arg1 getError:(id *)arg2 getWarnings:(id *)arg3;
- (void)_tryFulfillServiceImplObject:(id)arg1 isSetup:(_Bool)arg2 getError:(id *)arg3 getWarnings:(id *)arg4;
- (void)_safeRemoveAllServiceImpls;
- (void)_safeRemoveServiceImpl:(id)arg1;
- (void)_safeAddServiceImpls:(id)arg1;
- (void)_safeRemoveAllServiceImplsInDictionary;
- (id)_safeGetServiceImplKeysInDictionary;
- (id)_safeGetServiceImplInDictionary:(id)arg1;
- (void)_safeSetServiceImplInDictionary:(id)arg1 serviceName:(id)arg2;
- (id)_loadUnfulfilledImplObjectsWithDescriptions:(id)arg1 getError:(id *)arg2 getWarnings:(id *)arg3;
- (id)_loadImplDescriptionsWithMachHeader:(const struct mach_header_64 *)arg1 getError:(id *)arg2 getWarnings:(id *)arg3;
- (void)_onBinaryImageLoadedForInstance:(id)arg1;
- (void)_onBundleDidLoad:(id)arg1;
- (void)unregisterAllServices;
- (void)unregisterWithServiceName:(id)arg1;
- (id)registeredServiceNames;
- (void)setServiceInstance:(id)arg1 withName:(id)arg2;
- (id)getServiceInstanceWithName:(id)arg1;
- (void)setupWithError:(id *)arg1 warnings:(id *)arg2;
- (void)dealloc;
- (id)initWithSectionName:(id)arg1 contextRef:(id)arg2 extraInfo:(id)arg3;

@end
