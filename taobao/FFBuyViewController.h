//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, TBBuyViewBuilder;

@interface FFBuyViewController : UIViewController
{
    NSDictionary *_exParams;
    TBBuyViewBuilder *_viewBuilder;
    NSString *_shopId;
    NSString *_buyParamsString;
    NSString *_exParamsString;
    long long _bizType;
    long long _subBizType;
    NSArray *_buyParams;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSArray *buyParams; // @synthesize buyParams=_buyParams;
@property(nonatomic) long long subBizType; // @synthesize subBizType=_subBizType;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *exParamsString; // @synthesize exParamsString=_exParamsString;
@property(copy, nonatomic) NSString *buyParamsString; // @synthesize buyParamsString=_buyParamsString;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) TBBuyViewBuilder *viewBuilder; // @synthesize viewBuilder=_viewBuilder;
@property(copy, nonatomic) NSDictionary *exParams; // @synthesize exParams=_exParams;
- (void).cxx_destruct;
- (void)_buildOrderRequsetEndNotificationHander:(id)arg1;
- (void)_selectedCellNotificationHander:(id)arg1;
- (id)mockStringForData:(id)arg1;
- (void)_createOrder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

@end

