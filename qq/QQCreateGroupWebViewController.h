//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewController.h>

#import <QQMainProject/CLLocationManagerDelegate-Protocol.h>
#import <QQMainProject/IQQGroupProfileViewController-Protocol.h>
#import <QQMainProject/MKMapViewDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>
#import <QQMainProject/UIScrollViewDelegate-Protocol.h>
#import <QQMainProject/UIWebViewDelegate-Protocol.h>

@class CustomUserLocation, MKMapView, NSData, NSString, NSTimer, QQCreateGroupModel, QQGroupSettingModel, UIButton, UILabel, UIScrollView, UIView;
@protocol QQCreateGroupDelegate, QQEditGroupLocationDelegate;

@interface QQCreateGroupWebViewController : QQWebViewController <UIWebViewDelegate, UIScrollViewDelegate, CLLocationManagerDelegate, UIAlertViewDelegate, IQQGroupProfileViewController, MKMapViewDelegate>
{
    _Bool _justEditGroupLocation;
    _Bool _isFromNewMultiCatogaryPage;
    long long _catogaryFromType;
    _Bool _requestSending;
    NSTimer *_timer;
    UIScrollView *_scrollView;
    MKMapView *_mapView;
    int _mapState;
    NSString *_oldTitle;
    NSString *_requestClientKeyCallback;
    NSString *_alertMsgBoxCallback;
    NSString *_currentLocationCallback;
    unsigned int _newGroupCode;
    NSString *_inviteMemToGroup;
    _Bool _sameCityGroup;
    UIView *_testView;
    int _groupType;
    QQGroupSettingModel *_groupSettingModel;
    _Bool _leaveCurrentView;
    CustomUserLocation *_customUserLocation;
    id <QQEditGroupLocationDelegate> _modifyGroupLocationDelegate;
    id <QQCreateGroupDelegate> _createGroupDelegate;
    long long _latitude;
    long long _longitude;
    unsigned long long _groupCode;
    unsigned int _groupUin;
    _Bool _bBackToRecentTabAfterFinish;
    UIButton *_uploadGroupFaceBtn;
    UILabel *_headWallLabel;
    _Bool _hasUploadGroupFace;
    _Bool _hasCreateGroupSucc;
    _Bool _hasModifyGroupProfile;
    NSData *_sign;
    QQCreateGroupModel *_createGroupModel;
    _Bool _modifyGroupLocationToServer;
    long long _initCreateGroupType;
    NSString *_location;
    _Bool _isLocationGroup;
}

+ (void)createCreateGroupMsg:(unsigned long long)arg1 groupUin:(unsigned long long)arg2 groupName:(id)arg3 param:(id)arg4;
+ (void)updateTroopModelInCacheWithGrpCode:(unsigned long long)arg1 GrpUin:(unsigned long long)arg2 GrpName:(id)arg3;
+ (void)createCreateGroupMsg:(unsigned long long)arg1 groupUin:(unsigned long long)arg2 groupName:(id)arg3 param:(id)arg4 createTime:(unsigned long long)arg5;
- (_Bool)isSupportRightDragToGoBack;
- (void)setWebViewScrollEnable:(_Bool)arg1;
- (id)dicToJSON:(id)arg1;
- (id)_getNobodyView;
- (_Bool)checkLocationEnabledAndShowGuid:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)notifyWebGroupInfoModifyed:(int)arg1 groupName:(id)arg2 groupMemo:(id)arg3 groupLocation:(id)arg4;
- (void)didModifyGroupProfile:(unsigned int)arg1 groupName:(id)arg2 groupPost:(id)arg3 groupMemo:(id)arg4 groupRichMemo:(id)arg5 groudAdmissionType:(int)arg6 groupCategory:(int)arg7 groupFaceId:(int)arg8 groupLocation:(id)arg9 groupTribeID:(long long)arg10 groupTribeName:(id)arg11 groupTribeType:(unsigned int)arg12;
- (id)escapeFaceInText:(id)arg1;
- (id)parseGenInfo:(id)arg1 latitude:(unsigned long long *)arg2 longitude:(unsigned long long *)arg3 cityId:(unsigned int *)arg4 poiId:(unsigned long long *)arg5;
- (void)notifyWebAlertMsgBoxResult:(int)arg1;
- (void)notifyWebLBSState:(int)arg1 andCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)setUserPosition:(struct CLLocationCoordinate2D)arg1;
- (void)startGetLocation:(_Bool)arg1;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)unloadMapView:(_Bool)arg1;
- (void)loadMapView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onSetLocationMap:(id)arg1;
- (void)onSetPageHeight:(id)arg1;
- (void)onShowCreateTroopMsgBox:(id)arg1;
- (id)createNearByGroupModelFromGroupSettingModel:(id)arg1;
- (void)onFinishCreateGroup:(id)arg1;
- (void)onRequestClientKey:(id)arg1;
- (void)onModifyTroopLocation:(id)arg1;
- (void)unregisterJsNotificationsWhenViewDisappear;
- (void)registerJsNotificationsWhenViewAppear;
- (void)ActionReqeustStwebTokenTimeout;
- (void)ActionRequestStwebToken:(id)arg1;
- (void)modifyGroupLocation:(id)arg1;
- (void)ActionSetGroupLocationNotificatioFail:(id)arg1;
- (void)ActionSetGroupLocationNotificatioSuccess:(id)arg1;
- (void)updateScrollViewLayout:(int)arg1;
- (void)updateWebViewLayout:(id)arg1 withWebPageHeight:(double)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)requestTokenForUrl;
- (void)releaseTimer;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEditGroupLocation;
- (id)initWithCatogaryCreateGroupFrom:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool bBackToRecentTabAfterFinish; // @dynamic bBackToRecentTabAfterFinish;
@property(nonatomic) id <QQCreateGroupDelegate> createGroupDelegate; // @dynamic createGroupDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(retain, nonatomic) QQGroupSettingModel *groupSettingModel; // @dynamic groupSettingModel;
@property(nonatomic) int groupType; // @dynamic groupType;
@property(nonatomic) unsigned int groupUin; // @dynamic groupUin;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long initCreateGroupType; // @dynamic initCreateGroupType;
@property(nonatomic) _Bool isLocationGroup; // @dynamic isLocationGroup;
@property(nonatomic) _Bool justEditGroupLocation; // @dynamic justEditGroupLocation;
@property(nonatomic) long long latitude; // @dynamic latitude;
@property(retain, nonatomic) NSString *location; // @dynamic location;
@property(nonatomic) long long longitude; // @dynamic longitude;
@property(nonatomic) id <QQEditGroupLocationDelegate> modifyGroupLocationDelegate; // @dynamic modifyGroupLocationDelegate;
@property(nonatomic) _Bool modifyGroupLocationToServer; // @dynamic modifyGroupLocationToServer;
@property(retain, nonatomic) NSData *sign; // @dynamic sign;
@property(readonly) Class superclass;

@end
