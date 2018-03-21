//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MOPPortalCategory : NSObject
{
    NSString *_categoryId;
    NSString *_title;
    NSString *_desc;
    NSString *_icon;
    NSString *_subIcon;
    NSString *_selectedIcon;
    NSString *_target;
    NSArray *_tags;
    NSArray *_subCategoryList;
}

+ (Class)subCategoryListElementClass;
+ (Class)tagsElementClass;
@property(retain, nonatomic) NSArray *subCategoryList; // @synthesize subCategoryList=_subCategoryList;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) NSString *subIcon; // @synthesize subIcon=_subIcon;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end
