//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQAIOAnimationBizAgent, QQAIOBannerTipsBizAgent, QQAIOFaceBizAgent, QQAIOFastSendImageBizAgent, QQAIOForwardBizAgent, QQAIOMultiActionBizAgent, QQAIOPokeBizAgent, QQAIOThirdAppShareBizAgent, QQBaseChatViewController;

@interface QQAIOBizAgentManager : NSObject
{
    QQBaseChatViewController *_chatViewController;
    QQAIOBannerTipsBizAgent *_bannerTipsBizAgent;
    QQAIOFaceBizAgent *_faceBizAgent;
    QQAIOForwardBizAgent *_forwardBizAgent;
    QQAIOMultiActionBizAgent *_multiActionBizAgent;
    QQAIOFastSendImageBizAgent *_fastSendImageBizAgent;
    QQAIOThirdAppShareBizAgent *_appShareBizAgent;
    QQAIOPokeBizAgent *_pokeBizAgent;
    QQAIOAnimationBizAgent *_animationBizAgent;
}

@property(retain, nonatomic) QQAIOAnimationBizAgent *animationBizAgent; // @synthesize animationBizAgent=_animationBizAgent;
@property(retain, nonatomic) QQAIOPokeBizAgent *pokeBizAgent; // @synthesize pokeBizAgent=_pokeBizAgent;
@property(retain, nonatomic) QQAIOThirdAppShareBizAgent *appShareBizAgent; // @synthesize appShareBizAgent=_appShareBizAgent;
@property(retain, nonatomic) QQAIOFastSendImageBizAgent *fastSendImageBizAgent; // @synthesize fastSendImageBizAgent=_fastSendImageBizAgent;
@property(retain, nonatomic) QQAIOMultiActionBizAgent *multiActionBizAgent; // @synthesize multiActionBizAgent=_multiActionBizAgent;
@property(retain, nonatomic) QQAIOForwardBizAgent *forwardBizAgent; // @synthesize forwardBizAgent=_forwardBizAgent;
@property(retain, nonatomic) QQAIOFaceBizAgent *faceBizAgent; // @synthesize faceBizAgent=_faceBizAgent;
@property(retain, nonatomic) QQAIOBannerTipsBizAgent *bannerTipsBizAgent; // @synthesize bannerTipsBizAgent=_bannerTipsBizAgent;
@property(nonatomic) __weak QQBaseChatViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
- (void).cxx_destruct;
- (id)initWithChatViewController:(id)arg1;

@end

