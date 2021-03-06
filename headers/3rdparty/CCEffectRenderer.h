//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CCEffectRenderer : NSObject
{
    float _contentScale;
    NSMutableArray *_allRenderTargets;
    NSMutableArray *_freeRenderTargets;
    int _oldFBO;
    struct CGSize _contentSize;
    union _GLKVector4 _oldViewport;
}

+ (id)sharedCopyShader;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allRenderTargets; // @synthesize allRenderTargets=_allRenderTargets;
- (void)bindRenderTarget:(id)arg1 withRenderer:(id)arg2;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)dealloc;
- (void)destroyAllRenderTargets;
- (void)drawSprite:(id)arg1 withEffect:(id)arg2 uniforms:(id)arg3 renderer:(id)arg4 transform:(const union _GLKMatrix4 *)arg5;
- (void)freeAllRenderTargets;
- (void)freeRenderTarget:(id)arg1;
@property(retain, nonatomic) NSMutableArray *freeRenderTargets; // @synthesize freeRenderTargets=_freeRenderTargets;
- (id)init;
@property(nonatomic) int oldFBO; // @synthesize oldFBO=_oldFBO;
@property(nonatomic) union _GLKVector4 oldViewport; // @synthesize oldViewport=_oldViewport;
- (id)renderTargetWithSize:(struct CGSize)arg1;
- (void)restoreRenderTargetWithRenderer:(id)arg1;

@end

