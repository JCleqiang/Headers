//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABUnknownPersonViewController;

@protocol ABUnknownPersonViewControllerDelegate <NSObject>
- (void)unknownPersonViewController:(ABUnknownPersonViewController *)arg1 didResolveToPerson:(const void *)arg2;

@optional
- (_Bool)unknownPersonViewController:(ABUnknownPersonViewController *)arg1 shouldPerformDefaultActionForPerson:(const void *)arg2 property:(int)arg3 identifier:(int)arg4;
@end

