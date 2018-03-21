//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, RNSTubView, WXSDKInstance;

@interface TBRecmdContainerComponent : WXComponent <UIScrollViewDelegate>
{
    RNSTubView *_containerView;
    WXSDKInstance *_containerInstance;
}

@property(nonatomic) __weak WXSDKInstance *containerInstance; // @synthesize containerInstance=_containerInstance;
@property(retain, nonatomic) RNSTubView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)layoutDidFinish;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
