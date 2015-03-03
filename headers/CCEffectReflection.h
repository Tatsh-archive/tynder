//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@class CCSprite, CCSpriteFrame;

@interface CCEffectReflection : CCEffect
{
    CCSprite *_environment;
    CCSpriteFrame *_normalMap;
    float _shininess;
    float _fresnelBias;
    float _fresnelPower;
    float _conditionedShininess;
    float _conditionedFresnelBias;
    float _conditionedFresnelPower;
}

+ (id)effectWithShininess:(float)arg1 environment:(id)arg2;
+ (id)effectWithShininess:(float)arg1 environment:(id)arg2 normalMap:(id)arg3;
+ (id)effectWithShininess:(float)arg1 fresnelBias:(float)arg2 fresnelPower:(float)arg3 environment:(id)arg4;
+ (id)effectWithShininess:(float)arg1 fresnelBias:(float)arg2 fresnelPower:(float)arg3 environment:(id)arg4 normalMap:(id)arg5;
- (void).cxx_destruct;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
- (void)buildVertexFunctions;
@property(nonatomic) float conditionedFresnelBias; // @synthesize conditionedFresnelBias=_conditionedFresnelBias;
@property(nonatomic) float conditionedFresnelPower; // @synthesize conditionedFresnelPower=_conditionedFresnelPower;
@property(nonatomic) float conditionedShininess; // @synthesize conditionedShininess=_conditionedShininess;
@property(retain, nonatomic) CCSprite *environment; // @synthesize environment=_environment;
@property(nonatomic) float fresnelBias; // @synthesize fresnelBias=_fresnelBias;
@property(nonatomic) float fresnelPower; // @synthesize fresnelPower=_fresnelPower;
- (id)init;
- (id)initWithShininess:(float)arg1 environment:(id)arg2;
- (id)initWithShininess:(float)arg1 environment:(id)arg2 normalMap:(id)arg3;
- (id)initWithShininess:(float)arg1 fresnelBias:(float)arg2 fresnelPower:(float)arg3 environment:(id)arg4;
- (id)initWithShininess:(float)arg1 fresnelBias:(float)arg2 fresnelPower:(float)arg3 environment:(id)arg4 normalMap:(id)arg5;
@property(retain, nonatomic) CCSpriteFrame *normalMap; // @synthesize normalMap=_normalMap;
@property(nonatomic) float shininess; // @synthesize shininess=_shininess;

@end

