//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_PBGeneratedMessage.h"

@class GMSx_GMMClientCapabilitiesProto, NSString;

@interface GMSx_GMMResourceRequestProto : GMSx_PBGeneratedMessage
{
}

+ (id)descriptor;
@property(retain, nonatomic) NSString *URL;
@property(nonatomic) _Bool hasURL;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMClientCapabilitiesProto *clientCapabilities; // @dynamic clientCapabilities;
@property(nonatomic) _Bool hasClientCapabilities; // @dynamic hasClientCapabilities;
@property(nonatomic) _Bool hasHash_p; // @dynamic hasHash_p;
@property(nonatomic) _Bool hasReferer; // @dynamic hasReferer;
@property(nonatomic) _Bool hasUrl; // @dynamic hasUrl;
@property(nonatomic) unsigned long long hash_p; // @dynamic hash_p;
@property(retain, nonatomic) NSString *referer; // @dynamic referer;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
