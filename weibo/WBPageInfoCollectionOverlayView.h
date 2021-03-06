//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageInfoMediaContentView.h"

@class WBStatus, WBVideoCollectionButton;

@interface WBPageInfoCollectionOverlayView : WBPageInfoMediaContentView
{
    WBVideoCollectionButton *_collectionButton;
    WBStatus *_currentStatus;
}

@property(retain, nonatomic) WBStatus *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) WBVideoCollectionButton *collectionButton; // @synthesize collectionButton=_collectionButton;
- (void).cxx_destruct;
- (_Bool)needShowTabbarHelper;
- (_Bool)needShowHelper;
- (_Bool)needShowCollection;
- (void)showTabbarHelperIfNeed;
- (void)showHelperIfNeed;
- (void)tableViewDidTrigerPullRefresh:(id)arg1;
- (void)updateDisplayWithStatus:(id)arg1 isCollectionAction:(_Bool)arg2;
- (void)collectionPressed:(id)arg1;
- (void)mediaPlayerViewDidAttach:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

