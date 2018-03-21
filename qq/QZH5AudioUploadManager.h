//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZUploadDelegate-Protocol.h>

@class FMJCUploadUpstream, NSString, QZUploadManager;

@interface QZH5AudioUploadManager : NSObject <QZUploadDelegate>
{
    int _xo;
    QZUploadManager *_uploadManager;
    FMJCUploadUpstream *_upStream;
    NSString *_filePath;
    _Bool _isUploading;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _progressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
- (id)obtainQZUploadRequestData:(id)arg1;
- (id)init;
- (void)dealloc;
- (long long)obtainTaskId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *filePath; // @dynamic filePath;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isUploading; // @dynamic isUploading;
@property(readonly) Class superclass;
@property(retain, nonatomic) FMJCUploadUpstream *upStream; // @dynamic upStream;
@property(retain, nonatomic) QZUploadManager *uploadManager; // @dynamic uploadManager;

@end
