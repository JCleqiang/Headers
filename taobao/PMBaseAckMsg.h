//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PMBaseMessage.h"

@class NSData;

@interface PMBaseAckMsg : PMBaseMessage
{
    NSData *_body;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (long long)fromProtocolItem:(id)arg1;
- (id)toProtocolItem;

@end
