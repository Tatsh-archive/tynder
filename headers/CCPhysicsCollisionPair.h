//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CCPhysicsCollisionPair : NSObject
{
    struct cpArbiter *_arbiter;
}

- (struct cpArbiter *)arb;
- (struct cpArbiter *)arbiter;
@property(readonly, nonatomic) struct CCContactSet contacts;
@property(nonatomic) float friction;
- (BOOL)ignore;
@property(nonatomic) float restitution;
- (void)setArbiter:(struct cpArbiter *)arg1;
@property(nonatomic) struct CGPoint surfaceVelocity;
@property(nonatomic) id userData;
- (void)shapeA:(id *)arg1 shapeB:(id *)arg2;
@property(readonly, nonatomic) struct CGPoint totalImpulse;
@property(readonly, nonatomic) float totalKineticEnergy;

@end

