//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface TXBaoCardFreeFlowData : TBJSONModel <NSCoding>
{
    _Bool _aliBaoCard;
    NSString *_ispCode;
    NSString *_phoneNumber;
    NSString *_cardType;
    NSArray *_canReceiveRightsList;
    NSArray *_rightsList;
    NSDictionary *_extData;
}

@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSArray *rightsList; // @synthesize rightsList=_rightsList;
@property(retain, nonatomic) NSArray *canReceiveRightsList; // @synthesize canReceiveRightsList=_canReceiveRightsList;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *ispCode; // @synthesize ispCode=_ispCode;
@property(nonatomic) _Bool aliBaoCard; // @synthesize aliBaoCard=_aliBaoCard;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

