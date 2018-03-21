//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIScreenMode;

@interface DTDeviceInfo : NSObject
{
    NSString *_uuidSaved;
    UIScreenMode *_screenModeSaved;
    long long _deviceTypeSaved;
    NSString *_awid;
}

+ (_Bool)isLowerEndDevice3;
+ (_Bool)isLowerEndDevice2;
+ (_Bool)isLowerEndDevice;
+ (_Bool)isJailbreak;
+ (int)deviceScreenCategory;
+ (_Bool)isJailbroken;
+ (int)_deviceType_;
+ (id)deviceVersion;
+ (id)freeDiskSpace;
+ (id)totalDiskSpace;
+ (id)_screenMode_;
+ (id)deviceName;
+ (float)osVersion;
+ (id)_uuidForDevice_;
+ (id)sharedDTDeviceInfo;
@property(retain, nonatomic) NSString *awid; // @synthesize awid=_awid;
@property(nonatomic) long long deviceTypeSaved; // @synthesize deviceTypeSaved=_deviceTypeSaved;
@property(retain, nonatomic) UIScreenMode *screenModeSaved; // @synthesize screenModeSaved=_screenModeSaved;
@property(retain, nonatomic) NSString *uuidSaved; // @synthesize uuidSaved=_uuidSaved;
- (void).cxx_destruct;
- (id)did;
- (id)clientId;
- (id)clientKey;
- (id)refreshClientKey;
- (id)apdid;
- (id)tid;
- (id)imsi;
- (id)imei;
- (int)deviceType;
- (id)platformString;
- (id)screenMode;
- (id)currentAwid;
- (id)uuidForDevice;
- (id)generateRandomStringWithCount:(unsigned long long)arg1;

@end
