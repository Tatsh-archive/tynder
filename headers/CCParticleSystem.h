//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCParticleSystemBase.h"

@interface CCParticleSystem : CCParticleSystemBase
{
    union _GLKVector2 _texCoord1[4];
}

- (void)draw:(id)arg1 transform:(const union _GLKMatrix4 *)arg2;
- (void)initTexCoordsWithRect:(struct CGRect)arg1;
- (id)initWithTotalParticles:(unsigned int)arg1;
- (void)setSpriteFrame:(id)arg1;
- (void)setTexture:(id)arg1;
- (void)setTexture:(id)arg1 withRect:(struct CGRect)arg2;
- (void)setTotalParticles:(unsigned int)arg1;

@end

