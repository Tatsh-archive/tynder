//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageFramebuffer;

@protocol GPUImageInput <NSObject>
- (BOOL)enabled;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(int)arg2;
- (int)nextAvailableTextureIndex;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (void)setInputFramebuffer:(GPUImageFramebuffer *)arg1 atIndex:(int)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(int)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(int)arg2;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)wantsMonochromeInput;
@end
