//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIScrollView, UIView, WBImageToolBase;

@interface WBImageEditorViewController : WBViewController <UIScrollViewDelegate>
{
    UIView *defaultToolView;
    UIView *editingToolView;
    UIImage *_originalImage;
    UIView *_bgView;
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    UIImageView *_targetImageView;
    WBImageToolBase *_currentTool;
}

@property(retain, nonatomic) WBImageToolBase *currentTool; // @synthesize currentTool=_currentTool;
@property(retain, nonatomic) UIImageView *targetImageView; // @synthesize targetImageView=_targetImageView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)refreshImageView;
- (void)resetZoomScaleWithAnimated:(_Bool)arg1;
- (void)fixZoomScaleWithAnimated:(_Bool)arg1;
- (void)resetImageViewFrame;
- (void)swapToolBarWithEditting:(_Bool)arg1;
- (void)configDefaultToolbar;
- (void)editOKHandle:(id)arg1;
- (void)closeEditHandle:(id)arg1;
- (void)drawImageToolSelected:(id)arg1;
- (void)clipImageToolSelected:(id)arg1;
- (void)shareImagePressed;
- (void)backButtonPressed;
- (void)initImageScrollView;
- (id)initWithImage:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)uiCode;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

