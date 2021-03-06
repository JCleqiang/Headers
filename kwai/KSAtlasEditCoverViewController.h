//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSChartletBottomDetailViewDelegate-Protocol.h"
#import "KSMediaEditActivity-Protocol.h"
#import "KSPictureCoverSliderDataSource-Protocol.h"

@class KSAtlasEditCoverViewModel, KSChartletBottomDetailView, KSMediaEditActivityController, KSPicturesCoverSlider, NSString, UIButton;

@interface KSAtlasEditCoverViewController : UIViewController <KSPictureCoverSliderDataSource, KSChartletBottomDetailViewDelegate, KSMediaEditActivity>
{
    CDUnknownBlockType _onChangeCoverImage;
    CDUnknownBlockType _splicerButtonContainerView;
    CDUnknownBlockType _layoutForSplicerButton;
    CDUnknownBlockType _onSelectChartItem;
    KSAtlasEditCoverViewModel *_viewModel;
    struct KSPicturesCoverSlider *_slider;
    struct KSChartletBottomDetailView *_chartletBar;
    UIButton *_splicerSwitchButton;
    KSMediaEditActivityController *_activityController;
}

@property(nonatomic) __weak KSMediaEditActivityController *activityController; // @synthesize activityController=_activityController;
@property(retain, nonatomic) UIButton *splicerSwitchButton; // @synthesize splicerSwitchButton=_splicerSwitchButton;
@property(retain, nonatomic) KSChartletBottomDetailView *chartletBar; // @synthesize chartletBar=_chartletBar;
@property(retain, nonatomic) KSPicturesCoverSlider *slider; // @synthesize slider=_slider;
@property(readonly, nonatomic) KSAtlasEditCoverViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType onSelectChartItem; // @synthesize onSelectChartItem=_onSelectChartItem;
@property(copy, nonatomic) CDUnknownBlockType layoutForSplicerButton; // @synthesize layoutForSplicerButton=_layoutForSplicerButton;
@property(copy, nonatomic) CDUnknownBlockType splicerButtonContainerView; // @synthesize splicerButtonContainerView=_splicerButtonContainerView;
@property(copy, nonatomic) CDUnknownBlockType onChangeCoverImage; // @synthesize onChangeCoverImage=_onChangeCoverImage;
- (void).cxx_destruct;
- (void)activityWillShow;
- (void)activityDidFinish;
- (void)activityDidCancel;
- (double)activityHeight;
- (void)activityDidAddedToController:(id)arg1;
- (unsigned long long)customIndex;
- (void)clearViewHidden;
- (void)flipViewHiddenAnimated:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;
- (unsigned long long)numberOfCoversInSlider:(id)arg1;
- (CDUnknownBlockType)slider:(id)arg1 requestForDisplayingImageCombinedWithRange:(struct _NSRange)arg2;
- (CDUnknownBlockType)slider:(id)arg1 requestForDisplayingImageAtIndex:(unsigned long long)arg2;
- (CDUnknownBlockType)slider:(id)arg1 requestForThumbnailImageAtIndex:(unsigned long long)arg2;
- (void)chartletBottomDetailView:(id)arg1 didSelectEraserItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didTapUndoItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didSelectChartletItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didTapMoreTextItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didTapCopyTextItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didSelectTextItem:(id)arg2;
- (void)chartletBottomDetailView:(id)arg1 didSelectPlainTextItem:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

