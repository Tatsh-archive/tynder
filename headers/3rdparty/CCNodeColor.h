//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNode.h"

#import "CCBlendProtocol.h"
#import "CCShaderProtocol.h"

@class CCBlendMode, CCRenderState, CCShader, NSMutableDictionary, NSString;

@interface CCNodeColor : CCNode <CCShaderProtocol, CCBlendProtocol>
{
    union _GLKVector4 _colors[4];
}

+ (id)nodeWithColor:(id)arg1;
+ (id)nodeWithColor:(id)arg1 width:(float)arg2 height:(float)arg3;
- (void)draw:(id)arg1 transform:(const union _GLKMatrix4 *)arg2;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithColor:(id)arg1 width:(float)arg2 height:(float)arg3;
- (void)setColor:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)updateColor;

// Remaining properties
@property(retain, nonatomic) CCBlendMode *blendMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CCRenderState *renderState;
@property(retain, nonatomic) CCShader *shader;
@property(readonly, nonatomic) NSMutableDictionary *shaderUniforms;
@property(readonly) Class superclass;

@end

