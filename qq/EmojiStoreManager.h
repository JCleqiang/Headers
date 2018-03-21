//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IContentUpdateDelegate-Protocol.h>
#import <QQMainProject/IEngineDispatchDelegate-Protocol.h>
#import <QQMainProject/ISCBusinessCallback-Protocol.h>
#import <QQMainProject/ISCListenerCallback-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EmojiStoreManager : NSObject <IEngineDispatchDelegate, IContentUpdateDelegate, ISCBusinessCallback, ISCListenerCallback>
{
    NSString *_currentUin;
    NSMutableDictionary *_stores;
    NSMutableArray *_emojiIpList;
    NSMutableDictionary *_ssoSeqDict;
    NSMutableDictionary *_ssoCmdDict;
    NSMutableDictionary *_clientWordDict;
}

+ (id)packageObserverManager;
+ (id)GetInstance;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 dlFrom:(int)arg5 result:(int)arg6 httpcode:(int)arg7;
- (void)onProgress:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 progressCur:(unsigned long long)arg4 progressMax:(unsigned long long)arg5;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (id)getEmotionRecommendEffectPath;
- (void)downloadEmotionRecommendEffect:(id)arg1;
- (void)onLoginSuccess:(id)arg1;
- (void)onSVipChange:(id)arg1;
- (void)onVipChange:(id)arg1;
- (id)getEmojiDescById:(id)arg1 expireTime:(unsigned int)arg2;
- (id)getBizExpireDateStr:(unsigned int)arg1 redColor:(_Bool *)arg2 wordid:(int)arg3;
- (void)initClientWordInfos;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)setSSOCmd:(id)arg1 forUin:(id)arg2;
- (void)setSSOSeq:(int)arg1 forUin:(id)arg2;
- (void)test;
- (void)setEmojiIpList:(id)arg1;
- (id)emojiIpList;
- (void)onAccountLogOut:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealContentUpdate:(id)arg1;
- (void)onRequestContentUpdateSuccess;
- (void)requestContentUpdate12;
- (id)getPackagesNeedUpdate;
- (id)storeForCurrentUin;
- (id)storeWithUin:(id)arg1;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
