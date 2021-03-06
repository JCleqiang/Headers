//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSString, WBPageCard;

@interface WBPageCardWrapper : NSObject <NSObject, NSCopying>
{
    NSDictionary *alternativeConfig;
    WBPageCard *innerCard;
}

+ (id)pageCardWrapperWithPageCard:(id)arg1;
@property(retain, nonatomic) WBPageCard *innerCard; // @synthesize innerCard;
@property(retain, nonatomic) NSDictionary *alternativeConfig; // @synthesize alternativeConfig;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

