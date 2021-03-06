//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQBaseEngine.h>

#import <QQMainProject/IQQMessageProcessor-Protocol.h>

@class ClearFriendsModel, FriendListReqItem, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, SimpleInfoDB;
@protocol OS_dispatch_queue;

@interface QQFriendListManager : QQBaseEngine <IQQMessageProcessor>
{
    NSMutableDictionary *_groupCache;
    NSMutableDictionary *_modelCache;
    NSMutableDictionary *_strangerList;
    NSMutableDictionary *_blackList;
    SimpleInfoDB *_strangerModel;
    long long _nextBlackMid;
    NSString *_fuin;
    _Bool onGenerationUinCache;
    NSMutableDictionary *_group;
    NSMutableDictionary *_model;
    NSMutableArray *_fGroupList;
    NSMutableArray *_fModelList;
    NSMutableDictionary *_groupFriendList;
    NSMutableDictionary *_statusDic;
    NSMutableDictionary *_offlinePromptArray;
    NSTimer *_updateFStatus;
    _Bool _isSaveGroupFriendList;
    _Bool _isSaveStrangerList;
    _Bool _isSaveBlackList;
    _Bool _isSaveStrangerModel;
    _Bool _isReadyToSortAll;
    double _lastClickFriendOnlineStatus;
    short _maxClickInterval;
    unsigned long long _lastUpdateUIN;
    _Bool _lockCacheUpdate;
    _Bool _isPCIconShown;
    _Bool _isIncrementUpdate;
    ClearFriendsModel *_clearFriends;
    _Bool _hasFriendData;
    NSDate *_lastUpdateRecommendSNFriDate;
    int _xo;
    _Bool _requestingAll;
    _Bool _haveRequestAll;
    FriendListReqItem *_reqFriends;
    int _failedCount;
    double _failedTime;
    NSObject *_modelDictCacheMutex;
    NSMutableDictionary *_copyCaches;
    _Bool _isRequestingLastLoginInfo;
    double _lastUpdateOnlineStatus;
    double _nextUpdateOnlineStatus;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

+ (id)createProfileViewControllerByUin:(id)arg1 defaultStrangerType:(int)arg2;
+ (id)GetInstance;
@property(nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) _Bool isRequestingLastLoginInfo; // @synthesize isRequestingLastLoginInfo=_isRequestingLastLoginInfo;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSDate *lastUpdateRecommendSNFriDate; // @synthesize lastUpdateRecommendSNFriDate=_lastUpdateRecommendSNFriDate;
@property(nonatomic) _Bool hasFriendData; // @synthesize hasFriendData=_hasFriendData;
@property(nonatomic) _Bool isPCIconShown; // @synthesize isPCIconShown=_isPCIconShown;
@property(retain, nonatomic) NSMutableDictionary *offlinePromptArray; // @synthesize offlinePromptArray=_offlinePromptArray;
@property(nonatomic) _Bool lockCacheUpdate; // @synthesize lockCacheUpdate=_lockCacheUpdate;
@property(nonatomic) unsigned long long lastUpdateUIN; // @synthesize lastUpdateUIN=_lastUpdateUIN;
@property(nonatomic) short maxClickInterval; // @synthesize maxClickInterval=_maxClickInterval;
@property(nonatomic) double nextUpdateOnlineStatus; // @synthesize nextUpdateOnlineStatus=_nextUpdateOnlineStatus;
@property(nonatomic) double lastClickFriendOnlineStatus; // @synthesize lastClickFriendOnlineStatus=_lastClickFriendOnlineStatus;
@property(nonatomic) double lastUpdateOnlineStatus; // @synthesize lastUpdateOnlineStatus=_lastUpdateOnlineStatus;
@property(retain, nonatomic) ClearFriendsModel *clearFriends; // @synthesize clearFriends=_clearFriends;
@property(retain, nonatomic) NSString *fuin; // @synthesize fuin=_fuin;
@property(retain, nonatomic) NSMutableDictionary *blackList; // @synthesize blackList=_blackList;
@property(retain, nonatomic) NSMutableDictionary *strangerList; // @synthesize strangerList=_strangerList;
@property(retain, nonatomic) NSMutableDictionary *modelCache; // @synthesize modelCache=_modelCache;
@property(retain, nonatomic) NSMutableDictionary *groupCache; // @synthesize groupCache=_groupCache;
- (void)clearCaches;
- (id)friendSearchCaches;
- (id)processMsgEncapsulation:(id)arg1;
- (_Bool)isBizAccount:(id)arg1;
- (void)updateFriendRemarkSetting:(id)arg1 withMobilePhoneStr:(id)arg2;
- (void)delayRefreshContactsList;
- (void)delayRefreshFriendList;
- (void)updateFriendRequested:(id)arg1;
- (id)getRecentArray;
- (int)getQQFriendHeadIdByUin:(long long)arg1;
- (id)getQQFriendRemarkByUin:(long long)arg1;
- (id)getQQFriendNickByUin:(long long)arg1;
- (void)updateEmojiEgg:(id)arg1 shipAnimation:(_Bool)arg2;
- (void)updateModifyEmojiEggs:(id)arg1;
- (void)updateEmojiEggsModelWithModel:(id)arg1 dict:(id)arg2;
- (void)updateSpecialCareSetting:(id)arg1;
- (void)resetFriendListMask;
- (id)getRingIdByUin:(id)arg1;
- (void)updatePushFStatus;
- (void)actionOnNewEIMQQConfigComing:(id)arg1;
- (void)resetRequestLastLoginInfo;
- (void)requestgetOnePageLastLoginInfo:(int)arg1 withIndex:(int)arg2 withUin:(long long)arg3;
- (void)requestGetLastLoginInfoWithFinishedBlock:(CDUnknownBlockType)arg1;
- (void)requestGetLastLoginInfo;
- (void)actionOnRefreshFriendListSucessCallback:(id)arg1;
- (void)actionFriendRequestConfirm:(id)arg1;
- (void)actionPushFStatus:(id)arg1;
- (void)actionGetBlackList:(id)arg1;
- (id)nearStrangerFriendModel:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (id)getStrangerModelForUin:(id)arg1 isReqDateNick:(_Bool)arg2;
- (id)getStrangerModelForUin:(id)arg1;
- (id)strangerModelForUin:(id)arg1;
- (void)simpleInfoRequest:(id)arg1 isGetDateNick:(_Bool)arg2;
- (void)requestUserInfoForUin:(id)arg1;
- (void)requestSimpleInfo:(id)arg1 isGetDateNick:(_Bool)arg2;
- (void)actionNearbyUserChange:(id)arg1;
- (void)actionGetSimpleInfo:(id)arg1;
- (void)updateAndSaveStrangeModel:(id)arg1 isUpdateDateNick:(_Bool)arg2;
- (id)campusNickWithUin:(id)arg1;
- (void)updateCampusModeForUin:(id)arg1 campusName:(id)arg2;
- (void)updateStrangerModelForUin:(id)arg1 nickname:(id)arg2 actionType:(BOOL)arg3 actionUrl:(id)arg4;
- (id)strangerModelInCacheForUin:(id)arg1;
- (id)nickForStrangerInCacheWithUin:(id)arg1;
- (id)nickForStrangerWithUin:(id)arg1;
- (_Bool)isUinAtBlackList:(id)arg1;
- (_Bool)isUinAtStrangers:(id)arg1;
- (_Bool)isUinQidianMaster:(unsigned long long)arg1;
- (_Bool)isUinCRM3Ext:(long long)arg1;
- (_Bool)isUinEIMQQ:(long long)arg1;
- (_Bool)isUinAtFriendList:(id)arg1;
- (void)deleteUinFromBlackList:(id)arg1;
- (void)deleteUinFromStrangers:(id)arg1;
- (void)updateFriendModelToStrangers:(id)arg1;
- (void)addStrangerModel:(id)arg1;
- (void)addUinToBlackList:(id)arg1;
- (void)addUinToStrangers:(id)arg1;
- (id)getBlackList;
- (id)getStrangerList;
- (id)getBlackListGroupModel;
- (id)getStrangerGroupModel;
- (id)fliterLikeWord:(id)arg1;
- (void)deleteFriendOfClearModel:(id)arg1;
- (void)deleteCleanFriendsTipsRecord:(id)arg1;
- (void)deleteQQFriendModelByUin:(id)arg1;
- (void)updateQQFriendModelColorRingIdByUin:(id)arg1:(unsigned int)arg2;
- (void)updateQQFriendModelFaceAddonIdByUin:(id)arg1:(long long)arg2;
- (void)updateQQFriendModelVipFontIdByUin:(id)arg1:(unsigned int)arg2;
- (void)updateQQFriendModelRemarkByUin:(id)arg1:(id)arg2;
- (void)updateQQFriendModelNameByUin:(id)arg1:(id)arg2;
- (_Bool)updateFriendMaskBitByUin:(id)arg1:(_Bool)arg2;
- (id)getSafeQQFriendModelByUin:(id)arg1;
- (void)setSafeQQFriendModelByUin:(id)arg1 forkey:(id)arg2;
- (void)removeSafeAllQQFriendModels;
- (void)removeSafeQQFriendModelByUin:(id)arg1;
- (id)getQQFriendModelByUin:(id)arg1 Cache:(_Bool)arg2;
- (id)sigForUin:(id)arg1;
- (void)updateMsfFriendModelColorRingIdByUin:(id)arg1:(unsigned int)arg2;
- (void)updateMsfFriendModelFaceAddonIdByUin:(id)arg1:(long long)arg2;
- (void)updateMsfFriendModelNameByUin:(id)arg1:(id)arg2;
- (_Bool)updateFriendLocationAbility:(id)arg1 locationAbility:(int)arg2;
- (_Bool)updateMsfFriendlocationAbility:(id)arg1 locationAbility:(int)arg2;
- (void)updateMsfFriendVideoStatus:(id)arg1 VideoStatus:(int)arg2;
- (void)clearMsfLocationAbilityStatus;
- (void)updateFriendVideoStatus:(id)arg1 VideoStatus:(int)arg2;
- (void)updateFriendCSpecialFlag:(id)arg1 cSpecialFlag:(int)arg2 abiFlag:(unsigned int)arg3;
- (void)updateFriendClientTye:(id)arg1 ctType:(int)arg2;
- (void)updateFriendIconType:(id)arg1 iconType:(int)arg2;
- (void)updateFriendNetwork:(id)arg1 netWork:(int)arg2;
- (void)updateFriendStatus:(id)arg1 status:(int)arg2 isWifi:(_Bool)arg3;
- (void)updateFriendStatus:(id)arg1 group:(id)arg2 status:(int)arg3;
- (void)sortAllRightNow;
- (id)getOfflineListFromArray:(id)arg1;
- (id)getOnlineListFromArray:(id)arg1;
- (void)sortAll;
- (void)checkGroupSortId;
- (void)replaceFriendListNew:(id)arg1 groups:(id)arg2;
- (void)resortGroupModel:(id)arg1;
- (void)renameGroupModel:(int)arg1 newName:(id)arg2;
- (void)deleteGroupModel:(int)arg1;
- (void)updateFriendModelVipInfo:(id)arg1 vipType:(int)arg2 isOpen:(_Bool)arg3;
- (void)clearAllCacheObjects;
- (void)moveFriend:(id)arg1 toGroup:(int)arg2;
- (void)insertFriend:(id)arg1:(id)arg2 isReplace:(_Bool)arg3;
- (void)insertGroup:(id)arg1;
- (void)clearLocationAbilityStatus;
- (void)clearAllStatus;
- (void)clearAllObjects;
- (void)changeAccount:(id)arg1;
- (void)deleteUin:(id)arg1;
- (id)getGroupWithUIN:(id)arg1;
- (id)getOnlineFriendListByGroupIndex:(int)arg1;
- (id)getFriendListByGroupIndex:(int)arg1;
- (int)getGroupListCount;
- (id)getGroupList;
- (id)getGroupModelByGroupID:(int)arg1;
- (id)generateOfflinePromptList;
- (void)generateFriendListData;
- (void)sendFriendListReloadNotification;
- (void)ActionGetBuddyList:(id)arg1;
- (void)sendSNGetQZoneShieldReq:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSNGetQZoneShield:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendShieldMySettingsReq:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestReportSNMsgBoxReaded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)tryToReportSNMsgBoxReaded;
- (void)requestSetQZone:(unsigned long long)arg1 ShieldHis:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestSetQZone:(unsigned long long)arg1 ShieldMine:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendSetSNFrdListReq:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestSetSNFrdList:(id)arg1 set:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestSetSNFriend:(long long)arg1 set:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestSpecialPersonalOnlineInfo:(unsigned int)arg1 reqUin:(unsigned long long)arg2 strMobile:(id)arg3;
- (void)requestSimpleOnlineFriendInfo:(int)arg1;
- (void)requestFriendsOnlineInfo:(int)arg1;
- (void)requestFriendsOnlineInfoNumber:(id)arg1;
- (void)filterSNFriendByUIN:(long long)arg1 set:(_Bool)arg2;
- (void)filterFriendModelByUINList:(id)arg1 set:(_Bool)arg2;
- (void)filterFriendModelBySNList:(id)arg1;
- (void)sendGetSNMyFriendListRequest:(id)arg1;
- (void)requestSNMyFriendList;
- (void)requestSNMyFriendListAtRegister;
- (void)reportFriendListReqFailedStatistics;
- (void)reportFriendlistReqSuccess:(_Bool)arg1 userInfo:(id)arg2 req:(id)arg3;
- (void)sendGetFriendListRequest:(id)arg1;
- (void)_removeNewFriendVerfyMessage:(id)arg1;
- (id)_newFriendModels:(id)arg1;
- (void)asyncUpdateDiscussMemberName:(id)arg1;
- (id)renamedFriendModels:(id)arg1;
- (void)requestGetMyFriend:(unsigned long long)arg1;
- (void)requestGetFriendListWithTimeStamp:(unsigned int)arg1;
- (void)requestGetFriendList;
- (void)generateModelCache;
- (id)init;
- (void)initEIMQQConfig;
- (void)initStrangerModel;
- (void)initBlackList;
- (void)initStrangerList;
- (void)asynSaveSNFriendList;
- (void)delaySaveSNFriendList;
- (void)saveDelaySavedData;
- (void)saveAllData;
- (void)delaySaveGroupCode;
- (void)saveGroupCode;
- (void)saveBlackList;
- (void)delaySaveBlackList;
- (void)saveStrangerList;
- (void)delaySaveStrangerList;
- (void)save;
- (id)getBlackListPathIfNeeded;
- (id)getStrangerListPathIfNeeded;
- (id)createlistIfNeeded;
- (id)GroupArray;
- (void)clearAllVideoSupport;
- (id)getFilterGroupFriendsList:(id)arg1;
- (id)getFilterAllTableArray:(_Bool)arg1;
- (_Bool)hasSetShieldMine;
- (_Bool)isFriendInUnCommonList:(unsigned long long)arg1;
- (id)getUnCommonFriendData:(id)arg1;
- (unsigned long long)getSNUnCommonFriendsCount;
- (id)getFriendModel:(id)arg1;
- (id)allFriendModels;
- (id)allFriends;

@end

