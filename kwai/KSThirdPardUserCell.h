//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSRecommendUserCell.h"

@class KSRoundedImageAsset, KSThirdPardFriend, NSString;
@protocol KSThirdPardUserCellDelegate;

@interface KSThirdPardUserCell : KSRecommendUserCell
{
    KSThirdPardFriend *_thirdPardFriend;
    id <KSThirdPardUserCellDelegate> _thirdPardUserCellDelegate;
    KSRoundedImageAsset *_headerImageAsset;
    NSString *_platformName;
}

@property(retain, nonatomic) NSString *platformName; // @synthesize platformName=_platformName;
@property(retain, nonatomic) KSRoundedImageAsset *headerImageAsset; // @synthesize headerImageAsset=_headerImageAsset;
@property(nonatomic) __weak id <KSThirdPardUserCellDelegate> thirdPardUserCellDelegate; // @synthesize thirdPardUserCellDelegate=_thirdPardUserCellDelegate;
@property(retain, nonatomic) KSThirdPardFriend *thirdPardFriend; // @synthesize thirdPardFriend=_thirdPardFriend;
- (void).cxx_destruct;
- (void)didTapFollowButton:(id)arg1;
- (void)lazyLayout;
- (void)didReceiveFollowNotification:(id)arg1;
- (void)drawWithThirdPardFriend:(id)arg1 platformName:(id)arg2;

@end
