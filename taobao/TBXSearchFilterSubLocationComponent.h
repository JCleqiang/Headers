//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBXSearchFilterBaseComponent.h"

@class NSArray, NSMutableArray;

@interface TBXSearchFilterSubLocationComponent : TBXSearchFilterBaseComponent
{
    NSArray *_modelArr;
    NSMutableArray *_btnArr;
}

@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) NSArray *modelArr; // @synthesize modelArr=_modelArr;
- (void).cxx_destruct;
- (id)firstAccessibilityElement;
- (void)changeControlAccessibility:(_Bool)arg1;
- (void)renderBtn;
- (void)initWithTitle:(id)arg1 model:(id)arg2;

@end

