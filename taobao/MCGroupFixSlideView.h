//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MCGroupFixSlideViewProtocol-Protocol.h"

@class NSArray, NSMutableSet, NSString, TBIMPerformProxy;

@interface MCGroupFixSlideView : UIView <MCGroupFixSlideViewProtocol>
{
    _Bool _hasData;
    _Bool _needRunloop;
    NSMutableSet *_recycleSlideLabels;
    NSMutableSet *_showSlideLabels;
    unsigned long long _nextIndex;
    NSArray *_slideContents;
    TBIMPerformProxy *_performProxy;
}

@property(retain, nonatomic) TBIMPerformProxy *performProxy; // @synthesize performProxy=_performProxy;
@property(retain, nonatomic) NSArray *slideContents; // @synthesize slideContents=_slideContents;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(retain, nonatomic) NSMutableSet *showSlideLabels; // @synthesize showSlideLabels=_showSlideLabels;
@property(retain, nonatomic) NSMutableSet *recycleSlideLabels; // @synthesize recycleSlideLabels=_recycleSlideLabels;
@property(nonatomic) _Bool needRunloop; // @synthesize needRunloop=_needRunloop;
@property(nonatomic) _Bool hasData; // @synthesize hasData=_hasData;
- (void).cxx_destruct;
- (void)enSlideLabel:(id)arg1;
- (id)outSlideLabel;
- (void)nextSlide;
- (void)beginSlide;
- (void)updateSlideContents:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

