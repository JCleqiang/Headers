//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class TTFTaskStruct, TTFUserTaskStruct;

@interface TTFUserFullTaskStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasTask; // @dynamic hasTask;
@property(retain, nonatomic) TTFUserTaskStruct *state; // @dynamic state;
@property(retain, nonatomic) TTFTaskStruct *task; // @dynamic task;

@end

