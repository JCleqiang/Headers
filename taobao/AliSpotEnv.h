//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AliSpotEnv : NSObject
{
    NSObject<OS_dispatch_queue> *_trdEncryptThread;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trdEncryptThread; // @synthesize trdEncryptThread=_trdEncryptThread;
- (void).cxx_destruct;
- (_Bool)isRunInSpotEnv;
- (void)executeEnvThead:(CDUnknownBlockType)arg1;
- (id)init;

@end
