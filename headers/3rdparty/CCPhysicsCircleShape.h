//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCPhysicsShape.h"

@class ChipmunkCircleShape;

@interface CCPhysicsCircleShape : CCPhysicsShape
{
    ChipmunkCircleShape *_shape;
    float _radius;
    struct CGPoint _center;
}

- (void).cxx_destruct;
- (id)initWithRadius:(float)arg1 center:(struct CGPoint)arg2;
- (void)rescaleShape:(struct CGAffineTransform)arg1;
- (id)shape;

@end
