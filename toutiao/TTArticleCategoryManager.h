//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTAccountMulticastProtocol-Protocol.h"

@class NSMutableArray, NSString, TTCategory;

@interface TTArticleCategoryManager : NSObject <TTAccountMulticastProtocol>
{
    NSMutableArray *_allCategories;
    NSMutableArray *_subScribedCategories;
    NSMutableArray *_subscribeEntryCategories;
    NSMutableArray *_articleCategories;
    NSMutableArray *_essayCatgegories;
    NSMutableArray *_imageCategories;
    NSMutableArray *_webCategories;
    TTCategory *_localCategory;
    TTCategory *_lastAddedCategory;
    CDUnknownBlockType _iarBlock;
    CDUnknownBlockType _cityBlock;
    CDUnknownBlockType _sysLocationBlock;
}

+ (_Bool)isCurrentVersionSupportCategoryModel:(id)arg1;
+ (void)clearHasGotRemoteData;
+ (void)setHasGotRemoteData;
+ (_Bool)hasGotRemoteData;
+ (_Bool)isUserSelectedLocalCity;
+ (void)setUserSelectedLocalCity;
+ (void)setHasNewTip:(_Bool)arg1;
+ (_Bool)hasNewTip;
+ (id)latestServerLocalCity;
+ (void)setServerLocalCityName:(id)arg1;
+ (void)setGetCategoryVersion:(id)arg1;
+ (id)fetchGetCategoryVersion;
+ (void)setCurrentSelectedCategoryID:(id)arg1;
+ (id)currentSelectedCategoryID;
+ (id)newsLocalCategory;
+ (id)insertCategoryWithDictionary:(id)arg1;
+ (id)categoryModelByCategoryID:(id)arg1;
+ (id)checkDBAndReturnMainCategory;
+ (id)mainArticleCategory;
+ (id)sharedManager;
+ (void)initialize;
+ (void)insertCategoryForName:(id)arg1 categoryID:(id)arg2 concernID:(id)arg3 orderIndex:(id)arg4 subscribed:(_Bool)arg5 categoryType:(unsigned long long)arg6 categoryTopType:(unsigned long long)arg7 save:(_Bool)arg8;
+ (void)insertCategoryForName:(id)arg1 categoryID:(id)arg2 concernID:(id)arg3 orderIndex:(id)arg4 subscribed:(_Bool)arg5 categoryType:(unsigned long long)arg6 save:(_Bool)arg7;
+ (void)insertDefaultDataIfNeeded;
+ (void)insertDefaultData;
+ (long long)firstCategoryStyle;
+ (long long)isInSepecialStrategy;
+ (id)startCategoryID;
@property(copy, nonatomic) CDUnknownBlockType sysLocationBlock; // @synthesize sysLocationBlock=_sysLocationBlock;
@property(copy, nonatomic) CDUnknownBlockType cityBlock; // @synthesize cityBlock=_cityBlock;
@property(copy, nonatomic) CDUnknownBlockType iarBlock; // @synthesize iarBlock=_iarBlock;
@property(retain, nonatomic) TTCategory *lastAddedCategory; // @synthesize lastAddedCategory=_lastAddedCategory;
@property(retain, nonatomic) TTCategory *localCategory; // @synthesize localCategory=_localCategory;
@property(retain, nonatomic) NSMutableArray *webCategories; // @synthesize webCategories=_webCategories;
@property(retain, nonatomic) NSMutableArray *imageCategories; // @synthesize imageCategories=_imageCategories;
@property(retain, nonatomic) NSMutableArray *essayCatgegories; // @synthesize essayCatgegories=_essayCatgegories;
@property(retain, nonatomic) NSMutableArray *articleCategories; // @synthesize articleCategories=_articleCategories;
@property(retain, nonatomic) NSMutableArray *subscribeEntryCategories; // @synthesize subscribeEntryCategories=_subscribeEntryCategories;
@property(retain, nonatomic) NSMutableArray *subScribedCategories; // @synthesize subScribedCategories=_subScribedCategories;
@property(retain, nonatomic) NSMutableArray *allCategories; // @synthesize allCategories=_allCategories;
- (void).cxx_destruct;
- (void)setConfig:(id)arg1;
- (_Bool)isCategoryInFrontOfMainArticleCategoryInSubScribedCategories:(id)arg1;
- (void)insertCategoryToSubScribedCategories:(id)arg1 toOrderIndex:(long long)arg2;
- (long long)indexOfCategoryInSubScribedCategories:(id)arg1;
- (long long)indexOfMainArticleCategoryInSubScribedCategories;
- (void)setIARBlock:(CDUnknownBlockType)arg1;
- (id)subscribedCategoryIDs;
- (id)fetchGetCategoryCategoryIDs;
- (void)saveWithNotify:(_Bool)arg1;
- (void)save;
- (void)changeSubscribe:(id)arg1 toOrderIndex:(long long)arg2;
- (void)unSubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)unsubscribeCategories;
- (void)dispatchData:(id)arg1;
- (void)rebuildAllCategoriesWithDataDicts:(id)arg1;
- (id)photoMainCategory;
- (_Bool)iar;
- (id)localPhotoCategories;
- (id)localCategoriesContainDeleteCategory:(_Bool)arg1;
- (void)updateSubScribedCategoriesOrderIndex;
- (void)clearCategoryTipNewWithSave:(_Bool)arg1;
- (void)startGetCategory:(_Bool)arg1;
- (void)startGetCategory;
- (void)startGetUnsubscribedCategory;
- (void)onAccountStatusChanged:(long long)arg1 platform:(id)arg2;
- (id)unsubscribedCategoryURLString;
- (id)subscribedCategoryURLString;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

