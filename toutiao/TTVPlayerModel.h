//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TTVPlayerModel : NSObject
{
    _Bool _showMutedView;
    _Bool _useOwnPlayer;
    _Bool _enableCache;
    _Bool _enableResolution;
    _Bool _disableFinishUIShow;
    _Bool _isAutoPlaying;
    _Bool _mutedWhenStart;
    _Bool _isLoopPlay;
    _Bool _isVideoBusiness;
    _Bool _enableCommonTracker;
    _Bool _removeWhenFinished;
    _Bool _enableChangeResolutionAlert;
    _Bool _disableControlView;
    _Bool _disableSessionDeactive;
    _Bool _isAdBusiness;
    NSString *_itemID;
    NSString *_groupID;
    long long _aggrType;
    NSString *_categoryID;
    NSString *_adID;
    NSString *_logExtra;
    NSDictionary *_logPb;
    unsigned long long _sp;
    NSString *_videoID;
    NSString *_localURL;
    NSString *_urlString;
    NSDictionary *_videoPlayInfo;
    NSString *_trackLabel;
    NSString *_enterFrom;
    NSString *_fromGid;
    NSString *_categoryName;
    NSString *_authorId;
    double _expirationTime;
    long long _defaultResolutionType;
    long long _playerShowShareMore;
    NSString *_videoSubjectID;
    NSDictionary *_commonExtra;
}

@property(nonatomic) _Bool isAdBusiness; // @synthesize isAdBusiness=_isAdBusiness;
@property(nonatomic) _Bool disableSessionDeactive; // @synthesize disableSessionDeactive=_disableSessionDeactive;
@property(retain, nonatomic) NSDictionary *commonExtra; // @synthesize commonExtra=_commonExtra;
@property(nonatomic) _Bool disableControlView; // @synthesize disableControlView=_disableControlView;
@property(nonatomic) _Bool enableChangeResolutionAlert; // @synthesize enableChangeResolutionAlert=_enableChangeResolutionAlert;
@property(nonatomic) _Bool removeWhenFinished; // @synthesize removeWhenFinished=_removeWhenFinished;
@property(nonatomic) _Bool enableCommonTracker; // @synthesize enableCommonTracker=_enableCommonTracker;
@property(copy, nonatomic) NSString *videoSubjectID; // @synthesize videoSubjectID=_videoSubjectID;
@property(nonatomic) _Bool isVideoBusiness; // @synthesize isVideoBusiness=_isVideoBusiness;
@property(nonatomic) long long playerShowShareMore; // @synthesize playerShowShareMore=_playerShowShareMore;
@property(nonatomic) _Bool isLoopPlay; // @synthesize isLoopPlay=_isLoopPlay;
@property(nonatomic) _Bool mutedWhenStart; // @synthesize mutedWhenStart=_mutedWhenStart;
@property(nonatomic) _Bool isAutoPlaying; // @synthesize isAutoPlaying=_isAutoPlaying;
@property(nonatomic) _Bool disableFinishUIShow; // @synthesize disableFinishUIShow=_disableFinishUIShow;
@property(nonatomic) long long defaultResolutionType; // @synthesize defaultResolutionType=_defaultResolutionType;
@property(nonatomic) _Bool enableResolution; // @synthesize enableResolution=_enableResolution;
@property(nonatomic) _Bool enableCache; // @synthesize enableCache=_enableCache;
@property(nonatomic) _Bool useOwnPlayer; // @synthesize useOwnPlayer=_useOwnPlayer;
@property(nonatomic) _Bool showMutedView; // @synthesize showMutedView=_showMutedView;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *fromGid; // @synthesize fromGid=_fromGid;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *trackLabel; // @synthesize trackLabel=_trackLabel;
@property(copy, nonatomic) NSDictionary *videoPlayInfo; // @synthesize videoPlayInfo=_videoPlayInfo;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) NSString *localURL; // @synthesize localURL=_localURL;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) unsigned long long sp; // @synthesize sp=_sp;
@property(copy, nonatomic) NSDictionary *logPb; // @synthesize logPb=_logPb;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) long long aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)dataTrackLabel;
- (id)init;
- (void)dealloc;

@end
