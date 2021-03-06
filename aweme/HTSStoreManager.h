//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RMStoreObserver-Protocol.h"

@class NSString;
@protocol HTSStoreManagerDelegate;

@interface HTSStoreManager : NSObject <RMStoreObserver>
{
    NSString *_cachePath;
    id <HTSStoreManagerDelegate> _delegate;
    NSString *_namesp;
}

+ (id)managerWithNamespace:(id)arg1 delegate:(id)arg2;
+ (id)managerWithNamespace:(id)arg1;
@property(readonly, copy) NSString *namesp; // @synthesize namesp=_namesp;
@property(readonly) __weak id <HTSStoreManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storePaymentTransactionFinished:(id)arg1;
- (id)makeDiskCachePath:(id)arg1;
- (id)_storeModelWithOrderID:(id)arg1;
- (void)_deleteTranasctionReceipt:(id)arg1;
- (void)_deleteWithOrderID:(id)arg1;
- (void)_delete:(id)arg1;
- (void)_saveTranasctionReceipt:(id)arg1;
- (void)_save:(id)arg1;
- (void)_startFetchOrderFinalResultWithStoreModel:(id)arg1 retryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendTransactionReceiptWithStoreModel:(id)arg1 transaction:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_addPaymentWithHTSProduct:(id)arg1 product:(id)arg2 orderID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchOrderInfoWithHTSProduct:(id)arg1 product:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkLocalTransactionReceiptIfNeeded;
- (void)buyProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStoreManagerImplementation:(Class)arg1;
- (id)initWithNamespace:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

