//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

#import "TTAssetViewColumnDelegate-Protocol.h"
#import "TTImagePickerControllerDelegate-Protocol.h"
#import "TTPhotoScrollViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIView;

@interface AddMultiImagesView : SSViewBase <TTImagePickerControllerDelegate, TTAssetViewColumnDelegate, TTPhotoScrollViewControllerDelegate>
{
    double _imageSize;
    long long _selectionLimit;
    NSMutableArray *_selectedAssetsImages;
    NSMutableArray *_selectedImageViews;
    UIButton *_addImagesButton;
    UIView *_disableInteractionView;
    NSString *_eventName;
}

@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) UIView *disableInteractionView; // @synthesize disableInteractionView=_disableInteractionView;
@property(retain, nonatomic) UIButton *addImagesButton; // @synthesize addImagesButton=_addImagesButton;
@property(retain, nonatomic) NSMutableArray *selectedImageViews; // @synthesize selectedImageViews=_selectedImageViews;
@property(retain, nonatomic) NSMutableArray *selectedAssetsImages; // @synthesize selectedAssetsImages=_selectedAssetsImages;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
- (void).cxx_destruct;
- (void)TTPhotoScrollViewControllerDidFinishSelect:(id)arg1;
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
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
