//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCSprite.h"

@class CCRenderTexture;

@interface CCRenderTextureSprite : CCSprite
{
    CCRenderTexture *_renderTexture;
}

- (void).cxx_destruct;
- (struct CGAffineTransform)nodeToWorldTransform;
- (id)renderState;
@property(nonatomic) __weak CCRenderTexture *renderTexture; // @synthesize renderTexture=_renderTexture;

@end

