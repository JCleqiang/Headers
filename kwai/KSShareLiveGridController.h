//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSActionGrid2Controller.h"

@interface KSShareLiveGridController : KSActionGrid2Controller
{
    _Bool _enableNotifyFans;
    _Bool _alreadyNotifyFans;
    _Bool _shareStarted;
    short _shareLogSource;
    CDUnknownBlockType _shareWillBeginBlock;
    CDUnknownBlockType _shareDidFinishedBlock;
    CDUnknownBlockType _notifyFansBlock;
}

@property(nonatomic) _Bool shareStarted; // @synthesize shareStarted=_shareStarted;
@property(copy, nonatomic) CDUnknownBlockType notifyFansBlock; // @synthesize notifyFansBlock=_notifyFansBlock;
@property(nonatomic) _Bool alreadyNotifyFans; // @synthesize alreadyNotifyFans=_alreadyNotifyFans;
@property(nonatomic) _Bool enableNotifyFans; // @synthesize enableNotifyFans=_enableNotifyFans;
@property(nonatomic) short shareLogSource; // @synthesize shareLogSource=_shareLogSource;
@property(copy, nonatomic) CDUnknownBlockType shareDidFinishedBlock; // @synthesize shareDidFinishedBlock=_shareDidFinishedBlock;
@property(copy, nonatomic) CDUnknownBlockType shareWillBeginBlock; // @synthesize shareWillBeginBlock=_shareWillBeginBlock;
- (void).cxx_destruct;
- (id)notifyFansItem;
- (void)handleApplicationDidBecomeActiveNotification:(id)arg1;
- (void)shareWithFeed:(id)arg1 orCover:(id)arg2 orStreamId:(id)arg3 inViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)shareWithCover:(id)arg1 streamId:(id)arg2 coverUrls:(id)arg3 liveTitle:(id)arg4 inViewController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)shareQuizWithImage:(id)arg1 liveFeed:(id)arg2 inViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)shareWithFeed:(id)arg1 coverUrls:(id)arg2 orCover:(id)arg3 orStreamId:(id)arg4 liveTitle:(id)arg5 inViewController:(id)arg6 useColoredImage:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)dealloc;
- (id)init;

@end
