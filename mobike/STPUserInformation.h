//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, STPAddress;

@interface STPUserInformation : NSObject <NSCopying>
{
    NSString *_email;
    NSString *_phone;
    STPAddress *_billingAddress;
}

@property(retain, nonatomic) STPAddress *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
