//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQShareResultDialogDelegate-Protocol.h>
#import <QQMainProject/QUIAlertViewDelegate-Protocol.h>
#import <QQMainProject/RichMsgPreviewDialogDelegate-Protocol.h>

@class NSString, NSTimer, QQHttpClientSession, QQRichMsgPreviewDialog, QQShareMsgInfo, QQShareResultDialog, QUIAlertView, QUICheckBoxAlertView;
@protocol QQRichMsgUtilDelegate;

@interface QQRichMsgUtil : NSObject <RichMsgPreviewDialogDelegate, QQShareResultDialogDelegate, QUIAlertViewDelegate>
{
    long long _lRequestVKeyTag;
    _Bool _isSharingQZone;
    id <QQRichMsgUtilDelegate> _delegate;
    QQShareMsgInfo *_shareInfo;
    int _xo;
    NSString *_connIpAddr;
    unsigned int _connIp;
    unsigned int _connPort;
    QQRichMsgPreviewDialog *_richPreMsgDlg;
    QQShareResultDialog *_shareResultDlg;
    QUICheckBoxAlertView *_shareResultAlertView;
    QUIAlertView *_qqAlertView;
    QQHttpClientSession *_session;
    NSString *_AddtionalMessage;
    NSTimer *_RequestTimer;
    NSString *_loadingPreImgPath;
    _Bool _willDownloadingIcon;
}

+ (id)getInstance;
- (void)onQQRequestSigVKeyFailNote:(id)arg1;
- (void)onQQRequestSigVKeySuccNote:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)buttonClickSuccess:(id)arg1;
- (void)buttonClickTwo:(id)arg1;
- (void)buttonClickOne:(id)arg1;
- (void)shareToQzoneResult:(unsigned long long)arg1;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (_Bool)checkCurrentNetState;
- (void)onTimeout;
- (void)HandleGetPluginInfoResp:(id)arg1;
- (void)getImageDownloadErrorNotification:(id)arg1;
- (void)getImageFinishNotification:(id)arg1;
- (id)getPreViewImage;
- (void)SaveAddtionalMsg;
- (void)requestFetchVKey;
- (void)uploadPic:(id)arg1;
- (void)ShareToQZone;
- (void)shareToQZoneWithShareInfo:(id)arg1 comment:(id)arg2;
- (id)connAppID;
- (void)popQQShareResultDlg:(_Bool)arg1 errorcode:(long long)arg2 msg:(id)arg3 to3rdApp:(_Bool)arg4;
- (void)getOpenIDTimeOut;
- (void)getOpenIDFinished:(id)arg1;
- (void)popAlertViewTip;
- (void)compareOpenID:(id)arg1;
- (void)realPopQQRichPreMsgDlg;
- (void)popQQRichPreMsgDlg:(id)arg1 needCheckOpenID:(_Bool)arg2;
- (void)popQQRichPreMsgDlg:(id)arg1;
- (void)willDismissFromScreen;
- (void)clear;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQRichMsgUtilDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isSharingQZone; // @dynamic isSharingQZone;
@property(retain, nonatomic) QQShareMsgInfo *shareInfo; // @dynamic shareInfo;
@property(readonly) Class superclass;

@end

