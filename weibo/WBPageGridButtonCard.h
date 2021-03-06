//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSString, WBPageGroupItemCard;

@interface WBPageGridButtonCard : WBPageCard
{
    _Bool _needShowAll;
    WBPageGroupItemCard *loadMoreItemCard;
    int _mode;
    NSString *col;
    NSArray *groupArray;
    NSString *cardBgColor;
    NSString *dividerColor;
    NSString *moreBtnPic;
    long long _defaultShowRows;
    NSString *_postID;
}

+ (id)gridButtonNeedShowAllItemMap;
+ (Class)fangleTableCellClass;
+ (Class)viewClass;
+ (Class)tableViewCellClass;
@property(retain, nonatomic) NSString *postID; // @synthesize postID=_postID;
@property(nonatomic) long long defaultShowRows; // @synthesize defaultShowRows=_defaultShowRows;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *moreBtnPic; // @synthesize moreBtnPic;
@property(retain, nonatomic) NSString *dividerColor; // @synthesize dividerColor;
@property(retain, nonatomic) NSString *cardBgColor; // @synthesize cardBgColor;
@property(retain, nonatomic) NSArray *groupArray; // @synthesize groupArray;
@property(retain, nonatomic) NSString *col; // @synthesize col;
- (void).cxx_destruct;
- (void)dealloc;
- (id)primaryKey;
- (void)markButtonCardNeedShowAllOrNot;
- (void)_markButtonCardNeedShow:(_Bool)arg1;
- (_Bool)needShowAllItem;
- (id)splitGroupsItemsWithLenght:(unsigned long long)arg1 outputSuffix:(id *)arg2;
- (id)groupItemCardForLoadMore;
- (void)_resetState:(id)arg1;
- (void)_registerAccountDidChangeNotification;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (_Bool)updateWithDictionary:(id)arg1;

@end

