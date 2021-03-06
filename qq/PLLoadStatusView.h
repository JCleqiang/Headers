//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/PLEmptyDataViewDelegate-Protocol.h>
#import <QQMainProject/PLLoadStatusDelegate-Protocol.h>

@class NSString, PLCommonLoadingView, PLEmptyDataView, PLLoadFailedView, UIImage;
@protocol PLLoadStatusDelegate;

@interface PLLoadStatusView : UIView <PLLoadStatusDelegate, PLEmptyDataViewDelegate>
{
    _Bool _subviewsVerticalAlignCenter;
    _Bool _haveAddKVOObserver;
    int _loadStatus;
    id <PLLoadStatusDelegate> _delegate;
    PLCommonLoadingView *_loadingView;
    PLLoadFailedView *_loadFailedView;
    PLEmptyDataView *_emptyDataView;
    UIImage *_dataEmptyImage;
    UIImage *_loadFailedImge;
    NSString *_dataEmptyWording;
    NSString *_dataEmptyButtonWording;
    NSString *_loadFailedWording;
    double _offsetY;
}

@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(nonatomic) _Bool haveAddKVOObserver; // @synthesize haveAddKVOObserver=_haveAddKVOObserver;
@property(copy, nonatomic) NSString *loadFailedWording; // @synthesize loadFailedWording=_loadFailedWording;
@property(copy, nonatomic) NSString *dataEmptyButtonWording; // @synthesize dataEmptyButtonWording=_dataEmptyButtonWording;
@property(copy, nonatomic) NSString *dataEmptyWording; // @synthesize dataEmptyWording=_dataEmptyWording;
@property(retain, nonatomic) UIImage *loadFailedImge; // @synthesize loadFailedImge=_loadFailedImge;
@property(retain, nonatomic) UIImage *dataEmptyImage; // @synthesize dataEmptyImage=_dataEmptyImage;
@property(retain, nonatomic) PLEmptyDataView *emptyDataView; // @synthesize emptyDataView=_emptyDataView;
@property(retain, nonatomic) PLLoadFailedView *loadFailedView; // @synthesize loadFailedView=_loadFailedView;
@property(retain, nonatomic) PLCommonLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool subviewsVerticalAlignCenter; // @synthesize subviewsVerticalAlignCenter=_subviewsVerticalAlignCenter;
@property(nonatomic) int loadStatus; // @synthesize loadStatus=_loadStatus;
@property(nonatomic) __weak id <PLLoadStatusDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

