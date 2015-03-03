//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageWhiteBalanceFilter : GPUImageFilter
{
    int temperatureUniform;
    int tintUniform;
    float _temperature;
    float _tint;
}

- (id)init;
@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float tint; // @synthesize tint=_tint;

@end

