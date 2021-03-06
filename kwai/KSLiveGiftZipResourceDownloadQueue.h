//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface KSLiveGiftZipResourceDownloadQueue : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableArray *_waitingDownloaders;
    NSMutableArray *_processingDownloaders;
}

@property(retain, nonatomic) NSMutableArray *processingDownloaders; // @synthesize processingDownloaders=_processingDownloaders;
@property(retain, nonatomic) NSMutableArray *waitingDownloaders; // @synthesize waitingDownloaders=_waitingDownloaders;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (void)cancelAllDownloadTasks;
- (void)tryToDownloadResource;
- (void)downloadResourceForGift:(id)arg1;
- (id)init;

@end

