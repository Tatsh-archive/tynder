//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChipmunkConstraint.h"

@interface ChipmunkPivotJoint : ChipmunkConstraint
{
    struct cpPivotJoint _constraint;
}

+ (id)pivotJointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
+ (id)pivotJointWithBodyA:(id)arg1 bodyB:(id)arg2 pivot:(struct CGPoint)arg3;
@property(nonatomic) struct CGPoint anchorA;
@property(nonatomic) struct CGPoint anchorB;
- (struct cpConstraint *)constraint;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 pivot:(struct CGPoint)arg3;

@end

