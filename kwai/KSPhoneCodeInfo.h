//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSPhoneCodeInfo : NSObject
{
    NSString *_countryCode;
    NSString *_phone;
    NSString *_verifyCode;
}

@property(retain, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void).cxx_destruct;

@end

