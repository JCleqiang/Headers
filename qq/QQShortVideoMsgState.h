//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRichMsgState.h>

@interface QQShortVideoMsgState : QQRichMsgState
{
    int _errorCode;
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (_Bool)failed;
- (_Bool)sending;
- (void)resetVideoState;
- (void)checkState;
- (void)setState:(int)arg1;
- (_Bool)isVideoCompressSucc;
- (_Bool)isVideoCompressFail;
- (_Bool)isVideoCompressing;
- (_Bool)isVideoDownSucc;
- (_Bool)isVideoDownloadFail;
- (_Bool)isVideoDownloadPause;
- (_Bool)isVideoDownloading;
- (_Bool)isForwardFail;
- (_Bool)isUploadSucc;
- (_Bool)isSendMsgFail;
- (_Bool)isUploadFail;
- (_Bool)isUploadPause;
- (_Bool)isUploading;

@end
