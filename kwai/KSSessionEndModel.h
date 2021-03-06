//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol KSSessionEndModelPageProtocol;

@interface KSSessionEndModel : NSObject
{
    NSDate *_lastActiveDate;
    id <KSSessionEndModelPageProtocol> _topPage;
    NSString *_secretKey;
}

+ (id)defaultSessionEndModel;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(nonatomic) __weak id <KSSessionEndModelPageProtocol> topPage; // @synthesize topPage=_topPage;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)sendPage:(id)arg1 withKey:(id)arg2;
- (void)refreshKeyOnCompleted:(CDUnknownBlockType)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)init;
- (void)dealloc;

@end

