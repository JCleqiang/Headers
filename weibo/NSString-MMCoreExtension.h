//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (MMCoreExtension)
+ (id)mmUUID;
+ (id)mmStringsJoinedByString:(id)arg1 first:(id)arg2 second:(id)arg3;
+ (id)mmCoalesce:(id)arg1 second:(id)arg2;
+ (id)mmDocumentPath;
+ (id)mmWithWithUInteger:(unsigned long long)arg1;
+ (id)mmWithWithInteger:(long long)arg1;
+ (id)mmWithDouble:(double)arg1;
+ (id)mmWithFloat:(float)arg1;
+ (id)mmWithULongLong:(unsigned long long)arg1;
+ (id)mmWithLongLong:(long long)arg1;
+ (id)mmWithULong:(unsigned long long)arg1;
+ (id)mmWithLong:(long long)arg1;
+ (id)mmWithUInt:(unsigned int)arg1;
+ (id)mmWithInt:(int)arg1;
+ (id)mmWithUShort:(unsigned short)arg1;
+ (id)mmWithShort:(short)arg1;
+ (id)mmSafeString:(id)arg1;
- (id)mmJSONData;
- (id)mmJSON;
- (id)mmMutableObjectFromJSON;
- (id)mmObjectFromJSON;
- (id)mmHexToBytes;
- (id)mmToString;
- (id)mmSHA1Hash;
- (id)mmMD5Hash;
- (id)mmPercentEscape;
- (id)mmTrim;
- (id)mmSubstringFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (int)mmLastIndexOfString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (int)mmLastIndexOfString:(id)arg1;
- (int)mmIndexOfString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (int)mmIndexOfString:(id)arg1;
- (_Bool)mmContains:(id)arg1;
- (int)mmCompareIgnoreCase:(id)arg1;
- (int)mmCompare:(id)arg1;
- (_Bool)mmEqualsIgnoreCase:(id)arg1;
- (_Bool)mmEquals:(id)arg1;
- (unsigned long long)unsignedIntegerValue;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long long)unsignedLongValue;
- (long long)longValue;
- (unsigned int)unsignedIntValue;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
@end

