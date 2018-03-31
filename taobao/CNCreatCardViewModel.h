//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CNCreatCardModelProtocol-Protocol.h"

@class NSArray, NSString, UIColor;

@interface CNCreatCardViewModel : NSObject <CNCreatCardModelProtocol>
{
    _Bool shadowHidden;
    double marginLeft;
    double marginRight;
    double marginTop;
    double marginBottom;
    double height;
    NSArray *viewModels;
    CDUnknownBlockType reload;
    CDUnknownBlockType loadData;
    UIColor *backgroundColor;
}

@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) CDUnknownBlockType loadData; // @synthesize loadData;
@property(copy, nonatomic) CDUnknownBlockType reload; // @synthesize reload;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels;
@property(nonatomic) double height; // @synthesize height;
@property(nonatomic) double marginBottom; // @synthesize marginBottom;
@property(nonatomic) double marginTop; // @synthesize marginTop;
@property(nonatomic) double marginRight; // @synthesize marginRight;
@property(nonatomic) double marginLeft; // @synthesize marginLeft;
- (void).cxx_destruct;
- (id)extendViews;
- (id)viewModelAtIndex:(long long)arg1;
- (long long)numberOfViewModel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
