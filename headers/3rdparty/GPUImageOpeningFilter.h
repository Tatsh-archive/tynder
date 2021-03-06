//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageDilationFilter, GPUImageErosionFilter;

@interface GPUImageOpeningFilter : GPUImageFilterGroup
{
    GPUImageErosionFilter *erosionFilter;
    GPUImageDilationFilter *dilationFilter;
    float _verticalTexelSpacing;
    float _horizontalTexelSpacing;
}

- (void).cxx_destruct;
@property(nonatomic) float horizontalTexelSpacing; // @synthesize horizontalTexelSpacing=_horizontalTexelSpacing;
- (id)init;
- (id)initWithRadius:(unsigned int)arg1;
@property(nonatomic) float verticalTexelSpacing; // @synthesize verticalTexelSpacing=_verticalTexelSpacing;

@end

