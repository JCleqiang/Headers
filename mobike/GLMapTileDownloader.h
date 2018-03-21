//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TileDownloadOperationDelegate-Protocol.h"

@class NSOperationQueue, NSString;
@protocol TileDownloadOperationDelegate;

@interface GLMapTileDownloader : NSObject <TileDownloadOperationDelegate>
{
    id <TileDownloadOperationDelegate> _delegate;
    NSOperationQueue *_tileDownloadQueue;
}

@property(retain, nonatomic) NSOperationQueue *tileDownloadQueue; // @synthesize tileDownloadQueue=_tileDownloadQueue;
@property(nonatomic) __weak id <TileDownloadOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operation:(id)arg1 didFinishWithData:(id)arg2;
- (void)addOperation:(id)arg1;
- (void)startDownload:(const char *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
