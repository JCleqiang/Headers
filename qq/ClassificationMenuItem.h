//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface ClassificationMenuItem : NSObject
{
    _Bool _bGetRedBag;
    long long _classificationID;
    NSString *_classificationName;
    NSString *_tips;
    long long _tipsVersion;
    NSString *_titleSelectColor;
    NSString *_indicatorColor;
    NSMutableArray *_pendantArray;
}

+ (id)getClassificationMenuItemList:(_Bool)arg1;
@property(retain, nonatomic) NSMutableArray *pendantArray; // @synthesize pendantArray=_pendantArray;
@property(retain, nonatomic) NSString *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(retain, nonatomic) NSString *titleSelectColor; // @synthesize titleSelectColor=_titleSelectColor;
@property(nonatomic) long long tipsVersion; // @synthesize tipsVersion=_tipsVersion;
@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool bGetRedBag; // @synthesize bGetRedBag=_bGetRedBag;
@property(retain, nonatomic) NSString *classificationName; // @synthesize classificationName=_classificationName;
@property(nonatomic) long long classificationID; // @synthesize classificationID=_classificationID;
- (void).cxx_destruct;

@end
