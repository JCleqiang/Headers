//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSString;
@protocol FRGameIconCellEntity><Optional, Optional;

@interface FRGameEntity : JSONModel
{
    NSString *_name;
    NSString *_genre;
    NSString *_avatar;
    NSArray<FRGameIconCellEntity><Optional> *_iconCells;
    NSString<Optional> *_introductionUrl;
    NSString *_coverUrl;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString<Optional> *introductionUrl; // @synthesize introductionUrl=_introductionUrl;
@property(copy, nonatomic) NSArray<FRGameIconCellEntity><Optional> *iconCells; // @synthesize iconCells=_iconCells;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

