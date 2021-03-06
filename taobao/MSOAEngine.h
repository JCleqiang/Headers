//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MSOABus, MSOAContext;

@interface MSOAEngine : NSObject
{
    MSOABus *_serviceBus;
    MSOAContext *_context;
}

+ (id)sharedInstance;
+ (_Bool)isNeedDemoteToServiceHub;
+ (void)registLoadFrameworkListener:(CDUnknownBlockType)arg1;
+ (id)uniqueServicesDigest;
+ (id)obtainServiceForAlias:(id)arg1 sourceBiz:(id)arg2 sourceScene:(id)arg3;
+ (id)obtainServiceForProtocol:(id)arg1 sourceBiz:(id)arg2 sourceScene:(id)arg3;
+ (id)obtainServiceForProtocol:(id)arg1 sourceBiz:(id)arg2;
+ (id)serviceForProtocolIntent:(id)arg1;
+ (_Bool)requestServiceWithIntent:(id)arg1;
+ (_Bool)requestServiceWithV2Intent:(id)arg1;
+ (id)msoa_sharedInstance;
+ (void)unregistDynamicEvent:(id)arg1 token:(id)arg2;
+ (void)sendDynamicEvent:(id)arg1 token:(id)arg2 extras:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
+ (void)registDynamicService:(id)arg1;
@property(retain, nonatomic) MSOAContext *context; // @synthesize context=_context;
@property(retain, nonatomic) MSOABus *serviceBus; // @synthesize serviceBus=_serviceBus;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)registLoadFrameworkListener:(CDUnknownBlockType)arg1;
- (id)uniqueServicesDigest;
- (id)serviceForProtocolIntent:(id)arg1;
- (id)obtainServiceForAlias:(id)arg1 sourceBiz:(id)arg2 sourceScene:(id)arg3;
- (id)obtainServiceForProtocol:(id)arg1 sourceBiz:(id)arg2 sourceScene:(id)arg3;
- (_Bool)requestServiceWithIntent:(id)arg1;
- (void)msoa_exitDebugSwitch;
- (void)msoa_setDebugSwitch:(id)arg1;
- (void)msoa_setServiceBus:(id)arg1;
- (id)msoa_context;
- (id)transfer;
- (void)unregistDynamicEvent:(id)arg1 token:(id)arg2;
- (void)sendDynamicEvent:(id)arg1 token:(id)arg2 extras:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)registDynamicService:(id)arg1;

@end

