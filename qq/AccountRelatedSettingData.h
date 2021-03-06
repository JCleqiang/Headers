//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, QQLockDictionary;

@interface AccountRelatedSettingData : NSObject
{
    NSMutableDictionary *_initialPushSetting;
    NSMutableDictionary *_currentPushSetting;
    NSString *_uin;
    QQLockDictionary *_groupMessageSettingLogTimeStamp;
}

+ (id)GetInstance;
@property(retain, nonatomic) QQLockDictionary *groupMessageSettingLogTimeStamp; // @synthesize groupMessageSettingLogTimeStamp=_groupMessageSettingLogTimeStamp;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSMutableDictionary *currentPushSetting; // @synthesize currentPushSetting=_currentPushSetting;
- (void)shownNightModeTips;
- (int)shownNightModeTipsCount;
- (void)setAllPicNetFlow:(id)arg1;
- (id)getAllPicNetFlow;
- (void)setGroupSilentConfig:(id)arg1;
- (id)getGroupSilentConfig;
- (void)setNearbyAioTipsConfig:(id)arg1;
- (id)getNearbyAioTipsConfig;
- (void)setNearbyAioTipsConfigVersion:(int)arg1;
- (int)getNearbyAioTipsConfigVersion;
- (_Bool)supportATS;
- (id)getArkHttpSetingFromKey:(id)arg1;
- (void)setSiriConfig:(id)arg1;
- (id)getSiriConfig;
- (void)setSiriRegisterConfigVersion:(int)arg1;
- (int)getSiriRegisterConfigVersion;
- (void)setIconMaxUnreadSetting:(id)arg1;
- (id)getIconMaxUnreadSetting;
- (void)setPushOpenRemindConfigVersion:(int)arg1;
- (int)getPushOpenRemindConfigVersion;
- (void)setOlympicStartVideoFlag:(int)arg1;
- (int)getOlympicStartVideoFlag;
- (void)setQQReadInJoyMultipleStopPushTime:(double)arg1;
- (unsigned long long)getQQReadInJoyMultipleStopPushTime;
- (void)setDoodleGifIndex:(long long)arg1;
- (long long)getDoodleGifIndex;
- (void)setDoodleColorIndex:(long long)arg1;
- (long long)getDoodleColorIndex;
- (void)setLargeMsgOptimizeOpenFlag:(int)arg1;
- (int)getLargeMsgOptimizeOpenFlag;
- (void)setLargeMsgOpConfigVersion:(int)arg1;
- (int)getLargeMsgOpConfigVersion;
- (void)setMessageMonitorOpenFlag:(int)arg1;
- (int)getMessageMonitorOpenFlag;
- (void)setMessageMonitorConfigVersion:(int)arg1;
- (int)getMessageMonitorConfigVersion;
- (void)setGroupShareLBSUserPos:(id)arg1;
- (id)getGroupShareLBSUserPos;
- (double)getGroupShareLBSAccUploadTime;
- (void)setGroupShareLBSAccUploadTime:(double)arg1;
- (void)increasePeakPreDownloadCountForGroup:(id)arg1;
- (void)decreasePeakPreDownloadCountForGroup:(id)arg1;
- (long long)getPeakPreDownloadCountForGroup:(id)arg1;
- (void)setNearby686Config:(id)arg1;
- (id)getNearby686Config;
- (void)setNMPublishTime:(long long)arg1;
- (long long)getNMLastPublishTime;
- (id)receiveMsgKeyForGroup:(id)arg1;
- (_Bool)shouldShowLoginedAccount;
- (void)setShouldShowLoginedAccount:(_Bool)arg1;
- (void)removeObjectForRawKey:(id)arg1 uinKey:(id)arg2;
- (void)setValue:(id)arg1 forRawKey:(id)arg2 uinKey:(id)arg3;
- (id)valueForRawKey:(id)arg1 uinKey:(id)arg2;
- (void)setOperationGrayTipDownloadedStatus:(_Bool)arg1 withUrl:(id)arg2;
- (_Bool)operationGrayTipHasBeenDownloadedWithUrl:(id)arg1;
- (void)setOperationGrayTipDownloadedStatus:(_Bool)arg1 withMD5:(id)arg2;
- (_Bool)operationGrayTipHasBeenDownloadedWithMD5:(id)arg1;
- (void)setIgnoreOGTDownloadedStatus:(_Bool)arg1;
- (_Bool)ignoreOGTDownloadedStatus;
- (void)setOperationGrayTipConfigVersion:(long long)arg1;
- (long long)versionForOperationGrayTipConfig;
- (void)setCleanFriendsTipsRecord:(id)arg1;
- (id)cleanFriendsTipsRecord;
- (void)setIsFirstVerifyMsgFromGame:(_Bool)arg1;
- (_Bool)getIsFirstVerifyMsgFromGame;
- (void)setSmallViewPosition:(int)arg1;
- (int)getSmallViewPosition;
- (_Bool)getIsFirstRequestVideoViewIn3G;
- (int)getNoBindTime;
- (void)setNobindTime:(int)arg1;
- (void)setMessageBoxSetting:(id)arg1 isDeleted:(_Bool)arg2;
- (_Bool)isMessageBoxDeleted:(id)arg1;
- (void)setHostUserSummaryShowZanUnreadRedDot:(_Bool)arg1;
- (_Bool)getHostUserSummaryShowZanUnreadRedDot;
- (void)setHostUserSummaryLastZanUnreadCount:(int)arg1;
- (int)getHostUserSummaryLastZanUnreadCount;
- (void)clearSearchConditionDataWithType:(id)arg1;
- (void)setSearchConditionDataWithType:(id)arg1 forValue:(_Bool)arg2;
- (_Bool)getSearchConditionDataWithType:(id)arg1;
- (id)getPreDownPolicyDataWithKey:(id)arg1;
- (void)clearAllForceShowContactsTipData;
- (void)setForceShowContactsTipDataWithKey:(id)arg1 forValue:(id)arg2;
- (id)getForceShowContactsTipDataWithKey:(id)arg1;
- (id)getForceShowContactsTipData;
- (id)getUinDictionaryDataWithKey:(id)arg1;
- (id)getWYIndiePasswdSig;
- (void)setWYIndiePasswdSig:(id)arg1;
- (void)setQQPimValue:(id)arg1 toType:(int)arg2;
- (id)getQQPimValueByType:(int)arg1;
- (long long)aioMaxSeqForUin:(id)arg1 sessionType:(int)arg2;
- (void)setAioMaxSeq:(long long)arg1 forUin:(id)arg2 sessionType:(int)arg3;
- (id)_rawAioMaxSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (id)_aioMaxSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (long long)aioChasmSeqForUin:(id)arg1 sessionType:(int)arg2;
- (void)setAioChasmSeq:(long long)arg1 forUin:(id)arg2 sessionType:(int)arg3;
- (id)_rawAioChasmSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (id)_aioChasmSeqKeyForUin:(id)arg1 sessionType:(int)arg2;
- (void)setHasUpgradeSettings:(_Bool)arg1;
- (_Bool)hasUpgradeSettings;
- (id)allLocalGroupMsgSettings;
- (id)getAllSettings;
- (void)setSyncRevision:(int)arg1;
- (int)getSyncRevision;
- (id)valueForKey:(id)arg1;
- (void)setTmpValue:(id)arg1 forSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)removeValueForSetting:(id)arg1;
- (void)resetSettingForKey:(id)arg1;
- (void)setIgnoreMsgSetting:(_Bool)arg1 forGroup:(id)arg2;
- (int)getIgnoreMsgSetting:(id)arg1;
- (int)groupAssistantPCPolicyForGroup:(id)arg1;
- (void)setGroupAssistantPCPolicy:(int)arg1 forGroup:(id)arg2;
- (_Bool)isAnyGroupNotHaveAssistantPolicySetting;
- (id)savedGroupAssistantPolicyForGroup:(id)arg1;
- (int)groupAssistantPolicyForGroup:(id)arg1;
- (void)setGroupAssistantPolicy:(int)arg1 forGroup:(id)arg2;
- (void)setRecieveGroupMsg:(_Bool)arg1 forGroup:(id)arg2;
- (void)setRecieveGroupPush:(_Bool)arg1 forGroup:(id)arg2;
- (void)setFailedSetting:(id)arg1 forUin:(id)arg2;
- (id)getFailedSetting:(id)arg1;
- (void)removeAccountSettingWithUin:(id)arg1;
- (void)saveCurrentSettingImmediantly;
- (void)savePushSetting:(id)arg1;
- (void)asyncSavePushSetting;
- (void)delaySavePushSetting;
- (id)getPushSetting;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)setInitialPushSetting;

@end

