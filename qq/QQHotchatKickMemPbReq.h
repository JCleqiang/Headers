//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/AutoPbModel.h>

@class KickVisitorPbModel, PlayerDeviceInfo;

@interface QQHotchatKickMemPbReq : AutoPbModel
{
    unsigned long long _groupUin;
    unsigned long long _groupCode;
    KickVisitorPbModel *_kickVistors;
    PlayerDeviceInfo *_deviceInfo;
}

@property(retain, nonatomic) PlayerDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) KickVisitorPbModel *kickVistors; // @synthesize kickVistors=_kickVistors;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned long long groupUin; // @synthesize groupUin=_groupUin;
- (void).cxx_destruct;
- (id)getPropertyInfos;

@end

