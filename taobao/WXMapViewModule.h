//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class AMap3DMapUtils, NSString, WXSDKInstance;

@interface WXMapViewModule : NSObject <WXModuleProtocol>
{
    AMap3DMapUtils *_utility;
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_sync_25;
+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)loadAMap3DMapUtils;
- (void)doBlock:(CDUnknownBlockType)arg1;
- (void)performBlockWithRef:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)polygonContainsMarker:(id)arg1 ref:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getLineDistance:(id)arg1 marker:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)getUserLocation:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

