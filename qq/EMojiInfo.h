//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCoding-Protocol.h>

@class EmojiHistoryInfo, NSMutableArray, NSString;

@interface EmojiInfo : NSObject <NSCoding>
{
    _Bool _isRecv;
    _Bool _sound;
    _Bool _isQFace;
    _Bool _isSmallFace;
    _Bool _isMagic;
    _Bool _isDIYEmoji;
    _Bool _isSupportAPNG;
    unsigned int _packageId;
    int _subType;
    unsigned int _imageWidth;
    unsigned int _imageHeight;
    int _rscType;
    unsigned int _displayWidth;
    unsigned int _displayHeight;
    NSString *_uin;
    NSString *_emojiId;
    NSString *_name;
    NSString *_key;
    NSMutableArray *_keywords;
    long long _associateShowTime;
    long long _pngRetNum;
    EmojiHistoryInfo *_roamCollectionInfo;
    NSString *_diversionSourceName;
    NSString *_diversionLink;
    NSString *_diversionTypeName;
    long long _diversionType;
    NSString *_bigEmojiApngfilePath;
    long long _businessType;
    NSString *_cloudKeyWord;
    long long _storageType;
}

+ (id)loadAssociateEmojiByKeword:(id)arg1 type:(long long)arg2;
+ (void)deleteByKeyWord:(id)arg1 type:(long long)arg2;
+ (void)save:(id)arg1 type:(long long)arg2;
+ (id)ORMDBIgnoredProperties;
+ (id)ORMDBTableName;
@property(nonatomic) long long storageType; // @synthesize storageType=_storageType;
@property(copy, nonatomic) NSString *cloudKeyWord; // @synthesize cloudKeyWord=_cloudKeyWord;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(copy, nonatomic) NSString *bigEmojiApngfilePath; // @synthesize bigEmojiApngfilePath=_bigEmojiApngfilePath;
@property(nonatomic) _Bool isSupportAPNG; // @synthesize isSupportAPNG=_isSupportAPNG;
@property(nonatomic) _Bool isDIYEmoji; // @synthesize isDIYEmoji=_isDIYEmoji;
@property(nonatomic) long long diversionType; // @synthesize diversionType=_diversionType;
@property(copy, nonatomic) NSString *diversionTypeName; // @synthesize diversionTypeName=_diversionTypeName;
@property(copy, nonatomic) NSString *diversionLink; // @synthesize diversionLink=_diversionLink;
@property(copy, nonatomic) NSString *diversionSourceName; // @synthesize diversionSourceName=_diversionSourceName;
@property(nonatomic) unsigned int displayHeight; // @synthesize displayHeight=_displayHeight;
@property(nonatomic) unsigned int displayWidth; // @synthesize displayWidth=_displayWidth;
@property(nonatomic) __weak EmojiHistoryInfo *roamCollectionInfo; // @synthesize roamCollectionInfo=_roamCollectionInfo;
@property(nonatomic) long long pngRetNum; // @synthesize pngRetNum=_pngRetNum;
@property(nonatomic) _Bool isMagic; // @synthesize isMagic=_isMagic;
@property(nonatomic) int rscType; // @synthesize rscType=_rscType;
@property(nonatomic) long long associateShowTime; // @synthesize associateShowTime=_associateShowTime;
@property(retain, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) _Bool isSmallFace; // @synthesize isSmallFace=_isSmallFace;
@property(nonatomic) _Bool isQFace; // @synthesize isQFace=_isQFace;
@property(nonatomic) unsigned int imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) unsigned int imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) _Bool sound; // @synthesize sound=_sound;
@property(nonatomic) _Bool isRecv; // @synthesize isRecv=_isRecv;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *emojiId; // @synthesize emojiId=_emojiId;
@property(nonatomic) unsigned int packageId; // @synthesize packageId=_packageId;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isQFaceEmoji;
- (id)description;
@property(readonly, nonatomic) _Bool downloaded;
@property(readonly, nonatomic) NSString *soundPath;
@property(readonly, nonatomic) NSString *rscPath;
@property(readonly, nonatomic) NSString *zipPath;
@property(readonly, nonatomic) NSString *apngfilePath;
@property(readonly, nonatomic) NSString *filepath;
- (id)downloadURL;
- (id)initWithMarketFaceInfo:(id)arg1 uin:(id)arg2 isReceived:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

