//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface OrangeUpdateModeManager : NSObject
{
    NSMutableArray *_modeList;
    NSRecursiveLock *_lock;
}

+ (id)getInstanceWithMode:(long long)arg1;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *modeList; // @synthesize modeList=_modeList;
- (void).cxx_destruct;
- (void)addModeInstance:(long long)arg1;
- (void)removeModeInstance:(long long)arg1;
- (void)switchUpdateFromMode:(long long)arg1 toMode:(long long)arg2;
- (id)initWithMode:(long long)arg1;

@end
