//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CCTextureCache : NSObject
{
    NSMutableDictionary *_textures;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_dictQueue;
}

+ (id)alloc;
+ (void)purgeSharedTextureCache;
+ (id)sharedTextureCache;
- (void).cxx_destruct;
- (id)addCGImage:(struct CGImage *)arg1 forKey:(id)arg2;
- (id)addImage:(id)arg1;
- (void)addImageAsync:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)addImageAsync:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)addPVRImage:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)dumpCachedTextureInfo;
- (id)init;
- (void)removeAllTextures;
- (void)removeTexture:(id)arg1;
- (void)removeTextureForKey:(id)arg1;
- (void)removeUnusedTextures;
- (id)textureForKey:(id)arg1;

@end

