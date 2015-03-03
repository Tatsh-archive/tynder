//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCDirectorDelegate.h"
#import "TNDRDrawing.h"

@class CCDirectorIOS, CCGLView, CCScene, CCSprite, NSString, TNDRLineDrawGL, UIImageView, UIWindow;

@interface TNDRDrawOnViewGL : NSObject <CCDirectorDelegate, TNDRDrawing>
{
    CCDirectorIOS *_director;
    CCGLView *_glView;
    CCScene *_scene;
    CCSprite *_bg;
    CCSprite *_nextBg;
    UIWindow *_glWindow;
    UIWindow *_savedKeyWindow;
    BOOL _iosVersionAtLeast8;
    id _drawView;
    id _drawController;
    UIImageView *_imageView;
    TNDRLineDrawGL *_drawing;
}

+ (id)sharedDrawing;
- (void).cxx_destruct;
- (void)cleanupAllDrawingAndSprites;
- (id)composite;
- (id)compositeDrawing;
- (id)compositeUsingBackground:(id)arg1;
- (void)doneDrawing;
@property(retain, nonatomic) id drawController; // @synthesize drawController=_drawController;
@property(retain, nonatomic) id drawView; // @synthesize drawView=_drawView;
@property(retain, nonatomic) TNDRLineDrawGL *drawing; // @synthesize drawing=_drawing;
- (void)endDrawing;
- (void)eraseDrawing;
- (id)image:(id)arg1 onView:(id)arg2 delegate:(id)arg3;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)init;
- (void)nextBackground:(id)arg1;
- (void)pauseAnimation:(id)arg1;
- (id)previousColor;
- (void)replaceBackground:(id)arg1 animate:(BOOL)arg2;
- (void)resumeAnimation:(id)arg1;
- (void)setCurrentColor:(id)arg1;
- (void)startDrawing;
- (void)unDo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
