//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ReadInJoyInterestLabel : NSObject
{
    _Bool _isDefault;
    _Bool _isSelected;
    unsigned long long _labelId;
    NSString *_labelName;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) NSString *labelName; // @synthesize labelName=_labelName;
@property(nonatomic) unsigned long long labelId; // @synthesize labelId=_labelId;
- (void)dealloc;

@end

