//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNode.h"

#import "CCBlendProtocol.h"
#import "CCEffectProtocol.h"
#import "CCShaderProtocol.h"
#import "CCTextureProtocol.h"

@class CCBlendMode, CCEffect, CCEffectRenderer, CCRenderState, CCShader, CCSpriteFrame, CCTexture, NSMutableDictionary, NSString;

@interface CCSprite : CCNode <CCTextureProtocol, CCShaderProtocol, CCBlendProtocol, CCEffectProtocol>
{
    struct CCSpriteVertexes _verts;
    union _GLKVector2 _vertexCenter;
    union _GLKVector2 _vertexExtents;
    CCEffect *_effect;
    CCEffectRenderer *_effectRenderer;
    struct CGPoint _unflippedOffsetPositionFromCenter;
    BOOL _flipX;
    BOOL _flipY;
    BOOL _textureRectRotated;
    CCSpriteFrame *_spriteFrame;
    CCSpriteFrame *_normalMapSpriteFrame;
    struct CGPoint _offsetPosition;
    struct CGRect _textureRect;
}

+ (id)emptySprite;
+ (id)spriteWithCGImage:(struct CGImage *)arg1 key:(id)arg2;
+ (id)spriteWithFile:(id)arg1;
+ (id)spriteWithFile:(id)arg1 rect:(struct CGRect)arg2;
+ (id)spriteWithImageNamed:(id)arg1;
+ (id)spriteWithSpriteFrame:(id)arg1;
+ (id)spriteWithSpriteFrameName:(id)arg1;
+ (id)spriteWithTexture:(id)arg1;
+ (id)spriteWithTexture:(id)arg1 rect:(struct CGRect)arg2;
+ (struct CCSpriteTexCoordSet)textureCoordsForTexture:(id)arg1 withRect:(struct CGRect)arg2 rotated:(BOOL)arg3 xFlipped:(BOOL)arg4 yFlipped:(BOOL)arg5;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)draw:(id)arg1 transform:(const union _GLKMatrix4 *)arg2;
@property(retain, nonatomic) CCEffect *effect;
- (void)enqueueTriangles:(id)arg1 transform:(const union _GLKMatrix4 *)arg2;
@property(nonatomic) BOOL flipX;
@property(nonatomic) BOOL flipY;
- (id)init;
- (id)initWithCGImage:(struct CGImage *)arg1 key:(id)arg2;
- (id)initWithFile:(id)arg1;
- (id)initWithFile:(id)arg1 rect:(struct CGRect)arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithSpriteFrame:(id)arg1;
- (id)initWithSpriteFrameName:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 rect:(struct CGRect)arg2;
- (id)initWithTexture:(id)arg1 rect:(struct CGRect)arg2 rotated:(BOOL)arg3;
- (struct CGAffineTransform)nodeToTextureTransform;
@property(retain, nonatomic) CCSpriteFrame *normalMapSpriteFrame; // @synthesize normalMapSpriteFrame=_normalMapSpriteFrame;
@property(readonly, nonatomic) struct CGPoint offsetPosition; // @synthesize offsetPosition=_offsetPosition;
- (void)setColor:(id)arg1;
- (void)setColorRGBA:(id)arg1;
- (void)setOpacity:(float)arg1;
@property(retain, nonatomic) CCSpriteFrame *spriteFrame; // @synthesize spriteFrame=_spriteFrame;
- (void)setTextureRect:(struct CGRect)arg1;
- (void)setTextureRect:(struct CGRect)arg1 forTexture:(id)arg2 rotated:(BOOL)arg3 untrimmedSize:(struct CGSize)arg4;
- (void)setTextureRect:(struct CGRect)arg1 rotated:(BOOL)arg2 untrimmedSize:(struct CGSize)arg3;
@property(readonly, nonatomic) struct CGRect textureRect; // @synthesize textureRect=_textureRect;
@property(readonly, nonatomic) BOOL textureRectRotated; // @synthesize textureRectRotated=_textureRectRotated;
- (void)updateColor;
- (void)updateDisplayedColor:(struct _ccColor4F)arg1;
- (void)updateDisplayedOpacity:(float)arg1;
- (void)updateShaderUniformsFromEffect;
@property(readonly, nonatomic) const struct CCSpriteVertexes *vertexes;

// Remaining properties
@property(retain, nonatomic) CCBlendMode *blendMode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) CCRenderState *renderState;
@property(retain, nonatomic) CCShader *shader;
@property(readonly, nonatomic) NSMutableDictionary *shaderUniforms;
@property(readonly) Class superclass;
@property(retain, nonatomic) CCTexture *texture;

@end

