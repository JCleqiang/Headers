//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBRspGeneralModel.h>

@class NSArray;

@interface TBRspMsgTabNodeVideoList : TBRspGeneralModel
{
    NSArray *_vidInfoList;
}

@property(copy, nonatomic) NSArray *vidInfoList; // @synthesize vidInfoList=_vidInfoList;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
- (void)dealloc;

@end

