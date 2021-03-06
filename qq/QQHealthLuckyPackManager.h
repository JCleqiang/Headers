//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>

@class CADisplayLink, NSMutableArray, NSString, NSTimer, QQSF2018ActivityTask, QQSF2018ConfigData, QQSpringFestival2018ChanceData, QQSpringFestival2018LocationData;
@protocol OS_dispatch_queue;

@interface QQHealthLuckyPackManager : NSObject <IEngineDispatchDelegate>
{
    QQSpringFestival2018ChanceData *_userChanceData;
    NSMutableArray *_userEveCachePack;
    NSObject<OS_dispatch_queue> *_packQueue;
    NSObject<OS_dispatch_queue> *_loadDataQueue;
    int _timeout;
    double _frequencyTime;
    NSTimer *_activityCheckTimer;
    CADisplayLink *_checkDispplayLink;
    QQSpringFestival2018LocationData *_springLocationData;
    QQSF2018ConfigData *_configData;
    QQSF2018ActivityTask *_userTask;
    NSMutableArray *_reportCacheData;
}

+ (id)shareInstance;
+ (unsigned long long)getLuckDrawType:(int)arg1;
+ (id)getLocalChanceData;
+ (void)performInMainThread:(CDUnknownBlockType)arg1;
+ (id)getErrorMsg:(int)arg1 errMsg:(const basic_string_075b6133 *)arg2;
+ (id)getPrompt:(long long)arg1;
+ (void)saveReportData:(unsigned int)arg1 intData:(id)arg2 data:(id)arg3;
+ (id)keyWithCmd:(id)arg1 seq:(int)arg2;
+ (unsigned int)curSeq;
+ (int)sendSSOData:(const struct PkgReq *)arg1 Cmd:(id)arg2 timeOut:(int)arg3;
+ (_Bool)reportListData:(id)arg1;
+ (_Bool)reportSpringFestivalData:(unsigned int)arg1 intData:(id)arg2 data:(id)arg3;
+ (void)addCommomReqData:(struct PkgReq *)arg1;
+ (void)reportPandantCacheData;
+ (void)savePandantShowReportCount:(long long)arg1 CacheTime:(unsigned long long)arg2;
+ (id)getCachePandantShowReportData;
+ (id)getDefaultRedPackResourse;
+ (void)getRedPackResoursePromotionID:(long long)arg1 resouseID:(long long)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)getPresentChanceImageStepAvaliable:(_Bool)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)getContinuityFailtoWinThePrizeImage;
+ (id)getFailToWinPrizeBackGroundImage;
+ (void)getAwardLogoBGImage:(CDUnknownBlockType)arg1;
+ (void)getCurActivityPandantLogoImage:(CDUnknownBlockType)arg1;
+ (void)setUserEnterAcitivity:(long long)arg1;
+ (void)setAcitivtyBannerImageHadShow:(long long)arg1;
+ (void)getAcitivtyStarInfoPromotionID:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
+ (void)getAcitivtyBannerImagePromotionID:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
+ (void)getSpringMusicUrlForType:(long long)arg1 callBack:(CDUnknownBlockType)arg2;
+ (id)getSpringMusicUrlForType:(long long)arg1;
+ (id)springFontWithSize:(double)arg1;
+ (id)getEveActivityTextData;
+ (id)getNewYearDrawTips:(_Bool)arg1;
+ (id)getNewYearDynamicButtonInfo;
+ (id)getUserYearReportUrl;
+ (id)getStepCheckUrl;
+ (id)getUserAwardsRecordUrl;
+ (id)getNewYearSortUrl;
+ (id)getPromptOfType:(long long)arg1;
+ (id)getSpringActivityTips:(long long)arg1 PromotionID:(long long)arg2;
+ (_Bool)reportSpringFestivalDataFromH5:(unsigned int)arg1 intData:(id)arg2 data:(id)arg3;
+ (void)reportConfig:(id)arg1 version:(long long)arg2 result:(long long)arg3;
+ (void)reportSource:(id)arg1 result:(long long)arg2;
+ (void)activityPackBackReport:(unsigned long long)arg1;
+ (void)reportOpenPack:(id)arg1 drawCount:(unsigned long long)arg2;
+ (void)eveDrawPageShowReport:(int)arg1;
+ (void)reportPandantShowLogoId:(long long)arg1;
+ (void)reportSpringFestivalComomData:(long long)arg1;
+ (_Bool)newyearLuckDrawPromotionID:(long long)arg1 callBack:(CDUnknownBlockType)arg2 extendData:(id)arg3;
+ (void)sendUserNewYearDrawInfoStep:(unsigned long long)arg1 callBack:(CDUnknownBlockType)arg2;
+ (_Bool)requestUserNewYearLuckDrawInfo:(CDUnknownBlockType)arg1;
+ (_Bool)eveLuckDraw:(CDUnknownBlockType)arg1 extendData:(id)arg2;
+ (_Bool)requestEveRedPackFromServer:(CDUnknownBlockType)arg1;
+ (id)localEveRedPack;
+ (id)userLastYearSportData;
+ (long long)userLastYearStep;
+ (double)getDrawFrequencyTime;
+ (id)curActivityData;
+ (double)curTime;
+ (void)setAddTime:(double)arg1;
+ (double)getAddTime;
+ (id)getUserCacheRedPackDataForTask:(id)arg1;
+ (void)saveUserRedPackData:(id)arg1 forTask:(id)arg2;
+ (void)saveUserLocationData:(id)arg1;
+ (id)getUserCacheLocationData;
+ (id)userAdCodeForTask:(id)arg1;
+ (void)saveUserAdCode:(long long)arg1 ForTask:(id)arg2;
+ (unsigned long long)userPresenterQualitificationForTask:(id)arg1;
+ (void)savePresenterQualitification:(unsigned long long)arg1 ForTask:(id)arg2;
+ (unsigned long long)userPresenterUsedQualitificationForTask:(id)arg1;
+ (void)savePresenterUsedQualitification:(unsigned long long)arg1 ForTask:(id)arg2;
+ (unsigned long long)userUsedQualitificationForTask:(id)arg1;
+ (void)saveUserUsedQualitification:(unsigned long long)arg1 forTask:(id)arg2;
+ (_Bool)isUserHadUsedFullChance:(id)arg1;
+ (void)setUserHaduserFullChance:(id)arg1;
+ (_Bool)isAcitivtyBannerImageHadShow:(id)arg1;
+ (void)setAcitivtyBannerImageHadShowWithTask:(id)arg1;
+ (void)setUserEnterAcitivityWithTask:(id)arg1;
+ (_Bool)isUserEnterAcitivity:(id)arg1;
- (void).cxx_destruct;
- (id)removeReportData;
- (void)cacheReportData:(id)arg1;
- (id)curUserEveRedPacks;
- (void)loadUserEveRedPacksForTask:(id)arg1;
- (void)clearUserMemoryEveRedPacks;
- (void)addUserEvePack:(id)arg1;
- (void)updateUserCityData:(id)arg1;
- (void)setLocationUpdateInActivity;
- (id)getLocationData;
- (void)loadUserLocationData;
- (void)setUserStep:(unsigned long long)arg1 curTime:(double)arg2;
- (id)getUserChanceData;
- (void)setConfigModelData:(id)arg1;
- (void)loadUserConfigDataFromCache;
- (id)getComfigModelData;
- (void)setCurTask:(id)arg1;
- (id)curTask;
- (void)setPackTimeLimit:(unsigned int)arg1;
- (double)getPackTimeLimit;
- (void)setPackTimeOut:(unsigned int)arg1;
- (int)getPackTimeOut;
- (void)updateLocationInTask:(id)arg1 curTime:(double)arg2;
- (void)checkIsShowBannerOnCurTime:(double)arg1;
- (id)getCurTaskFromTask:(id)arg1 curTime:(double)arg2;
- (void)allTaskIsFinish;
- (void)curTaskDrawFinish:(id)arg1;
- (void)curTaksIsFinish:(id)arg1;
- (void)checkState;
- (void)stopStateCheckTimer;
- (void)startStateCheckTimer;
- (void)acitivtyCheck;
- (void)stopActivityCheckTimer;
- (void)startActivityCheckTimer;
- (void)enterForeground;
- (void)enterBackGround;
- (void)loadUserInfo;
- (void)userlogout:(id)arg1;
- (void)userLoginIn;
- (void)configDataChanged:(id)arg1;
- (id)createPendantData;
- (void)loadActivity;
- (_Bool)updateLocationFromCache;
- (void)updateUserLocation:(double)arg1;
- (id)init;
- (void)saveExtendDataWithEvePackResp:(const struct NewYearEvePackResp *)arg1;
- (void)saveExtendDataWithFestialPackResp:(const struct GetFestivalPackResp *)arg1;
- (void)receiveQualificationPack:(const struct QueryQualificationResp *)arg1 withKey:(id)arg2;
- (void)receiveNewYearDrawPack:(const struct GetFestivalPackResp *)arg1 withKey:(id)arg2;
- (void)receiveEveQuery:(const struct QueryEvePackResp *)arg1 withKey:(id)arg2;
- (void)receiveEveDrawPack:(const struct NewYearEvePackResp *)arg1 withKey:(id)arg2;
- (void)receiveNoPirzePackResult:(long long)arg1 data:(const struct PkgResp *)arg2 withKey:(id)arg3;
- (void)receiveInfoErrorData:(const struct PkgResp *)arg1 withKey:(id)arg2;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

