//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveBroadCasterAccountInfo;

@interface TBLiveCPLiveMenuModel : TBJSONModel
{
    NSString *_title;
    NSString *_jumpUrl;
    NSString *_liveId;
    TBLiveBroadCasterAccountInfo *_accountDO;
}

@property(retain, nonatomic) TBLiveBroadCasterAccountInfo *accountDO; // @synthesize accountDO=_accountDO;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
