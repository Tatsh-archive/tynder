//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCBlendMode, CCRenderState;

@protocol CCBlendProtocol <NSObject>

@optional
- (struct _ccBlendFunc)blendFunc;
@property(retain, nonatomic) CCBlendMode *blendMode;
@property(readonly, nonatomic) CCRenderState *renderState;
- (void)setBlendFunc:(struct _ccBlendFunc)arg1;
@end

