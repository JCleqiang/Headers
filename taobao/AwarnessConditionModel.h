//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AwarnessConditionModel : NSObject
{
    NSString *_desc;
    NSString *_expression;
    NSArray *_variableNames;
}

+ (id)initWithDict:(id)arg1;
@property(retain, nonatomic) NSArray *variableNames; // @synthesize variableNames=_variableNames;
@property(retain, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end

