//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/IAsynDownloadImageObserver-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MCTempManagerDelegate;

@interface QZFunDecoMgr : NSObject <IAsynDownloadImageObserver>
{
    id <MCTempManagerDelegate> _delegate;
    NSMutableArray *_animEffectArray;
    NSMutableArray *_animEffectTabArray;
    NSMutableDictionary *_animEffectTabDic;
}

+ (id)animEffectPath;
+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *animEffectTabDic; // @synthesize animEffectTabDic=_animEffectTabDic;
@property(retain, nonatomic) NSMutableArray *animEffectTabArray; // @synthesize animEffectTabArray=_animEffectTabArray;
@property(retain, nonatomic) NSMutableArray *animEffectArray; // @synthesize animEffectArray=_animEffectArray;
@property(nonatomic) id <MCTempManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadImageFinished:(id)arg1;
- (void)clearAnimEffectCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

