//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@class NSValue;

@interface CCEffectHue : CCEffect
{
    float _hue;
    NSValue *_hueRotationMtx;
}

+ (id)effectWithHue:(float)arg1;
- (void).cxx_destruct;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
@property(nonatomic) float hue; // @synthesize hue=_hue;
@property(retain, nonatomic) NSValue *hueRotationMtx; // @synthesize hueRotationMtx=_hueRotationMtx;
- (id)init;
- (id)initWithHue:(float)arg1;

@end
