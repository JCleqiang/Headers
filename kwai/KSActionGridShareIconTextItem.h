//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSActionGridIconTextItem.h"

@class NSArray, NSError, UIViewController;
@protocol KSActivity;

@interface KSActionGridShareIconTextItem : KSActionGridIconTextItem
{
    id <KSActivity> _activity;
    NSArray *_activityItems;
    unsigned long long _result;
    NSError *_error;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) id <KSActivity> activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (void)shareFinished;
- (void)OAuthShare;
- (void)didSelected;
- (id)init;

@end

