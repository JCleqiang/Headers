//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/ABUnknownPersonViewControllerDelegate-Protocol.h>
#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class ABPersonViewController, ABUnknownPersonViewController, NSString, UIActionSheet;

@interface QQJSBridgeQQMailPlugin : QQWebViewPluginQQBizBase <UIActionSheetDelegate, ABUnknownPersonViewControllerDelegate>
{
    ABPersonViewController *abPersonViewController;
    ABUnknownPersonViewController *abNewPersonViewController;
    UIActionSheet *sheet;
    NSString *phone;
    void *addressBook;
    struct __CFArray *results;
    void *recordTmp;
    void *recordRef;
    void *tmpMutableMultiPhones;
}

- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)AddOne;
- (void)SendOne;
- (void)CallOne;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleJsBridgeRequest_mail_showMenu:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

