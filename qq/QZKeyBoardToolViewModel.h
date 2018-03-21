//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QZKeyBoardToolViewModel : NSObject
{
    _Bool _isAnimate;
    _Bool _isRedDot;
    _Bool _canNotBeChanged;
    unsigned long long _firstButtonType;
    unsigned long long _secondButtonType;
    unsigned long long _currentButtonType;
    NSString *_accessibilityLabel;
    long long _buttonTag;
    NSString *_imageName;
}

+ (id)labels;
+ (id)buttonImages;
+ (id)newWithFirstType:(unsigned long long)arg1 andSecondType:(unsigned long long)arg2 andRedDot:(_Bool)arg3;
+ (id)newWithFirstType:(unsigned long long)arg1 andSecondType:(unsigned long long)arg2 animated:(_Bool)arg3;
+ (id)newWithFirstType:(unsigned long long)arg1 andSecondType:(unsigned long long)arg2;
@property(nonatomic) _Bool canNotBeChanged; // @synthesize canNotBeChanged=_canNotBeChanged;
@property(nonatomic) _Bool isRedDot; // @synthesize isRedDot=_isRedDot;
@property(nonatomic) _Bool isAnimate; // @synthesize isAnimate=_isAnimate;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) long long buttonTag; // @synthesize buttonTag=_buttonTag;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) unsigned long long currentButtonType; // @synthesize currentButtonType=_currentButtonType;
@property(nonatomic) unsigned long long secondButtonType; // @synthesize secondButtonType=_secondButtonType;
@property(nonatomic) unsigned long long firstButtonType; // @synthesize firstButtonType=_firstButtonType;
- (void).cxx_destruct;
- (id)currentImage;

@end
