//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@interface DTRpcException : NSException
{
    int _code;
}

+ (void)raise:(int)arg1 message:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(int)arg1 message:(id)arg2;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 code:(int)arg4;
@property(nonatomic) int code; // @synthesize code=_code;
- (id)allResponseHeaderFields;

@end

