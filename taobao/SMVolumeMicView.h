//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NodeLayerDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSString;
@protocol SMVolumeMicViewDataSource;

@interface SMVolumeMicView : UIView <NodeLayerDelegate>
{
    _Bool _isInBackground;
    _Bool _firstShowNodes;
    int _nodeType;
    id <SMVolumeMicViewDataSource> _dataSource;
    CADisplayLink *_displayLink;
    NSMutableArray *_nodesArr;
    double _volumeLevel;
}

@property(nonatomic) _Bool firstShowNodes; // @synthesize firstShowNodes=_firstShowNodes;
@property(nonatomic) double volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(retain, nonatomic) NSMutableArray *nodesArr; // @synthesize nodesArr=_nodesArr;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) int nodeType; // @synthesize nodeType=_nodeType;
@property(nonatomic) __weak id <SMVolumeMicViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)cancelNodeWithLoadingWithAnimation:(_Bool)arg1;
- (void)disspperanceScaleAnimationWithAnimation:(_Bool)arg1;
- (void)startScaleAnimation;
- (void)recordDisplayAction;
- (void)createDisplayLink;
- (void)createNodes;
- (void)nodesLoadingWaveStop;
- (void)nodesDidDisappeared;
- (void)nodesDidAppeared;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

