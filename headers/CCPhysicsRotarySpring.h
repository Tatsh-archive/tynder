//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCPhysicsJoint.h"

@class ChipmunkDampedRotarySpring;

@interface CCPhysicsRotarySpring : CCPhysicsJoint
{
    ChipmunkDampedRotarySpring *_constraint;
    float restAngle;
}

- (void).cxx_destruct;
- (id)constraint;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 restAngle:(float)arg3 stifness:(float)arg4 damping:(float)arg5;
- (void)willAddToPhysicsNode:(id)arg1;

@end
