//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/MQZoneLBSPOIViewController.h>

@class NSArray, UIButton;
@protocol QZPoiModifyViewControllerDelegate;

@interface QZPoiModifyViewController : MQZoneLBSPOIViewController
{
    NSArray *_poiArray;
    _Bool _showSearchBar;
    UIButton *_maskButton;
    id <QZPoiModifyViewControllerDelegate> _poiDelegate;
}

@property(nonatomic) __weak id <QZPoiModifyViewControllerDelegate> poiDelegate; // @synthesize poiDelegate=_poiDelegate;
- (void).cxx_destruct;
- (_Bool)onRefresh;

@end

