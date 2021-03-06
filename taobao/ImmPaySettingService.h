//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ImmPayEventHandler, ImmPaySetChannel, NSArray, NSMutableDictionary, NSString;

@interface ImmPaySettingService : NSObject
{
    _Bool _autoChannel;
    _Bool _isNeedFetchChannel;
    _Bool _jfbSwitchOn;
    ImmPayEventHandler *_eventhandler;
    NSArray *_channelArray;
    NSMutableDictionary *_originalData;
    NSString *_exitAct;
    ImmPaySetChannel *_channelVC;
}

@property(retain, nonatomic) ImmPaySetChannel *channelVC; // @synthesize channelVC=_channelVC;
@property(retain, nonatomic) NSString *exitAct; // @synthesize exitAct=_exitAct;
@property(retain, nonatomic) NSMutableDictionary *originalData; // @synthesize originalData=_originalData;
@property(nonatomic) _Bool jfbSwitchOn; // @synthesize jfbSwitchOn=_jfbSwitchOn;
@property(retain, nonatomic) NSArray *channelArray; // @synthesize channelArray=_channelArray;
@property(nonatomic) _Bool isNeedFetchChannel; // @synthesize isNeedFetchChannel=_isNeedFetchChannel;
@property(nonatomic) _Bool autoChannel; // @synthesize autoChannel=_autoChannel;
@property(nonatomic) __weak ImmPayEventHandler *eventhandler; // @synthesize eventhandler=_eventhandler;
- (void).cxx_destruct;
- (void)trackPage:(id)arg1;
- (id)viewHandler;
- (void)notifyPayChannelOrderChange;
- (_Bool)uploadSettingIfNeed:(CDUnknownBlockType)arg1;
- (id)checkChannelDiff;
- (void)updateSetting:(id)arg1;
- (void)showPaySettingWithAction:(id)arg1;
- (void)dealloc;
- (id)initWithEventhandler:(id)arg1;

@end

