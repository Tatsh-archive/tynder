//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAEmitterLayer;

@interface TNDRFireworksView : UIView
{
    CAEmitterLayer *_mortar;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)addParticles;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain) CAEmitterLayer *mortar; // @synthesize mortar=_mortar;
- (void)prepare;
- (void)start;
- (void)stop;

@end

