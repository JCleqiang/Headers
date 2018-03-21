//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString, TBAddressModel, TBVideoSpreadGroupListModel, TBVideoTagInfoBase;

@interface TBVideoBasicInfoModel : QQModel
{
    _Bool _isHasRelatedVideos;
    _Bool _isPicture;
    _Bool _isLocal;
    unsigned int _videoLimit;
    unsigned int _interactStatus;
    unsigned int _videoHeight;
    unsigned int _videoWidth;
    int _latitude;
    int _longitude;
    int _timezoneOffset;
    unsigned int _videoSource;
    int _addVideoTimeZone;
    unsigned int _error;
    unsigned int _urlFlag;
    long long _type;
    NSString *_vid;
    NSString *_videoUrl;
    NSString *_videoCover;
    NSString *_title;
    NSString *_doodleUrl;
    unsigned long long _createTime;
    NSString *_label;
    unsigned long long _videoTotalTime;
    TBAddressModel *_address;
    NSString *_videoAttr;
    NSString *_ownerUnionID;
    TBVideoSpreadGroupListModel *_groupList;
    TBVideoTagInfoBase *_videoTag;
    NSString *_doodleText;
    unsigned long long _videoLength;
    double _videoLoadTime;
    double _videoPlayerTime;
    NSArray *_mentionList;
    unsigned long long _captureTime;
    NSString *_captureLocation;
    unsigned long long _videoIndex;
    NSString *_ownerUID;
    unsigned long long _groupCode;
    NSString *_groupStoryFileMD5;
}

+ (id)createWithVideoFullInfo:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *groupStoryFileMD5; // @synthesize groupStoryFileMD5=_groupStoryFileMD5;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned int urlFlag; // @synthesize urlFlag=_urlFlag;
@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *ownerUID; // @synthesize ownerUID=_ownerUID;
@property(nonatomic) unsigned long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(nonatomic) int addVideoTimeZone; // @synthesize addVideoTimeZone=_addVideoTimeZone;
@property(nonatomic) unsigned int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) int timezoneOffset; // @synthesize timezoneOffset=_timezoneOffset;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(retain, nonatomic) NSString *captureLocation; // @synthesize captureLocation=_captureLocation;
@property(nonatomic) int longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long captureTime; // @synthesize captureTime=_captureTime;
@property(nonatomic) _Bool isPicture; // @synthesize isPicture=_isPicture;
@property(retain, nonatomic) NSArray *mentionList; // @synthesize mentionList=_mentionList;
@property(nonatomic) double videoPlayerTime; // @synthesize videoPlayerTime=_videoPlayerTime;
@property(nonatomic) double videoLoadTime; // @synthesize videoLoadTime=_videoLoadTime;
@property(nonatomic) unsigned int videoWidth; // @synthesize videoWidth=_videoWidth;
@property(nonatomic) unsigned int videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(retain, nonatomic) NSString *doodleText; // @synthesize doodleText=_doodleText;
@property(retain, nonatomic) TBVideoTagInfoBase *videoTag; // @synthesize videoTag=_videoTag;
@property(nonatomic) unsigned int interactStatus; // @synthesize interactStatus=_interactStatus;
@property(retain, nonatomic) TBVideoSpreadGroupListModel *groupList; // @synthesize groupList=_groupList;
@property(nonatomic) unsigned int videoLimit; // @synthesize videoLimit=_videoLimit;
@property(retain, nonatomic) NSString *ownerUnionID; // @synthesize ownerUnionID=_ownerUnionID;
@property(retain, nonatomic) NSString *videoAttr; // @synthesize videoAttr=_videoAttr;
@property(nonatomic) _Bool isHasRelatedVideos; // @synthesize isHasRelatedVideos=_isHasRelatedVideos;
@property(retain, nonatomic) TBAddressModel *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long videoTotalTime; // @synthesize videoTotalTime=_videoTotalTime;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *doodleUrl; // @synthesize doodleUrl=_doodleUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *videoCover; // @synthesize videoCover=_videoCover;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)getVideoAttribModel;
- (id)convertToStoryVideoDes;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithVideoFullInfoPBData:(struct CPBMessageDecoder *)arg1;

@end
