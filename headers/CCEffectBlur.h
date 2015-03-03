//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@interface CCEffectBlur : CCEffect
{
    unsigned int _numberOfOptimizedOffsets;
    unsigned int _blurRadius;
    float _sigma;
    BOOL _shaderDirty;
}

+ (id)effectWithBlurRadius:(unsigned int)arg1;
@property(nonatomic) unsigned int blurRadius; // @synthesize blurRadius=_blurRadius;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
- (void)buildVertexFunctions;
- (id)init;
- (id)initWithPixelBlurRadius:(unsigned int)arg1;
- (unsigned int)prepareForRendering;
- (void)setBlurRadiusAndDependents:(unsigned int)arg1;

@end

