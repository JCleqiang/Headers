//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MOPPortalResp : NSObject
{
    _Bool _success;
    _Bool _hasNextPage;
    NSString *_resultCode;
    NSString *_resultView;
    NSString *_desc;
    NSString *_msg;
    NSString *_followAction;
    NSString *_securityId;
    NSString *_verifyId;
    NSString *_verifyUrl;
    NSString *_succTitle;
    NSString *_succSubtitle;
    NSDictionary *_extInfos;
    NSArray *_portalCategoryList;
    NSArray *_portalChannelList;
    NSArray *_portalTopicList;
    NSArray *_allCityInfoList;
    NSArray *_hotCityInfoList;
}

+ (Class)hotCityInfoListElementClass;
+ (Class)allCityInfoListElementClass;
+ (Class)portalTopicListElementClass;
+ (Class)portalChannelListElementClass;
+ (Class)portalCategoryListElementClass;
+ (Class)extInfosElementClass;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(retain, nonatomic) NSArray *hotCityInfoList; // @synthesize hotCityInfoList=_hotCityInfoList;
@property(retain, nonatomic) NSArray *allCityInfoList; // @synthesize allCityInfoList=_allCityInfoList;
@property(retain, nonatomic) NSArray *portalTopicList; // @synthesize portalTopicList=_portalTopicList;
@property(retain, nonatomic) NSArray *portalChannelList; // @synthesize portalChannelList=_portalChannelList;
@property(retain, nonatomic) NSArray *portalCategoryList; // @synthesize portalCategoryList=_portalCategoryList;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *succSubtitle; // @synthesize succSubtitle=_succSubtitle;
@property(retain, nonatomic) NSString *succTitle; // @synthesize succTitle=_succTitle;
@property(retain, nonatomic) NSString *verifyUrl; // @synthesize verifyUrl=_verifyUrl;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) NSString *followAction; // @synthesize followAction=_followAction;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
