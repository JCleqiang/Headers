//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSObject, NSString, UIImageView, UITableView;
@protocol OS_dispatch_queue;

@interface AREAggregationTableView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_annotations;
    NSString *_clusterCrowNo;
    CDUnknownBlockType _dissmissBlock;
    UIImageView *_backgroundView;
    UITableView *_envelopeTableView;
    CDUnknownBlockType _clickCellViewBlock;
    NSObject<OS_dispatch_queue> *_dataQueue;
}

+ (double)heightForbackGroundViewWithCount:(long long)arg1;
+ (id)showAggregationTableViewAnnotation:(id)arg1 toSuperView:(id)arg2 clickCellBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property(copy, nonatomic) CDUnknownBlockType clickCellViewBlock; // @synthesize clickCellViewBlock=_clickCellViewBlock;
@property(retain, nonatomic) UITableView *envelopeTableView; // @synthesize envelopeTableView=_envelopeTableView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType dissmissBlock; // @synthesize dissmissBlock=_dissmissBlock;
@property(retain, nonatomic) NSString *clusterCrowNo; // @synthesize clusterCrowNo=_clusterCrowNo;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
- (void).cxx_destruct;
- (void)setupHeaderView;
- (void)updateBackGroundViewWithHeight:(double)arg1;
- (void)setupBackgroundViewWithHeight:(double)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updadteAggregationTableViewAnnotation:(id)arg1;
- (void)dismissView;
- (void)removeAnnotationCrowdNo:(id)arg1;
- (void)appendAnnotations:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tableHeight:(double)arg2 clickCellBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
