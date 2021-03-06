//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZPhotoModuleViewController.h>

#import <QQMainProject/QZCommonPhotoCellDelegate-Protocol.h>
#import <QQMainProject/QZPhotoModuleDownloaderInterfaceDelegate-Protocol.h>
#import <QQMainProject/QZPhotoRecentPhotoHeadViewDelegate-Protocol.h>

@class NSMutableArray, NSString, QZPhotoRecentPhotoHeadView;

@interface QZPhotoRecentPhotoViewController : QZPhotoModuleViewController <QZCommonPhotoCellDelegate, QZPhotoModuleDownloaderInterfaceDelegate, QZPhotoRecentPhotoHeadViewDelegate>
{
    unsigned long long _uin;
    NSString *_nickname;
    long long _getRecentPhotoRequestID;
    long long _errorCode;
    NSMutableArray *_collectionList;
    NSMutableArray *_sectionList;
    NSString *_attachInfo;
    NSMutableArray *_allPhotos;
    NSMutableArray *_lastPhotoArray;
    long long _lastLoadIndex;
    _Bool _shouldCache;
    _Bool _loadViewed;
    NSMutableArray *_fakeVideoList;
    QZPhotoRecentPhotoHeadView *_headView;
    int _xo;
    _Bool _firstRequest;
}

@property(retain, nonatomic) QZPhotoRecentPhotoHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableArray *fakeVideoList; // @synthesize fakeVideoList=_fakeVideoList;
@property(nonatomic) _Bool loadViewed; // @synthesize loadViewed=_loadViewed;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache=_shouldCache;
@property(nonatomic) long long lastLoadIndex; // @synthesize lastLoadIndex=_lastLoadIndex;
@property(retain, nonatomic) NSMutableArray *lastPhotoArray; // @synthesize lastPhotoArray=_lastPhotoArray;
@property(retain, nonatomic) NSMutableArray *allPhotos; // @synthesize allPhotos=_allPhotos;
@property(retain, nonatomic) NSString *attachInfo; // @synthesize attachInfo=_attachInfo;
@property(retain, nonatomic) NSMutableArray *sectionList; // @synthesize sectionList=_sectionList;
@property(retain, nonatomic) NSMutableArray *collectionList; // @synthesize collectionList=_collectionList;
@property(nonatomic) _Bool firstRequest; // @synthesize firstRequest=_firstRequest;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long getRecentPhotoRequestID; // @synthesize getRecentPhotoRequestID=_getRecentPhotoRequestID;
- (void)clickRecentPhotoHeadView:(id)arg1 type:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *nickname; // @dynamic nickname;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

