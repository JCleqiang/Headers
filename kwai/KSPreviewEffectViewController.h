//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ICGVideoTrimmerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class BFTask, KSAudioSliderBar, KSFilterEffect, KSFilterValueChangeViewController, KSMediaCoverPickViewController, KSTrimmerView, NSArray, NSObject, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;
@protocol KSMediaOperationContextConcreteProtocol, KSPreviewEffectViewControllerDelegate;

@interface KSPreviewEffectViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICGVideoTrimmerDelegate>
{
    long long _fps;
    _Bool _shouldSwitchToLastSelectedTab;
    int _currentSelectedTab;
    UIView *_playView;
    id <KSPreviewEffectViewControllerDelegate> _delegate;
    NSObject<KSMediaOperationContextConcreteProtocol> *_context;
    KSMediaCoverPickViewController *_coverPickViewController;
    unsigned long long _menuTypes;
    NSString *_pageURL;
    UICollectionView *_mainCollectioinView;
    UICollectionViewFlowLayout *_mainViewLayout;
    NSArray *_previewMainStageCellItems;
    unsigned long long _currentMainIndex;
    UICollectionView *_childCollectioinView;
    UICollectionViewFlowLayout *_childViewLayout;
    NSArray *_effects;
    KSAudioSliderBar *_audioSliderBar;
    NSString *_recordEffectKVOId;
    KSTrimmerView *_trimmerView;
    BFTask *_sliderOperationtask;
    KSFilterValueChangeViewController *_filterValueChangeViewController;
    id _filterEffectChangedObserver;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) id filterEffectChangedObserver; // @synthesize filterEffectChangedObserver=_filterEffectChangedObserver;
@property(retain, nonatomic) KSFilterValueChangeViewController *filterValueChangeViewController; // @synthesize filterValueChangeViewController=_filterValueChangeViewController;
@property(retain, nonatomic) BFTask *sliderOperationtask; // @synthesize sliderOperationtask=_sliderOperationtask;
@property(retain, nonatomic) KSTrimmerView *trimmerView; // @synthesize trimmerView=_trimmerView;
@property(retain, nonatomic) NSString *recordEffectKVOId; // @synthesize recordEffectKVOId=_recordEffectKVOId;
@property(retain, nonatomic) KSAudioSliderBar *audioSliderBar; // @synthesize audioSliderBar=_audioSliderBar;
@property(retain, nonatomic) NSArray *effects; // @synthesize effects=_effects;
@property(retain, nonatomic) UICollectionViewFlowLayout *childViewLayout; // @synthesize childViewLayout=_childViewLayout;
@property(retain, nonatomic) UICollectionView *childCollectioinView; // @synthesize childCollectioinView=_childCollectioinView;
@property(nonatomic) unsigned long long currentMainIndex; // @synthesize currentMainIndex=_currentMainIndex;
@property(retain, nonatomic) NSArray *previewMainStageCellItems; // @synthesize previewMainStageCellItems=_previewMainStageCellItems;
@property(retain, nonatomic) UICollectionViewFlowLayout *mainViewLayout; // @synthesize mainViewLayout=_mainViewLayout;
@property(retain, nonatomic) UICollectionView *mainCollectioinView; // @synthesize mainCollectioinView=_mainCollectioinView;
@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
@property(nonatomic) _Bool shouldSwitchToLastSelectedTab; // @synthesize shouldSwitchToLastSelectedTab=_shouldSwitchToLastSelectedTab;
@property(nonatomic) unsigned long long menuTypes; // @synthesize menuTypes=_menuTypes;
@property(retain, nonatomic) KSMediaCoverPickViewController *coverPickViewController; // @synthesize coverPickViewController=_coverPickViewController;
@property(nonatomic) __weak NSObject<KSMediaOperationContextConcreteProtocol> *context; // @synthesize context=_context;
@property(nonatomic) int currentSelectedTab; // @synthesize currentSelectedTab=_currentSelectedTab;
@property(nonatomic) __weak id <KSPreviewEffectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *playView; // @synthesize playView=_playView;
- (void).cxx_destruct;
- (void)scrollToActiveFilterEffectAnimated:(_Bool)arg1;
- (void)setSliderOperation:(int)arg1;
- (_Bool)shouldCreateOriginalSoundSlider;
- (id)customCoverTimestamp;
- (id)coverBannerText;
- (void)setupPreviewMainStageCellItems;
- (id)effectWithIndexPath:(id)arg1;
- (void)highlightMainStageWithMainStageCellItem:(id)arg1;
- (void)setSliderOperation:(int)arg1 animation:(CDUnknownBlockType)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)hiddenAllSlider;
- (void)showValueBarWithEffect:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)trimmerView:(id)arg1 didChangeStartTime:(double)arg2 endTime:(double)arg3;
- (void)setOnWithIndexPath:(id)arg1;
@property(readonly, nonatomic) KSFilterEffect *currentFilterEffect;
- (id)tabPreferenceKey;
- (id)renderedCoverImage;
- (void)viewDidLoad;
- (id)createCoverPickViewController;
- (_Bool)showTrimmerBtn;
- (void)dealloc;
- (id)initWithMediaEffectEditMenuTypes:(unsigned long long)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

