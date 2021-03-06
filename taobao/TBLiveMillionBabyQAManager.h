//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBLiveMillionBabyPollingServerDelegate-Protocol.h"
#import "TBLiveMillionBabyQAContainerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, TBLiveMillionBabyAnswerStateMachine, TBLiveMillionBabyPollingServer, TBLiveMillionBabyQAAnswerModel, TBLiveMillionBabyQAContainer, TBLiveMillionBabyQAQuestionModel, TBLiveMillionBabyQuestionStateMachine, UIView;
@protocol TBLiveMillionBabyQAManagerDelegate;

@interface TBLiveMillionBabyQAManager : NSObject <TBLiveMillionBabyPollingServerDelegate, TBLiveMillionBabyQAContainerDelegate>
{
    _Bool _isOut;
    _Bool _isContinue;
    _Bool _canUnlimit;
    _Bool _exitGameMonitor;
    int _submitRetryTimes;
    int _reviveRetryTimes;
    id <TBLiveMillionBabyQAManagerDelegate> _delegate;
    TBLiveMillionBabyQAContainer *_containerView;
    UIView *_superView;
    TBLiveMillionBabyPollingServer *_CNDPollingServer;
    TBLiveMillionBabyQuestionStateMachine *_questionStateMachine;
    TBLiveMillionBabyAnswerStateMachine *_answerStateMachine;
    TBLiveMillionBabyQAQuestionModel *_currentQuestionModel;
    TBLiveMillionBabyQAAnswerModel *_currentAnswerModel;
    NSString *_currentType;
    long long _currentSequence;
    NSString *_gameId;
    NSString *_commonKey;
    NSString *_pardonCardCount;
    long long _cdnLoopInterval;
    long long _submitAnswerDelay;
    long long _requestReviveDelay;
    long long _lastSEIQuestionSequence;
    long long _lastSEIAnswerSequence;
    NSMutableDictionary *_commonQuestionDict;
    NSMutableDictionary *_questionShowedDict;
    NSMutableDictionary *_answerDict;
    NSMutableDictionary *_answerShowedDict;
    NSMutableDictionary *_selectValueDict;
}

