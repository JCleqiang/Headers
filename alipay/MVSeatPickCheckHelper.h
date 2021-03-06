//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MVSeatPickCheckReturnValue, NSString;

@interface MVSeatPickCheckHelper : NSObject
{
    NSString *_returnCotent;
    MVSeatPickCheckReturnValue *_returnValue;
    CDUnknownBlockType _checkComplete;
}

@property(copy, nonatomic) CDUnknownBlockType checkComplete; // @synthesize checkComplete=_checkComplete;
@property(retain, nonatomic) MVSeatPickCheckReturnValue *returnValue; // @synthesize returnValue=_returnValue;
@property(retain, nonatomic) NSString *returnCotent; // @synthesize returnCotent=_returnCotent;
- (void).cxx_destruct;
- (_Bool)marketingToolsChangeCheck:(id)arg1 oriPrice:(id)arg2 mcardStatus:(id)arg3 selectedSeatsNumber:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)lockedSeatAfterCheck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)lockedSeatCheck:(id)arg1 scheduleId:(id)arg2 completion:(CDUnknownBlockType)arg3 isEndorsing:(_Bool)arg4;
- (_Bool)activityOrderCheck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)multipleUnpayOrderCheck:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCheckReturnValue;
- (id)init;

@end

