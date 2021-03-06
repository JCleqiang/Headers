//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "MBKDataProviderDelegate-Protocol.h"
#import "MBKMyBikeButtonPanelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MBKContinueManager, MBKMyAdoptionManager, MBKMyAdoptionModel, MBKMyBikeButtonPanel, MBKMyBikeHeaderMapView, MBKStopManager, MBKWithdrawManager, NSString, UICollectionView;

@interface MBKMyBikeViewController : MBKBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, MBKDataProviderDelegate, MBKMyBikeButtonPanelDelegate>
{
    double detailLabelHeight;
    UICollectionView *_collectionView;
    MBKMyBikeButtonPanel *_buttonPanel;
    MBKMyBikeHeaderMapView *_headerMapView;
    MBKMyAdoptionManager *_myAdoptionManager;
    MBKMyAdoptionModel *_myAdoptionModel;
    MBKWithdrawManager *_withDrawManager;
    MBKContinueManager *_continueManager;
    MBKStopManager *_stopManager;
}

@property(retain, nonatomic) MBKStopManager *stopManager; // @synthesize stopManager=_stopManager;
@property(retain, nonatomic) MBKContinueManager *continueManager; // @synthesize continueManager=_continueManager;
@property(retain, nonatomic) MBKWithdrawManager *withDrawManager; // @synthesize withDrawManager=_withDrawManager;
@property(retain, nonatomic) MBKMyAdoptionModel *myAdoptionModel; // @synthesize myAdoptionModel=_myAdoptionModel;
@property(retain, nonatomic) MBKMyAdoptionManager *myAdoptionManager; // @synthesize myAdoptionManager=_myAdoptionManager;
@property(retain, nonatomic) MBKMyBikeHeaderMapView *headerMapView; // @synthesize headerMapView=_headerMapView;
@property(retain, nonatomic) MBKMyBikeButtonPanel *buttonPanel; // @synthesize buttonPanel=_buttonPanel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)onTapExchangeButton:(id)arg1;
- (void)onTapShareButton:(id)arg1;
- (void)requestFailured:(id)arg1 error:(id)arg2;
- (void)requestSuccessed:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)getMonthString:(id)arg1;
- (id)attributedStringWithNumber:(id)arg1 unit:(id)arg2;
- (double)getLabelHeightWithString:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
- (id)getLableString;
- (void)fitLabelSize:(id)arg1 font:(id)arg2;
- (_Bool)isSameDay:(id)arg1 date2:(id)arg2;
- (_Bool)isCoordinate00:(struct CLLocationCoordinate2D)arg1;
- (void)updateExchangeButtonState;
- (id)shareDataForUrl;
- (void)shareWebpageToPlatformType:(long long)arg1;
- (void)shareSelectWithType:(long long)arg1;
- (_Bool)isNullOrEmpty:(id)arg1;
- (id)getSubViews:(id)arg1 withTag:(long long)arg2;
- (void)hideSubViews:(id)arg1 withTag:(long long)arg2;
- (void)setupModel;
- (void)addNavigationBar;
- (void)setupView;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

