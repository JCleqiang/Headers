//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TTActivitiesManager : NSObject
{
    NSMutableArray *_validActivitiesArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *validActivitiesArray; // @synthesize validActivitiesArray=_validActivitiesArray;
- (void).cxx_destruct;
- (id)getActivityByItem:(id)arg1;
- (id)validActivitiesForContent:(id)arg1;
- (id)allPodSupportActivitiesString;
- (id)sharePodSupportActivities;
- (void)addValidActivity:(id)arg1;
- (void)addValidActivitiesFromArray:(id)arg1;
- (id)init;

@end
