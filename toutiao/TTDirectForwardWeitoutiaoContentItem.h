//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTActivityContentItemProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface TTDirectForwardWeitoutiaoContentItem : NSObject <TTActivityContentItemProtocol>
{
    CDUnknownBlockType _customAction;
    NSDictionary *_repostParams;
}

@property(copy, nonatomic) NSDictionary *repostParams; // @synthesize repostParams=_repostParams;
@property(copy, nonatomic) CDUnknownBlockType customAction; // @synthesize customAction=_customAction;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contentItemType;

// Remaining properties
@property(copy, nonatomic) NSString *activityImageName;
@property(copy, nonatomic) NSString *contentTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

