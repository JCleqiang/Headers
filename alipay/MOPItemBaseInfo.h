//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface MOPItemBaseInfo : NSObject
{
    _Bool _negotiable;
    NSString *_title;
    NSString *_itemId;
    NSString *_price;
    long long _orderQuantity;
    NSString *_unitDesc;
    NSString *_unit;
    NSString *_img;
    NSString *_itemStatus;
    NSString *_itemStatusDesc;
    NSString *_itemDesc;
    NSString *_spId;
    NSString *_shopId;
    NSArray *_categoryIds;
    NSDate *_createDate;
    NSArray *_itemTags;
    NSString *_searchTag;
}

+ (Class)itemTagsElementClass;
+ (Class)categoryIdsElementClass;
@property(retain, nonatomic) NSString *searchTag; // @synthesize searchTag=_searchTag;
@property(retain, nonatomic) NSArray *itemTags; // @synthesize itemTags=_itemTags;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(nonatomic) _Bool negotiable; // @synthesize negotiable=_negotiable;
@property(retain, nonatomic) NSArray *categoryIds; // @synthesize categoryIds=_categoryIds;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *spId; // @synthesize spId=_spId;
@property(retain, nonatomic) NSString *itemDesc; // @synthesize itemDesc=_itemDesc;
@property(retain, nonatomic) NSString *itemStatusDesc; // @synthesize itemStatusDesc=_itemStatusDesc;
@property(retain, nonatomic) NSString *itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *unitDesc; // @synthesize unitDesc=_unitDesc;
@property(nonatomic) long long orderQuantity; // @synthesize orderQuantity=_orderQuantity;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
