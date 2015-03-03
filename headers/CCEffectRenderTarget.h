//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCTexture;

@interface CCEffectRenderTarget : NSObject
{
    BOOL _glResourcesAllocated;
    CCTexture *_texture;
    unsigned int _FBO;
    unsigned int _depthRenderBuffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int FBO; // @synthesize FBO=_FBO;
- (void)dealloc;
@property(readonly, nonatomic) unsigned int depthRenderBuffer; // @synthesize depthRenderBuffer=_depthRenderBuffer;
- (void)destroyGLResources;
@property(readonly, nonatomic) BOOL glResourcesAllocated; // @synthesize glResourcesAllocated=_glResourcesAllocated;
- (id)init;
- (BOOL)setupGLResourcesWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) CCTexture *texture; // @synthesize texture=_texture;

@end

