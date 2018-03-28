//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTAssetViewColumnDelegate-Protocol.h"
#import "TTImagePickerControllerDelegate-Protocol.h"
#import "TTImagePreviewViewControllerDelegate-Protocol.h"

@class ALAssetsLibrary, NSMutableArray, NSString, UIButton, UIView;
@protocol WDAddMultiImagesViewDelegate;

@interface WDAddMultiImagesView : SSThemedView <TTImagePickerControllerDelegate, TTAssetViewColumnDelegate, TTImagePreviewViewControllerDelegate>
{
    double _imageSize;
    id <WDAddMultiImagesViewDelegate> _delegate;
    long long _selectionLimit;
    NSMutableArray *_selectedImages;
    NSMutableArray *_selectedThumbImages;
    UIButton *_addImagesButton;
    CDUnknownBlockType _shouldAddPictureHandle;
    NSMutableArray *_selectedImageViews;
    ALAssetsLibrary *_assetsLibrary;
    UIView *_disableInteractionView;
    UIView *_currentPreviewMaskView;
}

+ (id)imagesWithImageModels:(id)arg1;
@property(retain, nonatomic) UIView *currentPreviewMaskView; // @synthesize currentPreviewMaskView=_currentPreviewMaskView;
@property(retain, nonatomic) UIView *disableInteractionView; // @synthesize disableInteractionView=_disableInteractionView;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(retain, nonatomic) NSMutableArray *selectedImageViews; // @synthesize selectedImageViews=_selectedImageViews;
@property(copy, nonatomic) CDUnknownBlockType shouldAddPictureHandle; // @synthesize shouldAddPictureHandle=_shouldAddPictureHandle;
@property(retain, nonatomic) UIButton *addImagesButton; // @synthesize addImagesButton=_addImagesButton;
@property(retain, nonatomic) NSMutableArray *selectedThumbImages; // @synthesize selectedThumbImages=_selectedThumbImages;
@property(retain, nonatomic) NSMutableArray *selectedImages; // @synthesize selectedImages=_selectedImages;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(nonatomic) __weak id <WDAddMultiImagesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ttImagePreviewViewControllerSelectChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerScrollChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerDidDismiss:(id)arg1;
- (void)DidTapTTAssetViewColumn:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)ttImagePickerControllerDidCancel:(id)arg1;
- (void)ttimagePickerController:(id)arg1 didFinishTakePhoto:(id)arg2 selectedAssets:(id)arg3 withInfo:(id)arg4;
- (void)ttimagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3;
- (id)getImageFromPHAsset:(id)arg1;
- (void)addImagesButtonClicked:(id)arg1;
- (void)removeAssetViewColumn:(id)arg1;
- (void)appendAssetViewColumnByImage:(id)arg1;
- (void)appendSelectedImage:(id)arg1;
- (void)appendSelectedAsset:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)stopObserving;
- (void)layout;
- (void)appendImages:(id)arg1;
- (void)changeHeight:(double)arg1 notiy:(_Bool)arg2;
- (id)imageViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
