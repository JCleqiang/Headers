//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface aluLogBuf : NSObject
{
    NSMutableArray *_loginRecords;
    NSLock *_loginRecordLock;
}

+ (id)instance;
@property(retain, nonatomic) NSLock *loginRecordLock; // @synthesize loginRecordLock=_loginRecordLock;
@property(retain, nonatomic) NSMutableArray *loginRecords; // @synthesize loginRecords=_loginRecords;
- (void).cxx_destruct;
- (id)getLoginBehaviorString;
- (void)recordLoginBehavior:(int)arg1 accountCount:(int)arg2;
- (id)getAppVersion;
- (id)getCurrentTime;
- (void)saveLoginRecords;
- (void)checkLoadLoginRecords;
- (id)init;

@end
