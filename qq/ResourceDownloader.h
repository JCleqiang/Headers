//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol ResourceDownloadDelegate;

@interface ResourceDownloader : NSObject
{
    unsigned int _u32FileCookie;
    id <ResourceDownloadDelegate> _downloadRescourceDelegate;
}

- (void).cxx_destruct;
- (void)downloadFailed:(id)arg1 sess:(id)arg2 downloadDelegate:(id)arg3 error:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)downloadSuccess:(id)arg1 sess:(id)arg2 resObject:(id)arg3 downloadDelegate:(id)arg4 completeBlock:(CDUnknownBlockType)arg5;
- (void)downloadResource:(id)arg1 downloadDelegate:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)downloadIconResource:(long long)arg1 iconUrl:(id)arg2 iconMd5:(id)arg3;

@end

