//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQMessageFormInputModel : NSObject
{
    _Bool _isRequired;
    _Bool _isSingleLine;
    NSString *_tip;
    NSString *_placeholder;
    NSString *_key;
    long long _keyboardType;
}

@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) _Bool isSingleLine; // @synthesize isSingleLine=_isSingleLine;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
- (void).cxx_destruct;
- (id)init;

@end

