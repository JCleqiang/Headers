//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RqdLocalObject.h>

@class NSString;

@interface RqdAppInfo : RqdLocalObject
{
    NSString *processName;
    NSString *cpuArchVersion;
    NSString *processUUID;
    NSString *processBaseAddr;
    NSString *version;
}

@property(retain, nonatomic) NSString *version; // @synthesize version;
@property(retain, nonatomic) NSString *processBaseAddr; // @synthesize processBaseAddr;
@property(retain, nonatomic) NSString *cpuArchVersion; // @synthesize cpuArchVersion;
@property(retain, nonatomic) NSString *processUUID; // @synthesize processUUID;
@property(retain, nonatomic) NSString *processName; // @synthesize processName;
- (void)dealloc;
- (void)createWUPModel:(struct AppInfo *)arg1;

@end

