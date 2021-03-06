//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWEAwemeModel, NSString;

@interface AWEAwemePlayInteractionRouter : NSObject
{
    NSString *_referString;
    AWEAwemeModel *_model;
}

@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;
- (void)enterUserDetailWithEnterMethod:(id)arg1;
- (void)enterMusicDetail;
- (void)onLearnMoreViewClicked:(id)arg1;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdDescriptionClicked:(id)arg1;
- (void)onPoiLabelClicked:(id)arg1;
- (void)onChallengeLabelClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onLiveUserAvatarViewClicked:(id)arg1 exitOldRoom:(_Bool)arg2;
- (void)onUserAvatarViewClicked:(id)arg1;
- (void)reset;

@end

