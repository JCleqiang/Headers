//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SDWebImageAdapterConfig : NSObject <NSCopying>
{
    CDUnknownBlockType _cacheKeyFilter;
    long long _executionOrder;
    NSString *_cacheNameSpace;
}

@property(copy, nonatomic) NSString *cacheNameSpace; // @synthesize cacheNameSpace=_cacheNameSpace;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
@property(copy, nonatomic) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
