//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCEffect.h"

@class NSNumber;

@interface CCEffectContrast : CCEffect
{
    float _contrast;
    NSNumber *_conditionedContrast;
}

+ (id)effectWithContrast:(float)arg1;
- (void).cxx_destruct;
- (void)buildFragmentFunctions;
- (void)buildRenderPasses;
@property(retain, nonatomic) NSNumber *conditionedContrast; // @synthesize conditionedContrast=_conditionedContrast;
@property(nonatomic) float contrast; // @synthesize contrast=_contrast;
- (id)init;
- (id)initWithContrast:(float)arg1;

@end

