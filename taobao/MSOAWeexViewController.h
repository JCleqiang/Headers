//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSError, NSString, TBModelStatusHandler, UIView, WXSDKInstance;

@interface MSOAWeexViewController : UIViewController
{
    CDUnknownBlockType _disappearHandler;
    WXSDKInstance *_wxInstance;
    WXSDKInstance *_tempWxInstance;
    UIView *_weexView;
    NSError *_commonError;
    NSString *_url;
    NSDictionary *_data;
    TBModelStatusHandler *_statusHandler;
}

+ (void)createWeexControllerWithUrl:(id)arg1 data:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSError *commonError; // @synthesize commonError=_commonError;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *tempWxInstance; // @synthesize tempWxInstance=_tempWxInstance;
@property(retain, nonatomic) WXSDKInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
@property(copy, nonatomic) CDUnknownBlockType disappearHandler; // @synthesize disappearHandler=_disappearHandler;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)handlerError:(id)arg1 forView:(id)arg2 frame:(struct CGRect)arg3;
- (void)inContainerPopUrl:(id)arg1;
- (void)inContainerPushUrl:(id)arg1;
- (void)reloadData;
- (void)loadWeexView;
- (void)registModule;
- (void)dealloc;
- (id)creatTempWxInstanceWithTransferType:(unsigned long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1 data:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;

@end
