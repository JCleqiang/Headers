//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAtlasEditAsset-Protocol.h"

@class NSArray, NSString;
@protocol KSAtlasEditAssetInfo;

@interface KSAtlasEditLibraryAsset : NSObject <KSAtlasEditAsset>
{
    NSString *_identifier;
    unsigned long long _type;
    NSArray *_elements;
    id <KSAtlasEditAssetInfo> _info;
}

@property(retain, nonatomic) id <KSAtlasEditAssetInfo> info; // @synthesize info=_info;
@property(readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 elements:(id)arg2;

@end

