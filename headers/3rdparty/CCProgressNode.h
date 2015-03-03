//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCNode.h"

@class CCSprite;

@interface CCProgressNode : CCNode
{
    unsigned int _type;
    float _percentage;
    CCSprite *_sprite;
    int _vertexCount;
    struct CCVertex *_verts;
    struct CGPoint _midpoint;
    struct CGPoint _barChangeRate;
    BOOL _reverseDirection;
    BOOL _dirtyVertexData;
    BOOL _needsUpdateProgress;
}

+ (id)progressWithSprite:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint barChangeRate; // @synthesize barChangeRate=_barChangeRate;
- (id)color;
- (void)dealloc;
- (void)draw:(id)arg1 transform:(const union _GLKMatrix4 *)arg2;
- (void)freeVertexData;
- (id)init;
- (id)initWithSprite:(id)arg1;
@property(nonatomic) struct CGPoint midpoint; // @synthesize midpoint=_midpoint;
- (float)opacity;
@property(nonatomic) float percentage; // @synthesize percentage=_percentage;
@property(nonatomic) BOOL reverseDirection; // @synthesize reverseDirection=_reverseDirection;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)setColor:(id)arg1;
- (void)setOpacity:(float)arg1;
@property(retain, nonatomic) CCSprite *sprite; // @synthesize sprite=_sprite;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (union _GLKVector2)textureCoordFromAlphaPoint:(struct CGPoint)arg1;
- (void)updateBar;
- (void)updateColor;
- (void)updateProgress;
- (void)updateRadial;
- (union _GLKVector4)vertexFromAlphaPoint:(struct CGPoint)arg1;
- (void)visit:(id)arg1 parentTransform:(const union _GLKMatrix4 *)arg2;

@end
