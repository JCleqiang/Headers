//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, SKStoreProductViewController;
@protocol TTVPlayerTipRelatedViewDelegate;

@interface TTVPlayerTipRelatedView : UIView <SKStoreProductViewControllerDelegate>
{
    unsigned long long _viewType;
    id <TTVPlayerTipRelatedViewDelegate> _delegate;
    NSMutableArray *_entitys;
    SKStoreProductViewController *_skController;
}

@property(retain, nonatomic) SKStoreProductViewController *skController; // @synthesize skController=_skController;
@property(retain, nonatomic) NSMutableArray *entitys; // @synthesize entitys=_entitys;
@property(nonatomic) __weak id <TTVPlayerTipRelatedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)openDownloadUrl:(id)arg1;
- (void)pauseTimer;
- (void)startTimer;
- (void)setDataInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

