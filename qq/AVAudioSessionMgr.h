//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AVAudioSessionMgr : NSObject <QQAudioSessionManagerDelegate>
{
    NSMutableDictionary *_calls;
}

+ (id)shareInstance;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)doDeactive;
- (void)deactive;
- (_Bool)requestPlayAndRecord;
- (void)requestPlayBack;
- (_Bool)updateCallEnd:(id)arg1 reason:(int)arg2;
- (_Bool)endCall:(id)arg1;
- (_Bool)acceptCall:(id)arg1;
- (_Bool)reportCall:(id)arg1;
- (_Bool)startCall:(id)arg1;
- (id)callWithAVID:(id)arg1;
- (_Bool)findCall:(id)arg1;
- (_Bool)removeCall:(id)arg1;
- (_Bool)addCall:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
