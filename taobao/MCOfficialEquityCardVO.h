//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCOfficialMessageVO.h"

#import "MCOfficialEquityCardVOProtocol-Protocol.h"

@class NSString;

@interface MCOfficialEquityCardVO : MCOfficialMessageVO <MCOfficialEquityCardVOProtocol>
{
    NSString *_title;
    NSString *_imageUrl;
    NSString *_cardName;
    NSString *_cardIcon;
    NSString *_openUrl;
}

@property(retain, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(retain, nonatomic) NSString *cardIcon; // @synthesize cardIcon=_cardIcon;
@property(retain, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