@property(nonatomic) _Bool exitGameMonitor; // @synthesize exitGameMonitor=_exitGameMonitor;
@property(retain, nonatomic) NSMutableDictionary *selectValueDict; // @synthesize selectValueDict=_selectValueDict;
@property(retain, nonatomic) NSMutableDictionary *answerShowedDict; // @synthesize answerShowedDict=_answerShowedDict;
@property(retain, nonatomic) NSMutableDictionary *answerDict; // @synthesize answerDict=_answerDict;
@property(retain, nonatomic) NSMutableDictionary *questionShowedDict; // @synthesize questionShowedDict=_questionShowedDict;
@property(retain, nonatomic) NSMutableDictionary *commonQuestionDict; // @synthesize commonQuestionDict=_commonQuestionDict;
@property(nonatomic) long long lastSEIAnswerSequence; // @synthesize lastSEIAnswerSequence=_lastSEIAnswerSequence;
@property(nonatomic) long long lastSEIQuestionSequence; // @synthesize lastSEIQuestionSequence=_lastSEIQuestionSequence;
@property(nonatomic) long long requestReviveDelay; // @synthesize requestReviveDelay=_requestReviveDelay;
@property(nonatomic) long long submitAnswerDelay; // @synthesize submitAnswerDelay=_submitAnswerDelay;
@property(nonatomic) long long cdnLoopInterval; // @synthesize cdnLoopInterval=_cdnLoopInterval;
@property(nonatomic) int reviveRetryTimes; // @synthesize reviveRetryTimes=_reviveRetryTimes;
@property(nonatomic) int submitRetryTimes; // @synthesize submitRetryTimes=_submitRetryTimes;
@property(nonatomic) _Bool canUnlimit; // @synthesize canUnlimit=_canUnlimit;
@property(nonatomic) _Bool isContinue; // @synthesize isContinue=_isContinue;
@property(nonatomic) _Bool isOut; // @synthesize isOut=_isOut;
@property(retain, nonatomic) NSString *pardonCardCount; // @synthesize pardonCardCount=_pardonCardCount;
@property(retain, nonatomic) NSString *commonKey; // @synthesize commonKey=_commonKey;
@property(retain, nonatomic) NSString *gameId; // @synthesize gameId=_gameId;
@property(nonatomic) long long currentSequence; // @synthesize currentSequence=_currentSequence;
@property(retain, nonatomic) NSString *currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) TBLiveMillionBabyQAAnswerModel *currentAnswerModel; // @synthesize currentAnswerModel=_currentAnswerModel;
@property(retain, nonatomic) TBLiveMillionBabyQAQuestionModel *currentQuestionModel; // @synthesize currentQuestionModel=_currentQuestionModel;
@property(retain, nonatomic) TBLiveMillionBabyAnswerStateMachine *answerStateMachine; // @synthesize answerStateMachine=_answerStateMachine;
@property(retain, nonatomic) TBLiveMillionBabyQuestionStateMachine *questionStateMachine; // @synthesize questionStateMachine=_questionStateMachine;
@property(retain, nonatomic) TBLiveMillionBabyPollingServer *CNDPollingServer; // @synthesize CNDPollingServer=_CNDPollingServer;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) TBLiveMillionBabyQAContainer *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <TBLiveMillionBabyQAManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)monitorCommonQuestionArrive:(id)arg1;
- (void)containerViewWillDisappearWithViewType:(long long)arg1;
- (void)recieveCDNMessage:(id)arg1 requestResult:(_Bool)arg2 timeStamp:(long long)arg3 needContinuePolling:(_Bool)arg4;
- (void)recieveSEIFrameWithData:(id)arg1;
- (void)processFinalWithData:(id)arg1;
- (void)processAnswerWithData:(id)arg1 timeStamp:(long long)arg2;
- (void)processQuestionWithData:(id)arg1 timeStamp:(long long)arg2;
- (id)getSelectValueWithSequence:(long long)arg1;
- (void)saveSelectValue:(id)arg1 WithSequence:(long long)arg2;
- (id)getAnswerShowedWithSequence:(long long)arg1;
- (void)saveAnswerShowedWithSequence:(long long)arg1;
- (id)getAnswerModelWithsequence:(long long)arg1;
- (void)saveAnswerModel:(id)arg1 sequence:(long long)arg2;
- (id)getQuestionShowedWithSequence:(long long)arg1;
- (void)saveQuestionShowedWithSequence:(long long)arg1;
- (id)getSaveCommonQuestionModelWithsequence:(long long)arg1;
- (void)saveCommonQuestionModel:(id)arg1 sequence:(long long)arg2;
- (_Bool)shouldEnterAnswerMachine:(id)arg1;
- (_Bool)shouldEnterQuestionMachine:(id)arg1;
- (_Bool)isNoSelect;
- (_Bool)isAnswerRight;
- (void)refreshResultCard;
- (void)refreshReviveCard:(id)arg1;
- (void)onShareGame;
- (void)onContinueToSee;
- (void)onOptionsSelected:(id)arg1;
- (void)hideContainerView;
- (void)showQACardWithModl:(id)arg1 viewType:(long long)arg2;
- (void)startShowAnswerStateMachine;
- (void)startGrabQuestionStateMachine;
- (void)decideShowLateCrad;
- (void)initAllCacheDict;
- (void)stopManager;
- (void)startManager;
- (void)retryRequestReviveWithGameId:(id)arg1 examNum:(id)arg2;
- (void)requestReviveWithGameId:(id)arg1 examNum:(id)arg2;
- (void)retrySubmitAnswerGameId:(id)arg1 examNum:(id)arg2 selectValue:(id)arg3;
- (void)submitAnswerWithGameId:(id)arg1 examNum:(id)arg2 selectValue:(id)arg3;
- (void)addObserver;
- (void)dealloc;
- (id)initWithCurrentTopView:(id)arg1 QABaseInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

