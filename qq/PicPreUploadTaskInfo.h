//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BasePicUploadReqInfo, NSError, NSString, QQMessageModel, QQMessagePicInfo;
@protocol RichTransferAIODelegate;

@interface PicPreUploadTaskInfo : NSObject
{
    NSString *_picIdentifier;
    QQMessagePicInfo *_messagePicInfo;
    QQMessageModel *_messageModel;
    int _bodyType;
    int _preuploadState;
    int _runState;
    BasePicUploadReqInfo *_picUploadReqInfo;
    NSString *_oldUuid;
    NSString *_fileResId;
    _Bool _sencondTrans;
    NSError *_error;
    double _holdMsgTimeStamp;
    double _startTimeStamp;
    int _xo;
    id <RichTransferAIODelegate> _aioDelegate;
}

@property(nonatomic) __weak id <RichTransferAIODelegate> aioDelegate; // @synthesize aioDelegate=_aioDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) int bodyType; // @dynamic bodyType;
@property(copy, nonatomic) NSError *error; // @dynamic error;
@property(copy, nonatomic) NSString *fileResId; // @dynamic fileResId;
@property(nonatomic) double holdMsgTimeStamp; // @dynamic holdMsgTimeStamp;
@property(retain, nonatomic) QQMessageModel *messageModel; // @dynamic messageModel;
@property(retain, nonatomic) QQMessagePicInfo *messagePicInfo; // @dynamic messagePicInfo;
@property(copy, nonatomic) NSString *oldUuid; // @dynamic oldUuid;
@property(copy, nonatomic) NSString *picIdentifier; // @dynamic picIdentifier;
@property(retain, nonatomic) BasePicUploadReqInfo *picUploadReqInfo; // @dynamic picUploadReqInfo;
@property(nonatomic) int preuploadState; // @dynamic preuploadState;
@property(nonatomic) int runState; // @dynamic runState;
@property(nonatomic) _Bool sencondTrans; // @dynamic sencondTrans;
@property(nonatomic) double startTimeStamp; // @dynamic startTimeStamp;

@end

