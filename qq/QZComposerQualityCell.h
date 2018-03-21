//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString, QZMoodComposeViewPresenter, UISwitch, UIViewController;

@interface QZComposerQualityCell : UITableViewCell <UIAlertViewDelegate>
{
    UISwitch *_qualitySwitch;
    QZMoodComposeViewPresenter *_viewModel;
    UIViewController *_hostViewController;
}

@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isQualitySwitchOn;
- (void)toggleChange:(id)arg1;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
