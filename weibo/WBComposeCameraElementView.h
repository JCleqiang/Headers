//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeImagesElementView.h"

@class UIButton, UIImageView, UILabel;
@protocol WBComposeCameraElementViewDelegate;

@interface WBComposeCameraElementView : WBComposeImagesElementView
{
    UIButton *_emptyButton;
    UIImageView *_cameraImageView;
    UILabel *_label;
    id <WBComposeCameraElementViewDelegate> _delegate;
    UILabel *_cornerLabel;
    UIImageView *_cornerImageView;
}

@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UILabel *cornerLabel; // @synthesize cornerLabel=_cornerLabel;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WBComposeCameraElementViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)emptyButtonPressed:(id)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (_Bool)hasAttachment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

