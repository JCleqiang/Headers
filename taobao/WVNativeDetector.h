//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class NSString;

@interface WVNativeDetector : WVDynamicHandler
{
    NSString *_platform;
    NSString *_platformName;
    long long _year;
}

+ (id)nativeInfo;
+ (void)getSafeAreaInsets:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)getDeviceYear:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)getCurrentUsage:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)getModelInfo:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)isSimulator:(id)arg1 withWVBridgeContext:(id)arg2;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;

@end

