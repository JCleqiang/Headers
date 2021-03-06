//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface TBFavDetailedListEditContext : NSObject
{
    _Bool _syncToSquare;
    NSString *_listID;
    NSString *_name;
    NSString *_oldName;
    NSString *_subtitle;
    NSMutableArray *_deleteItemIDs;
    NSMutableArray *_addListItemIDs;
    NSString *_appName;
    long long _source;
    long long _type;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSMutableArray *addListItemIDs; // @synthesize addListItemIDs=_addListItemIDs;
@property(retain, nonatomic) NSMutableArray *deleteItemIDs; // @synthesize deleteItemIDs=_deleteItemIDs;
@property(nonatomic) _Bool syncToSquare; // @synthesize syncToSquare=_syncToSquare;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *oldName; // @synthesize oldName=_oldName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
- (void).cxx_destruct;
- (id)init;

@end

