//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePixellateFilter : GPUImageFilter
{
    int fractionalWidthOfAPixelUniform;
    int aspectRatioUniform;
    float _fractionalWidthOfAPixel;
    float _aspectRatio;
}

- (void)adjustAspectRatio;
@property(nonatomic) float aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
@property(nonatomic) float fractionalWidthOfAPixel; // @synthesize fractionalWidthOfAPixel=_fractionalWidthOfAPixel;
- (id)init;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;

@end

