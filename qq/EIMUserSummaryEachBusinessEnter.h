//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/UserSummaryEachBusinessEnter.h>

@class NSMutableArray;

@interface EIMUserSummaryEachBusinessEnter : UserSummaryEachBusinessEnter
{
    NSMutableArray *_eimInfo;
}

@property(retain, nonatomic) NSMutableArray *eimInfo; // @synthesize eimInfo=_eimInfo;
- (void).cxx_destruct;
- (void)setEIMRecInfo:(id)arg1;
- (void)loadHeadIcon:(id)arg1 indexPath:(id)arg2;
- (void)setVerifyImgHidden:(id)arg1 index:(id)arg2;
- (void)onClickEimBtn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

