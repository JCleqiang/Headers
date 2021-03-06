//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEAwemeShareViewExtension-Protocol.h"

@class AWEAwemeShareViewController, AWEButton, NSString, UIImageView, UILabel;

@interface AWEAwemeShareViewExtension_Private : NSObject <AWEAwemeShareViewExtension>
{
    AWEAwemeShareViewController *_shareController;
    AWEButton *_videoPrivacySettingButton;
    UILabel *_videoPrivacyLabel;
    UIImageView *_videoPrivacyImageView;
}

+ (id)instanceWithController:(id)arg1;
@property(retain, nonatomic) UIImageView *videoPrivacyImageView; // @synthesize videoPrivacyImageView=_videoPrivacyImageView;
@property(retain, nonatomic) UILabel *videoPrivacyLabel; // @synthesize videoPrivacyLabel=_videoPrivacyLabel;
@property(retain, nonatomic) AWEButton *videoPrivacySettingButton; // @synthesize videoPrivacySettingButton=_videoPrivacySettingButton;
@property(nonatomic) __weak AWEAwemeShareViewController *shareController; // @synthesize shareController=_shareController;
- (void).cxx_destruct;
- (void)_onVideoPrivacyButtonClicked:(id)arg1;
- (void)updateVideoPrivacy;
- (_Bool)shouldCaptureTapGesture:(id)arg1;
- (void)setAwemeModel:(id)arg1;
- (_Bool)isValid;
- (double)height;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

