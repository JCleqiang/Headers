//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAwemeDetailBaseViewController.h"

#import "AWECustomTransitionDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWEFeedTransition, NSString, UIView;

@interface AWEAwemeDetailViewController : AWEAwemeDetailBaseViewController <BTDRouterViewControllerProtocol, AWECustomTransitionDelegate>
{
    AWEFeedTransition *_transition;
    _Bool _isAppear;
    _Bool _isLoading;
    _Bool _needPlayAfterViewDidAppear;
    NSString *_awemeID;
    UIView *_returnView;
}

+ (void)load;
@property(nonatomic) _Bool needPlayAfterViewDidAppear; // @synthesize needPlayAfterViewDidAppear=_needPlayAfterViewDidAppear;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(retain, nonatomic) UIView *returnView; // @synthesize returnView=_returnView;
@property(retain, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
- (void).cxx_destruct;
- (id)privateAccountView;
- (void)didFinishGestureTransition;
- (void)didStartGestureTransition;
- (void)didFinishGestureTransition:(id)arg1;
- (void)didChangeGestureTransition:(id)arg1;
- (void)didStartGestureTransition:(id)arg1;
- (_Bool)shouldStartGestureTransition:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)_onAwemeDeleteNotification:(id)arg1;
- (void)removeNotificationsObserversAtCurrentVC;
- (void)addNotificationsObserversAtCurrentVC;
- (void)doActionIfNotValid;
- (void)_loadAndPlay:(_Bool)arg1;
- (void)playIfActive;
- (_Bool)isActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

