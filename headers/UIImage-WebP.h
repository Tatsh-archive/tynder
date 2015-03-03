//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (WebP)
+ (id)convertToWebP:(id)arg1 quality:(float)arg2 alpha:(float)arg3 preset:(int)arg4 configBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;
+ (id)imageToWebP:(id)arg1 quality:(float)arg2;
+ (void)imageToWebP:(id)arg1 quality:(float)arg2 alpha:(float)arg3 preset:(int)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
+ (void)imageToWebP:(id)arg1 quality:(float)arg2 alpha:(float)arg3 preset:(int)arg4 configBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)imageWithWebP:(id)arg1;
+ (void)imageWithWebP:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)imageWithWebP:(id)arg1 error:(id *)arg2;
+ (id)imageWithWebPData:(id)arg1;
+ (id)imageWithWebPData:(id)arg1 error:(id *)arg2;
+ (id)statusForVP8Code:(int)arg1;
+ (id)version:(int)arg1;
+ (id)webPImage:(id)arg1 withAlpha:(float)arg2;
- (id)imageByApplyingAlpha:(float)arg1;
@end

