//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray;

@interface NWPolicyDNSCache : NSObject
{
    NSLock *log_Lock;
    NSMutableArray *connArray;
}

+ (void)asyncSchemeHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)schemaHandler:(id)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
- (id)init;

@end
