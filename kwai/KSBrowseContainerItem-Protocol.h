//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, UIColor, UIView;
@protocol KSBrowseContainerItemDelegate, KSFeedStatLogger;

@protocol KSBrowseContainerItem <NSObject>
@property(nonatomic) _Bool callDidShowAfterViewLoaded;
@property(nonatomic) __weak id <KSBrowseContainerItemDelegate> itemDelegate;
@property(nonatomic) unsigned long long closeType;
@property(nonatomic) unsigned long long showType;
@property(retain, nonatomic) UIView *view;
@property(nonatomic) long long index;
- (UIColor *)containerBackgroundColor;
- (_Bool)isCenterViewTopLayout;
- (struct CGRect)fullImageFrame;
- (id <KSFeedStatLogger>)statLogger;
- (void)didDismissItem;
- (void)willDismissItem;
- (void)didShowItem;

@optional
- (_Bool)ks_showNavigationAlert:(NSString *)arg1 type:(unsigned long long)arg2 duration:(NSNumber *)arg3;
@end
