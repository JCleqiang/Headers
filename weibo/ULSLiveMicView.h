//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, ULSLiveMicUser, ULSLiveQuestionAvatarView;
@protocol ULSLiveMicViewDelegate;

@interface ULSLiveMicView : UIView
{
    id <ULSLiveMicViewDelegate> _delegate;
    ULSLiveQuestionAvatarView *_anchorAvatar;
    ULSLiveQuestionAvatarView *_micerAvatar;
    UILabel *_anchorNickname;
    UILabel *_micerNickname;
    UIButton *_closeButton;
    ULSLiveMicUser *_micUser;
    UILabel *_timeLabel;
    long long _timeCount;
    UILabel *_connectingLabel;
}

@property(retain, nonatomic) UILabel *connectingLabel; // @synthesize connectingLabel=_connectingLabel;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) ULSLiveMicUser *micUser; // @synthesize micUser=_micUser;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *micerNickname; // @synthesize micerNickname=_micerNickname;
@property(retain, nonatomic) UILabel *anchorNickname; // @synthesize anchorNickname=_anchorNickname;
@property(retain, nonatomic) ULSLiveQuestionAvatarView *micerAvatar; // @synthesize micerAvatar=_micerAvatar;
@property(retain, nonatomic) ULSLiveQuestionAvatarView *anchorAvatar; // @synthesize anchorAvatar=_anchorAvatar;
@property(nonatomic) id <ULSLiveMicViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopSpeaking;
- (void)startSpeaking;
- (void)tapgesture:(id)arg1;
- (id)getAttributedStringWithString:(id)arg1 image:(id)arg2;
- (void)setupDataWithUser:(id)arg1 anchor:(id)arg2 time:(long long)arg3;
- (void)closeButtonAction:(id)arg1;
- (void)setupTime;
- (id)initIsAnchor:(_Bool)arg1;

@end

