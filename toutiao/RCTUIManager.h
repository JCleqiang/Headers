//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "RCTInvalidating-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, RCTBridge, RCTLayoutAnimation;
@protocol OS_dispatch_queue;

@interface RCTUIManager : NSObject <RCTBridgeModule, RCTInvalidating>
{
    NSMutableSet *_rootViewTags;
    NSMutableArray *_pendingUIBlocks;
    RCTLayoutAnimation *_layoutAnimation;
    NSMutableSet *_viewsToBeDeleted;
    NSMutableDictionary *_shadowViewRegistry;
    NSMutableDictionary *_viewRegistry;
    NSDictionary *_componentDataByName;
    NSMutableSet *_bridgeTransactionListeners;
    long long _currentInterfaceOrientation;
    _Bool _unsafeFlushUIChangesBeforeBatchEnds;
    RCTBridge *_bridge;
}

+ (id)JSResponder;
+ (id)__rct_export__155120;
+ (id)__rct_export__146319;
+ (id)__rct_export__145318;
+ (id)__rct_export__138417;
+ (id)__rct_export__133816;
+ (id)__rct_export__132215;
+ (id)__rct_export__130614;
+ (id)__rct_export__125513;
+ (id)__rct_export__122712;
+ (id)__rct_export__119311;
+ (id)__rct_export__109610;
+ (id)__rct_export__10739;
+ (id)__rct_export__10658;
+ (id)__rct_export__10547;
+ (id)__rct_export__10426;
+ (id)__rct_export__9955;
+ (id)__rct_export__9074;
+ (id)__rct_export__8763;
+ (id)__rct_export__8552;
+ (id)__rct_export__8321;
+ (id)__rct_export__7250;
+ (void)load;
+ (id)moduleName;
@property _Bool unsafeFlushUIChangesBeforeBatchEnds; // @synthesize unsafeFlushUIChangesBeforeBatchEnds=_unsafeFlushUIChangesBeforeBatchEnds;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (id)_rootTagForReactTag:(id)arg1;
- (void)rootViewForReactTag:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)configureNextLayoutAnimation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (id)constantsToExport;
- (void)clearJSResponder;
- (void)setJSResponder:(id)arg1 blockNativeResponder:(_Bool)arg2;
- (void)takeSnapshot:(id)arg1 withOptions:(id)arg2 resolve:(CDUnknownBlockType)arg3 reject:(CDUnknownBlockType)arg4;
- (void)measureViewsInRect:(struct CGRect)arg1 parentView:(id)arg2 errorCallback:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)measureLayoutRelativeToParent:(id)arg1 errorCallback:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)measureLayout:(id)arg1 relativeTo:(id)arg2 errorCallback:(CDUnknownBlockType)arg3 callback:(CDUnknownBlockType)arg4;
- (void)viewIsDescendantOf:(id)arg1 ancestor:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)measureInWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)measure:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setNeedsLayout;
- (void)flushUIBlocks;
- (void)_layoutAndMount;
- (void)batchDidComplete;
- (void)partialBatchDidFlush;
- (void)dispatchViewManagerCommand:(id)arg1 commandID:(long long)arg2 commandArgs:(id)arg3;
- (void)findSubviewIn:(id)arg1 atPoint:(struct CGPoint)arg2 callback:(CDUnknownBlockType)arg3;
- (void)blur:(id)arg1;
- (void)focus:(id)arg1;
- (void)updateView:(id)arg1 viewName:(id)arg2 props:(id)arg3;
- (void)createView:(id)arg1 viewName:(id)arg2 rootTag:(id)arg3 props:(id)arg4;
- (void)_manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6 registry:(id)arg7;
- (void)manageChildren:(id)arg1 moveFromIndices:(id)arg2 moveToIndices:(id)arg3 addChildReactTags:(id)arg4 addAtIndices:(id)arg5 removeAtIndices:(id)arg6;
- (void)setChildren:(id)arg1 reactTags:(id)arg2;
- (void)replaceExistingNonRootView:(id)arg1 withView:(id)arg2;
- (void)removeRootView:(id)arg1;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2 withAnimation:(id)arg3;
- (void)_removeChildren:(id)arg1 fromContainer:(id)arg2;
- (id)_childrenToRemoveFromContainer:(id)arg1 atIndices:(id)arg2;
- (void)removeSubviewsFromContainerWithID:(id)arg1;
- (void)_amendPendingUIBlocksWithStylePropagationUpdateForShadowView:(id)arg1;
- (CDUnknownBlockType)uiBlockWithLayoutUpdateForRootView:(id)arg1;
- (void)addUIBlock:(CDUnknownBlockType)arg1;
- (void)_purgeChildren:(id)arg1 fromRegistry:(id)arg2;
- (void)setBackgroundColor:(id)arg1 forView:(id)arg2;
- (void)setIntrinsicContentSize:(struct CGSize)arg1 forView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 forView:(id)arg2;
- (id)viewForReactTag:(id)arg1;
- (void)registerRootView:(id)arg1 withSizeFlexibility:(long long)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)setBridge:(id)arg1;
- (id)viewRegistry;
- (id)shadowViewRegistry;
- (void)invalidate;
- (void)interfaceOrientationWillChange:(id)arg1;
- (void)didReceiveNewContentSizeMultiplier;
- (id)allocateRootTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

