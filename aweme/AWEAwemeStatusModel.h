//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEAwemeStatusModel : AWEBaseApiModel
{
    _Bool _deleted;
    _Bool _allowShare;
    _Bool _allowComment;
    _Bool _hasGoods;
    NSString *_itemID;
    unsigned long long _privacyType;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long privacyType; // @synthesize privacyType=_privacyType;
@property(nonatomic) _Bool hasGoods; // @synthesize hasGoods=_hasGoods;
@property(readonly, nonatomic) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(readonly, nonatomic) _Bool allowShare; // @synthesize allowShare=_allowShare;
@property(readonly, nonatomic) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isNotPublic;
@property(readonly, nonatomic) _Bool isFriendVisible;
@property(readonly, nonatomic) _Bool isPrivate;
- (id)init;

@end
