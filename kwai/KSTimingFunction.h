//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface KSTimingFunction : NSObject <NSCoding>
{
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
    double dur;
    struct CGPoint p1;
    struct CGPoint p2;
}

+ (struct CGPoint)controlPoint2ForTimingFunctionWithName:(id)arg1;
+ (struct CGPoint)controlPoint1ForTimingFunctionWithName:(id)arg1;
+ (struct CGPoint)normalizedPoint:(struct CGPoint)arg1;
+ (id)timingFunctionWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
+ (id)timingFunctionWithName:(id)arg1;
@property(nonatomic) double duration; // @synthesize duration=dur;
@property(nonatomic) struct CGPoint controlPoint2; // @synthesize controlPoint2=p2;
@property(nonatomic) struct CGPoint controlPoint1; // @synthesize controlPoint1=p1;
- (double)solveCurveX:(double)arg1 epsilon:(double)arg2;
- (double)sampleCurveDerivativeX:(double)arg1;
- (double)sampleCurveY:(double)arg1;
- (double)sampleCurveX:(double)arg1;
- (void)calculatePolynomialCoefficients;
- (double)epsilon;
- (double)valueForX:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2 duration:(double)arg3;

@end

