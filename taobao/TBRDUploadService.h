//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface TBRDUploadService : NSObject
{
    NSMutableSet *_services;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)uploadFiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadFiles:(id)arg1 bizCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadFiles:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadFiles:(id)arg1 bizCode:(id)arg2 userNick:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

