//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MomQueryBabyProfileDelegate;
@protocol MomBabyProfileServiceDelegate;

@interface MomBabyProfileService : NSObject
{
    id <MomBabyProfileServiceDelegate> _delegate;
    MomQueryBabyProfileDelegate *_queryBabyProfileDelegate;
}

@property(retain, nonatomic) MomQueryBabyProfileDelegate *queryBabyProfileDelegate; // @synthesize queryBabyProfileDelegate=_queryBabyProfileDelegate;
@property(nonatomic) __weak id <MomBabyProfileServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)queryBabyProfile:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

