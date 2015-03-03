//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChipmunkConstraint.h"

@interface ChipmunkGrooveJoint : ChipmunkConstraint
{
    struct cpGrooveJoint _constraint;
}

+ (id)grooveJointWithBodyA:(id)arg1 bodyB:(id)arg2 grooveA:(struct CGPoint)arg3 grooveB:(struct CGPoint)arg4 anchorB:(struct CGPoint)arg5;
@property(nonatomic) struct CGPoint anchorB;
- (struct cpConstraint *)constraint;
@property(nonatomic) struct CGPoint grooveA;
@property(nonatomic) struct CGPoint grooveB;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 grooveA:(struct CGPoint)arg3 grooveB:(struct CGPoint)arg4 anchorB:(struct CGPoint)arg5;

@end
