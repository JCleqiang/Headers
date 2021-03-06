//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, QQLockDictionary;

@interface GroupSettingCommonManager : NSObject
{
    NSMutableDictionary *_settingDictionary;
    QQLockDictionary *_commonGroupCache;
    _Bool _hasLoadFromCache;
    _Bool _firstAddTopGrpToCommon;
    NSMutableArray *_operateBlockArr;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *operateBlockArr; // @synthesize operateBlockArr=_operateBlockArr;
@property(nonatomic) _Bool firstAddTopGrpToCommon; // @synthesize firstAddTopGrpToCommon=_firstAddTopGrpToCommon;
@property(nonatomic) _Bool hasLoadFromCache; // @synthesize hasLoadFromCache=_hasLoadFromCache;
- (id)getVersonUpCommonGrpDic;
- (id)getLocalCommonGrpDic;
- (void)clearAllCommonGroupMessageTopState;
- (void)addAllCommonGroupListToFile:(id)arg1:(CDUnknownBlockType)arg2;
- (void)updateGroupTopInRecentListStateForce:(_Bool)arg1 On:(_Bool)arg2 groupCodeArr:(id)arg3;
- (void)deleteAllCommonGroup;
- (void)deleteCommonGroupListFromFile:(id)arg1:(CDUnknownBlockType)arg2;
- (void)addCommonGroupListToFile:(id)arg1:(CDUnknownBlockType)arg2;
- (void)addCommonGroupByCode:(id)arg1 withTime:(unsigned int)arg2:(CDUnknownBlockType)arg3;
- (void)deleteCommonGroupByCode:(id)arg1:(CDUnknownBlockType)arg2;
- (id)getCommonGroupModelArray;
- (id)getCommonGroupArray;
- (void)updateChangeCommonGroup:(id)arg1 CompleteBlock:(CDUnknownBlockType)arg2;
- (_Bool)findFileAtPath:(id)arg1;
- (id)getCommonGroupFilePath;
- (id)commonGroupModelForGroupCode:(id)arg1;
- (_Bool)groupCodeInCommonGroup:(id)arg1;
- (id)getGroupCodeByUin:(id)arg1;
- (void)receivedMemoryWarningNotification;
- (void)dealloc;
- (void)initCommonGroupCache;
- (id)init;

@end

