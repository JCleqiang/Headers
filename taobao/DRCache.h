//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DRCache : NSObject
{
    NSMutableDictionary *_modulesCache;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *modulesCache; // @synthesize modulesCache=_modulesCache;
- (void).cxx_destruct;
- (void)removeModule:(id)arg1;
- (void)cacheModule:(id)arg1;
- (id)dModuleForModuleName:(id)arg1;
- (id)init;

@end
