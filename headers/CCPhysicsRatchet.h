//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCPhysicsJoint.h"

@class ChipmunkRatchetJoint;

@interface CCPhysicsRatchet : CCPhysicsJoint
{
    ChipmunkRatchetJoint *_constraint;
}

- (void).cxx_destruct;
- (id)constraint;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 phase:(float)arg3 ratchet:(float)arg4;
- (void)willAddToPhysicsNode:(id)arg1;

@end

