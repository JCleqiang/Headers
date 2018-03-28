//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TSVShortVideoPostTaskProtocol-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, TTForumUploadVideoModel, UIImage;

@interface TTForumPostThreadTask : NSObject <TSVShortVideoPostTaskProtocol>
{
    _Bool _isPosting;
    _Bool _repostToComment;
    int _source;
    int _locationType;
    int _retryCount;
    long long _taskType;
    NSString *_taskID;
    long long _fakeThreadId;
    NSString *_title;
    NSString *_titleRichSpan;
    NSString *_content;
    NSString *_contentRichSpans;
    NSString *_mentionUser;
    NSString *_coverUrl;
    NSString *_mentionConcern;
    long long _create_time;
    NSString *_concernID;
    NSString *_categoryID;
    NSString *_userID;
    NSString *_repostTitle;
    NSString *_repostSchema;
    long long _forward;
    NSArray *_images;
    double _longitude;
    double _latitude;
    NSString *_city;
    NSString *_detail_pos;
    NSString *_locationAddress;
    NSString *_phone;
    long long _fromWhere;
    double _score;
    unsigned long long _refer;
    unsigned long long _postUGCEnterFrom;
    NSDictionary *_extraTrack;
    TTForumUploadVideoModel *_video;
    NSError *_finishError;
    unsigned long long _errorPosition;
    NSDictionary *_responseDict;
    double _uploadProgress;
    CDUnknownBlockType _progressBlock;
    long long _requestRedPacketType;
    unsigned long long _repostType;
    NSString *_fw_id;
    long long _fw_id_type;
    NSString *_opt_id;
    long long _opt_id_type;
    NSString *_fw_user_id;
    long long _repostTaskType;
    NSString *_debug_currentMethod;
    NSString *_challengeGroupID;
    NSDictionary *_pkStatus;
}

+ (unsigned long long)repostOperationItemTypeFromOptType:(long long)arg1;
+ (id)taskIDFromFakeThreadID:(long long)arg1;
+ (id)taskInDiskPosition;
+ (void)removeAllDiskTask;
+ (_Bool)removeTaskFromDiskByTaskID:(id)arg1 concernID:(id)arg2;
+ (id)fetchTasksFromDiskForConcernID:(id)arg1;
+ (id)fetchTaskFromDiskByTaskID:(id)arg1 concernID:(id)arg2;
+ (void)fetchTaskFromDiskByTaskID:(id)arg1 concernID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)persistentToDiskWithTask:(id)arg1;
+ (id)fakeThreadDictionary:(id)arg1;
@property(copy, nonatomic) NSDictionary *pkStatus; // @synthesize pkStatus=_pkStatus;
@property(copy, nonatomic) NSString *challengeGroupID; // @synthesize challengeGroupID=_challengeGroupID;
@property(copy, nonatomic) NSString *debug_currentMethod; // @synthesize debug_currentMethod=_debug_currentMethod;
@property(nonatomic) long long repostTaskType; // @synthesize repostTaskType=_repostTaskType;
@property(nonatomic) _Bool repostToComment; // @synthesize repostToComment=_repostToComment;
@property(copy, nonatomic) NSString *fw_user_id; // @synthesize fw_user_id=_fw_user_id;
@property(nonatomic) long long opt_id_type; // @synthesize opt_id_type=_opt_id_type;
@property(copy, nonatomic) NSString *opt_id; // @synthesize opt_id=_opt_id;
@property(nonatomic) long long fw_id_type; // @synthesize fw_id_type=_fw_id_type;
@property(copy, nonatomic) NSString *fw_id; // @synthesize fw_id=_fw_id;
@property(nonatomic) unsigned long long repostType; // @synthesize repostType=_repostType;
@property(nonatomic) long long requestRedPacketType; // @synthesize requestRedPacketType=_requestRedPacketType;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSDictionary *responseDict; // @synthesize responseDict=_responseDict;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long errorPosition; // @synthesize errorPosition=_errorPosition;
@property(retain, nonatomic) NSError *finishError; // @synthesize finishError=_finishError;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting=_isPosting;
@property(retain, nonatomic) TTForumUploadVideoModel *video; // @synthesize video=_video;
@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(nonatomic) unsigned long long postUGCEnterFrom; // @synthesize postUGCEnterFrom=_postUGCEnterFrom;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) long long fromWhere; // @synthesize fromWhere=_fromWhere;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *locationAddress; // @synthesize locationAddress=_locationAddress;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(retain, nonatomic) NSString *detail_pos; // @synthesize detail_pos=_detail_pos;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) long long forward; // @synthesize forward=_forward;
@property(copy, nonatomic) NSString *repostSchema; // @synthesize repostSchema=_repostSchema;
@property(copy, nonatomic) NSString *repostTitle; // @synthesize repostTitle=_repostTitle;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(nonatomic) long long create_time; // @synthesize create_time=_create_time;
@property(copy, nonatomic) NSString *mentionConcern; // @synthesize mentionConcern=_mentionConcern;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *mentionUser; // @synthesize mentionUser=_mentionUser;
@property(copy, nonatomic) NSString *contentRichSpans; // @synthesize contentRichSpans=_contentRichSpans;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *titleRichSpan; // @synthesize titleRichSpan=_titleRichSpan;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long fakeThreadId; // @synthesize fakeThreadId=_fakeThreadId;
@property(retain, nonatomic) NSString *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long status;
- (id)needUploadImgModels;
- (_Bool)needUploadVideo;
- (_Bool)needUploadVideoCover;
- (_Bool)needUploadImg;
- (void)compressVideoCoverImage;
- (_Bool)removeFromDisk;
- (_Bool)saveToDisk;
- (id)convertImage:(id)arg1;
- (void)addTaskImages:(id)arg1 thumbImages:(id)arg2;
- (id)extraTrackForVideo;
- (id)extraTrackForVideoPublishDone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskType:(long long)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool shouldShowRedPacket;
@property(readonly, copy, nonatomic) NSString *tsvActivityConcernID;
- (_Bool)isFromConcernHomepage;
- (_Bool)shouldInsertToShortVideoTab;
- (_Bool)isShortVideo;
@property(readonly, nonatomic) UIImage *shortVideoCoverImage;
@property(readonly, nonatomic) long long fakeID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
