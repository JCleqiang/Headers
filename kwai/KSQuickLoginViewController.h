//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSNewBaseLoginViewController.h"

@class KSExtensionButton, KSQuickLoginView;

@interface KSQuickLoginViewController : KSNewBaseLoginViewController
{
    KSQuickLoginView *_quickLoginView;
    KSExtensionButton *_closeButton;
}

+ (id)entryViewControllerWithIsDialog:(_Bool)arg1;
@property(retain, nonatomic) KSExtensionButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) KSQuickLoginView *quickLoginView; // @synthesize quickLoginView=_quickLoginView;
- (void).cxx_destruct;
- (void)setupClickMetaDataForQuickLoginView:(id)arg1;
- (void)didClickClose:(id)arg1;
- (void)showLoginPrompt:(id)arg1;
- (_Bool)needHandleKeyboardNotification;
- (struct CGSize)closeBtnSize;
- (id)closeBtnImageName;
- (BOOL)leftBarButtonType;
- (void)showFromViewController:(id)arg1;

@end
