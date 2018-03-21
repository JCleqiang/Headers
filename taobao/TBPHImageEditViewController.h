//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBPHLargeImageBaseViewController.h"

#import "TBPHClippingPanelDelegate-Protocol.h"

@class NSMutableArray, NSString, PHAsset, TBPHClippingPanel, TBPHEditBar, TBPHEditView, UIImage, UIImageView, UIView;
@protocol TBPHFilterProtocol;

@interface TBPHImageEditViewController : TBPHLargeImageBaseViewController <TBPHClippingPanelDelegate>
{
    _Bool _isPresent;
    _Bool _isAddType;
    _Bool _isCrop;
    _Bool _isDownClicked;
    _Bool _pasterDataIsFinished;
    TBPHClippingPanel *_clipPanel;
    CDUnknownBlockType _dismissCallback;
    CDUnknownBlockType _doneCallback;
    NSString *_imagePath;
    NSString *_cutOrignPath;
    NSString *_orignPath;
    UIImage *_image;
    PHAsset *_asset;
    TBPHEditBar *_editBar;
    TBPHEditView *_editView;
    UIView *_currentView;
    UIImage *_tempImage;
    UIImage *_tempOrignImage;
    UIImage *_tempCropScreenImage;
    NSMutableArray *_pasterItems;
    NSMutableArray *_paths;
    NSMutableArray *_mosaicPaths;
    id <TBPHFilterProtocol> _filterProtocol;
    UIImageView *_mosaicImageView;
    long long _stateBarStyle;
    UIImage *_orignImage;
    struct CGRect _tempRect;
}

@property(retain, nonatomic) UIImage *orignImage; // @synthesize orignImage=_orignImage;
@property(nonatomic) long long stateBarStyle; // @synthesize stateBarStyle=_stateBarStyle;
@property(retain, nonatomic) UIImageView *mosaicImageView; // @synthesize mosaicImageView=_mosaicImageView;
@property(nonatomic) _Bool pasterDataIsFinished; // @synthesize pasterDataIsFinished=_pasterDataIsFinished;
@property(retain, nonatomic) id <TBPHFilterProtocol> filterProtocol; // @synthesize filterProtocol=_filterProtocol;
@property(retain, nonatomic) NSMutableArray *mosaicPaths; // @synthesize mosaicPaths=_mosaicPaths;
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSMutableArray *pasterItems; // @synthesize pasterItems=_pasterItems;
@property(nonatomic) _Bool isDownClicked; // @synthesize isDownClicked=_isDownClicked;
@property(retain, nonatomic) UIImage *tempCropScreenImage; // @synthesize tempCropScreenImage=_tempCropScreenImage;
@property(retain, nonatomic) UIImage *tempOrignImage; // @synthesize tempOrignImage=_tempOrignImage;
@property(retain, nonatomic) UIImage *tempImage; // @synthesize tempImage=_tempImage;
@property(nonatomic) struct CGRect tempRect; // @synthesize tempRect=_tempRect;
@property(nonatomic) _Bool isCrop; // @synthesize isCrop=_isCrop;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) TBPHEditView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) TBPHEditBar *editBar; // @synthesize editBar=_editBar;
@property(nonatomic) _Bool isAddType; // @synthesize isAddType=_isAddType;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *orignPath; // @synthesize orignPath=_orignPath;
@property(copy, nonatomic) NSString *cutOrignPath; // @synthesize cutOrignPath=_cutOrignPath;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) CDUnknownBlockType doneCallback; // @synthesize doneCallback=_doneCallback;
@property(copy, nonatomic) CDUnknownBlockType dismissCallback; // @synthesize dismissCallback=_dismissCallback;
- (void)setClipPanel:(id)arg1;
- (id)clipPanel;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (void)downButtonClicked;
- (void)cancelButtonClicked;
- (void)backgroundViewDidClicked;
- (void)tabBarDidClickedWithSender:(id)arg1 type:(unsigned long long)arg2;
- (void)save:(id)arg1 image:(id)arg2;
- (void)addCrop;
- (void)quitCropState;
- (struct CGRect)cropRatioRect;
- (void)updateImageViewWithImage:(id)arg1 animated:(_Bool)arg2 clipAnimation:(_Bool)arg3 animationFinished:(CDUnknownBlockType)arg4;
- (void)tabBarItemDidClicked:(id)arg1 selctedWithCallback:(CDUnknownBlockType)arg2;
- (void)addFilter;
- (void)addDraw;
- (void)addMosaic;
- (void)addPaster;
- (void)loadPasterDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)configImage:(id)arg1;
- (void)mosaicImage:(id)arg1;
- (void)loadData;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showInView:(id)arg1;
- (void)configData:(id)arg1 paths:(id)arg2 mosaicPaths:(id)arg3 filter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
