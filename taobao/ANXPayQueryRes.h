//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ANXLogManager, NSDictionary, NSString;

@interface ANXPayQueryRes : NSObject
{
    NSString *_action;
    NSString *_attachAction;
    NSString *_dynamicId;
    NSString *_mcashierParamStr;
    NSString *_sdkBizData;
    NSString *_entireData;
    NSDictionary *_entireDic;
    ANXLogManager *_logManager;
}

@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
@property(retain, nonatomic) NSDictionary *entireDic; // @synthesize entireDic=_entireDic;
@property(copy, nonatomic) NSString *entireData; // @synthesize entireData=_entireData;
@property(copy, nonatomic) NSString *sdkBizData; // @synthesize sdkBizData=_sdkBizData;
@property(copy, nonatomic) NSString *mcashierParamStr; // @synthesize mcashierParamStr=_mcashierParamStr;
@property(copy, nonatomic) NSString *dynamicId; // @synthesize dynamicId=_dynamicId;
@property(copy, nonatomic) NSString *attachAction; // @synthesize attachAction=_attachAction;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;

@end

