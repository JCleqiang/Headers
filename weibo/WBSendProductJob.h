//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeWithMediaJob.h"

@interface WBSendProductJob : WBComposeWithMediaJob
{
    _Bool isUpdate;
}

+ (Class)supervisorClass;
+ (Class)operationClass;
@property _Bool isUpdate; // @synthesize isUpdate;
- (unsigned long long)fileSource;
- (_Bool)isMainOperation:(id)arg1;
- (void)queueOperation:(id)arg1 didFailureWithError:(id)arg2;
- (void)queueOperation:(id)arg1 didFinishWithResult:(id)arg2;
- (id)sendFailedStatus;
- (id)sendSuccessStatus;
- (id)enterQueueStatus;
- (_Bool)canAddToDraft;
- (id)act;
- (id)init;

@end

