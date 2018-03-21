//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class FMScene, KSMagicFaceResource, NSArray, NSMutableArray, NSString, UICollectionView, UIImage;

@interface KSSwapFacePhotosViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isNewVersion;
    NSString *_pageURL;
    UICollectionView *_collectonView;
    FMScene *_scene;
    KSMagicFaceResource *_magicFaceResource;
    UIImage *_pickedImage;
    NSMutableArray *_cellItems;
    NSArray *_builtinFaceNames;
}

+ (void)clearUsedPhoto;
+ (id)faceDetetionQueue;
@property(nonatomic) _Bool isNewVersion; // @synthesize isNewVersion=_isNewVersion;
@property(nonatomic) __weak NSArray *builtinFaceNames; // @synthesize builtinFaceNames=_builtinFaceNames;
@property(retain, nonatomic) NSMutableArray *cellItems; // @synthesize cellItems=_cellItems;
@property(retain, nonatomic) UIImage *pickedImage; // @synthesize pickedImage=_pickedImage;
@property(retain, nonatomic) KSMagicFaceResource *magicFaceResource; // @synthesize magicFaceResource=_magicFaceResource;
@property(retain, nonatomic) FMScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UICollectionView *collectonView; // @synthesize collectonView=_collectonView;
@property(retain, nonatomic) NSString *pageURL; // @synthesize pageURL=_pageURL;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)updateSceneWithImage:(id)arg1 detectedFacesBlock:(CDUnknownBlockType)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)setupCellItems;
- (void)viewDidLoad;
- (id)initWithScene:(id)arg1 magicFaceResource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
