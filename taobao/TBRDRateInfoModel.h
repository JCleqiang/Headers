//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSDictionary, NSString, TBRDAppendedFeedModel, TBRDRateShareModel;

@interface TBRDRateInfoModel : TBJSONModel
{
    _Bool _hasDetail;
    _Bool _allowComment;
    _Bool _goldUser;
    NSString *_id;
    NSString *_auctionNumId;
    NSString *_auctionTitle;
    NSString *_userId;
    NSString *_userNick;
    NSString *_userStar;
    NSString *_userStarPic;
    NSString *_headPicUrl;
    NSString *_userProfile;
    NSString *_annoy;
    NSString *_rateType;
    NSString *_feedback;
    NSString *_feedbackDate;
    NSString *_reply;
    NSDictionary *_skuMap;
    TBRDAppendedFeedModel *_appendedFeed;
    NSArray *_feedPicPathList;
    NSArray *_feedPicList;
    NSString *_userMark;
    TBRDRateShareModel *_share;
    NSString *_personalizedTag;
    NSString *_leifengxia;
    NSString *_trialEvaluation;
    NSDictionary *_interactInfo;
    NSArray *_structureTextList;
    NSArray *_impressionWords;
    NSString *_userIndexURL;
    NSDictionary *_video;
}

@property(retain, nonatomic) NSDictionary *video; // @synthesize video=_video;
@property(nonatomic) _Bool goldUser; // @synthesize goldUser=_goldUser;
@property(copy, nonatomic) NSString *userIndexURL; // @synthesize userIndexURL=_userIndexURL;
@property(retain, nonatomic) NSArray *impressionWords; // @synthesize impressionWords=_impressionWords;
@property(retain, nonatomic) NSArray *structureTextList; // @synthesize structureTextList=_structureTextList;
@property(retain, nonatomic) NSDictionary *interactInfo; // @synthesize interactInfo=_interactInfo;
@property(copy, nonatomic) NSString *trialEvaluation; // @synthesize trialEvaluation=_trialEvaluation;
@property(copy, nonatomic) NSString *leifengxia; // @synthesize leifengxia=_leifengxia;
@property(copy, nonatomic) NSString *personalizedTag; // @synthesize personalizedTag=_personalizedTag;
@property(retain, nonatomic) TBRDRateShareModel *share; // @synthesize share=_share;
@property(copy, nonatomic) NSString *userMark; // @synthesize userMark=_userMark;
@property(nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(nonatomic) _Bool hasDetail; // @synthesize hasDetail=_hasDetail;
@property(retain, nonatomic) NSArray *feedPicList; // @synthesize feedPicList=_feedPicList;
@property(retain, nonatomic) NSArray *feedPicPathList; // @synthesize feedPicPathList=_feedPicPathList;
@property(retain, nonatomic) TBRDAppendedFeedModel *appendedFeed; // @synthesize appendedFeed=_appendedFeed;
@property(retain, nonatomic) NSDictionary *skuMap; // @synthesize skuMap=_skuMap;
@property(copy, nonatomic) NSString *reply; // @synthesize reply=_reply;
@property(copy, nonatomic) NSString *feedbackDate; // @synthesize feedbackDate=_feedbackDate;
@property(copy, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSString *rateType; // @synthesize rateType=_rateType;
@property(copy, nonatomic) NSString *annoy; // @synthesize annoy=_annoy;
@property(copy, nonatomic) NSString *userProfile; // @synthesize userProfile=_userProfile;
@property(copy, nonatomic) NSString *headPicUrl; // @synthesize headPicUrl=_headPicUrl;
@property(copy, nonatomic) NSString *userStarPic; // @synthesize userStarPic=_userStarPic;
@property(copy, nonatomic) NSString *userStar; // @synthesize userStar=_userStar;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *auctionTitle; // @synthesize auctionTitle=_auctionTitle;
@property(copy, nonatomic) NSString *auctionNumId; // @synthesize auctionNumId=_auctionNumId;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

