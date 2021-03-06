//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBSNSFeedCommentCommodityItem, TBTextLabel;

@interface TBSNSFeedCommentItem : TBJSONModel
{
    _Bool _isImageHadLoad;
    _Bool _isForMyReply;
    _Bool _isForPraise;
    _Bool _isPraised;
    int _createrContentType;
    int _parentContentType;
    int _admin;
    NSString *_content;
    unsigned long long _createrId;
    unsigned long long _commentId;
    unsigned long long _floor;
    NSString *_createrName;
    NSString *_createrPic;
    unsigned long long _commenterId;
    unsigned long long _time;
    unsigned long long _timestamp;
    NSString *_parentContent;
    NSString *_authorNick;
    unsigned long long _authorId;
    unsigned long long _parentId;
    unsigned long long _ownerId;
    unsigned long long _feedId;
    NSArray *_extSymbol;
    NSArray *_extSymbolArray;
    unsigned long long _type;
    NSArray *_parentExtSymbol;
    NSArray *_parentExtSymbolArray;
    unsigned long long _parentType;
    NSString *_detailUrl;
    NSString *_targetUrl;
    double _cellHeight;
    double _contentHeight;
    double _parentContentHeight;
    TBTextLabel *_contentSLabel;
    TBTextLabel *_parentContentSLabel;
    TBSNSFeedCommentCommodityItem *_commentCommodityItem;
    NSString *_imageName;
    TBSNSFeedCommentCommodityItem *_commentCommodityParentItem;
    NSString *_imageParentName;
    unsigned long long _targetType;
    unsigned long long _subType;
    unsigned long long _favourCount;
    struct CGSize _contentlabelSize;
    struct CGSize _parentContentlabelSize;
}

@property(nonatomic) unsigned long long favourCount; // @synthesize favourCount=_favourCount;
@property(nonatomic) _Bool isPraised; // @synthesize isPraised=_isPraised;
@property(nonatomic) int admin; // @synthesize admin=_admin;
@property(nonatomic) unsigned long long subType; // @synthesize subType=_subType;
@property(nonatomic) unsigned long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) int parentContentType; // @synthesize parentContentType=_parentContentType;
@property(nonatomic) int createrContentType; // @synthesize createrContentType=_createrContentType;
@property(retain, nonatomic) NSString *imageParentName; // @synthesize imageParentName=_imageParentName;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityParentItem; // @synthesize commentCommodityParentItem=_commentCommodityParentItem;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) TBSNSFeedCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
@property(retain, nonatomic) TBTextLabel *parentContentSLabel; // @synthesize parentContentSLabel=_parentContentSLabel;
@property(retain, nonatomic) TBTextLabel *contentSLabel; // @synthesize contentSLabel=_contentSLabel;
@property(nonatomic) struct CGSize parentContentlabelSize; // @synthesize parentContentlabelSize=_parentContentlabelSize;
@property(nonatomic) struct CGSize contentlabelSize; // @synthesize contentlabelSize=_contentlabelSize;
@property(nonatomic) double parentContentHeight; // @synthesize parentContentHeight=_parentContentHeight;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(nonatomic) _Bool isForPraise; // @synthesize isForPraise=_isForPraise;
@property(nonatomic) _Bool isForMyReply; // @synthesize isForMyReply=_isForMyReply;
@property(nonatomic) _Bool isImageHadLoad; // @synthesize isImageHadLoad=_isImageHadLoad;
@property(nonatomic) unsigned long long parentType; // @synthesize parentType=_parentType;
@property(retain, nonatomic) NSArray *parentExtSymbolArray; // @synthesize parentExtSymbolArray=_parentExtSymbolArray;
@property(retain, nonatomic) NSArray *parentExtSymbol; // @synthesize parentExtSymbol=_parentExtSymbol;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *extSymbolArray; // @synthesize extSymbolArray=_extSymbolArray;
@property(retain, nonatomic) NSArray *extSymbol; // @synthesize extSymbol=_extSymbol;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long ownerId; // @synthesize ownerId=_ownerId;
@property(nonatomic) unsigned long long parentId; // @synthesize parentId=_parentId;
@property(nonatomic) unsigned long long authorId; // @synthesize authorId=_authorId;
@property(retain, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(retain, nonatomic) NSString *parentContent; // @synthesize parentContent=_parentContent;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(nonatomic) unsigned long long commenterId; // @synthesize commenterId=_commenterId;
@property(retain, nonatomic) NSString *createrPic; // @synthesize createrPic=_createrPic;
@property(retain, nonatomic) NSString *createrName; // @synthesize createrName=_createrName;
@property(nonatomic) unsigned long long floor; // @synthesize floor=_floor;
@property(nonatomic) unsigned long long commentId; // @synthesize commentId=_commentId;
@property(nonatomic) unsigned long long createrId; // @synthesize createrId=_createrId;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setFeedCommentCommodityParentItem:(id)arg1;
- (void)setFeedCommentCommodityItem:(id)arg1;
- (struct CGSize)bubbleSizeWithText:(id)arg1 witFontWidth:(double)arg2 withFont:(_Bool)arg3;
- (struct CGSize)bubbleSizeWithText:(id)arg1 witFontWidth:(double)arg2;
- (double)getCommdityDetailViewHeightNoText:(int)arg1;
- (double)getCommdityDetailViewHeight:(int)arg1;
- (void)getCommentCellHeight;
- (id)getCommentParentContentCommodityItem;
- (id)getCommentContentCommodityItem;
- (id)getCommentParentContentPicName;
- (id)getCommentContentPicName;
- (_Bool)hasParentComment;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

