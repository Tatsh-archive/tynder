//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCRenderState, CCShader, NSMutableDictionary;

@protocol CCShaderProtocol <NSObject>

@optional
@property(readonly, nonatomic) CCRenderState *renderState;
@property(retain, nonatomic) CCShader *shader;
@property(readonly, nonatomic) NSMutableDictionary *shaderUniforms;
@end

