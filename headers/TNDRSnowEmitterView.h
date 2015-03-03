//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEmitterLayer;

@interface TNDRSnowEmitterView : UIView
{
    CAEmitterLayer *_snowLayer;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)makeEmitterAtPoint:(struct CGPoint)arg1;
- (id)makeEmitterCellWithParticle:(id)arg1;
- (void)prepare;
@property(retain) CAEmitterLayer *snowLayer; // @synthesize snowLayer=_snowLayer;
- (void)start;
- (void)stop;

@end

