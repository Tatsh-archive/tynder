//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageCrosshatchFilter : GPUImageFilter
{
    int crossHatchSpacingUniform;
    int lineWidthUniform;
    float _crossHatchSpacing;
    float _lineWidth;
}

@property(nonatomic) float crossHatchSpacing; // @synthesize crossHatchSpacing=_crossHatchSpacing;
- (id)init;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;

@end

