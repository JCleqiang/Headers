//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface TTForumPostThreadTaskCenter : NSObject
{
    NSMapTable *_taskMapTable;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *taskMapTable; // @synthesize taskMapTable=_taskMapTable;
- (void).cxx_destruct;
- (void)asyncRemoveTaskFromDiskByTaskID:(id)arg1 concernID:(id)arg2;
- (void)asyncSaveTask:(id)arg1;
- (void)asyncGetTaskWithID:(id)arg1 concernID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

