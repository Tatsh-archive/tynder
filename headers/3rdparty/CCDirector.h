//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CCActionManager, CCFPSLabel, CCGLView, CCRenderer, CCResponderManager, CCScene, CCScheduler, NSMutableArray, NSMutableDictionary, NSThread;

@interface CCDirector : UIViewController
{
    double _animationInterval;
    double _oldAnimationInterval;
    BOOL _displayStats;
    unsigned int _frames;
    unsigned int _totalFrames;
    double _secondsPerFrame;
    double _accumDt;
    double _frameRate;
    CCFPSLabel *_FPSLabel;
    CCFPSLabel *_SPFLabel;
    CCFPSLabel *_drawsLabel;
    BOOL _isPaused;
    BOOL _animating;
    CCScene *_runningScene;
    id _notificationNode;
    CCScene *_nextScene;
    BOOL _sendCleanupToScene;
    NSMutableArray *_scenesStack;
    struct timeval _lastUpdate;
    double _dt;
    BOOL _nextDeltaTimeZero;
    unsigned int _projection;
    struct CGSize _winSizeInPoints;
    struct CGSize _winSizeInPixels;
    CCScheduler *_scheduler;
    CCActionManager *_actionManager;
    CCActionManager *_actionManagerFixed;
    CCGLView *__view;
    CCRenderer *_renderer;
    union _GLKMatrix4 _projectionMatrix;
    id <CCDirectorDelegate> _delegate;
    NSThread *_runningThread;
    CCResponderManager *_responderManager;
    float _UIScaleFactor;
    NSMutableDictionary *_globalShaderUniforms;
    struct CGSize _designSize;
}

+ (id)alloc;
+ (Class)defaultDirector;
+ (void)resetSingleton;
+ (id)sharedDirector;
- (void).cxx_destruct;
@property(nonatomic) float UIScaleFactor; // @synthesize UIScaleFactor=_UIScaleFactor;
@property(retain, nonatomic) CCActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) CCActionManager *actionManagerFixed; // @synthesize actionManagerFixed=_actionManagerFixed;
@property(nonatomic) double animationInterval; // @synthesize animationInterval=_animationInterval;
- (void)calculateDeltaTime;
- (void)calculateMPF;
@property(nonatomic) float contentScaleFactor;
- (struct CGPoint)convertToGL:(struct CGPoint)arg1;
- (struct CGPoint)convertToUI:(struct CGPoint)arg1;
- (void)createStatsLabel;
- (void)dealloc;
@property(nonatomic) __weak id <CCDirectorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
@property(nonatomic) struct CGSize designSize; // @synthesize designSize=_designSize;
@property(nonatomic) BOOL displayStats; // @synthesize displayStats=_displayStats;
- (void)drawScene;
- (void)end;
@property(nonatomic) double fixedUpdateInterval;
- (float)flipY;
- (void)getFPSImageData:(char **)arg1 length:(unsigned int *)arg2 contentScale:(float *)arg3;
- (float)getZEye;
@property(readonly, nonatomic) NSMutableDictionary *globalShaderUniforms; // @synthesize globalShaderUniforms=_globalShaderUniforms;
- (id)init;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isNextDeltaTimeZero) BOOL nextDeltaTimeZero; // @synthesize nextDeltaTimeZero=_nextDeltaTimeZero;
@property(readonly, nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_isPaused;
@property(retain, nonatomic) id notificationNode; // @synthesize notificationNode=_notificationNode;
- (void)pause;
- (void)popScene;
- (void)popSceneWithTransition:(id)arg1;
- (void)popToRootScene;
- (void)popToRootSceneWithTransition:(id)arg1;
- (void)popToSceneStackLevel:(unsigned int)arg1;
- (void)presentScene:(id)arg1;
- (void)presentScene:(id)arg1 withTransition:(id)arg2;
@property(nonatomic) unsigned int projection;
@property(readonly, nonatomic) union _GLKMatrix4 projectionMatrix; // @synthesize projectionMatrix=_projectionMatrix;
- (void)purgeCachedData;
- (void)pushScene:(id)arg1;
- (void)pushScene:(id)arg1 withTransition:(id)arg2;
- (void)replaceScene:(id)arg1;
- (void)replaceScene:(id)arg1 withTransition:(id)arg2;
- (void)reshapeProjection:(struct CGSize)arg1;
@property(retain, nonatomic) CCResponderManager *responderManager; // @synthesize responderManager=_responderManager;
- (void)resume;
- (void)runWithScene:(id)arg1;
@property(readonly, nonatomic) CCScene *runningScene; // @synthesize runningScene=_runningScene;
@property(readonly, nonatomic) __weak NSThread *runningThread; // @synthesize runningThread=_runningThread;
@property(retain, nonatomic) CCScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) double secondsPerFrame; // @synthesize secondsPerFrame=_secondsPerFrame;
@property(readonly, nonatomic) BOOL sendCleanupToScene; // @synthesize sendCleanupToScene=_sendCleanupToScene;
- (void)setInterfaceOrientationDelegate:(id)arg1;
- (void)setNextScene;
- (void)setView:(id)arg1;
- (void)setViewport;
- (void)showStats;
- (void)startAnimation;
- (void)startTransition:(id)arg1;
- (void)stopAnimation;
@property(readonly, nonatomic) unsigned int totalFrames; // @synthesize totalFrames=_totalFrames;
- (id)updateGlobalShaderUniforms;
- (id)view;
- (struct CGSize)viewSize;
- (struct CGSize)viewSizeInPixels;
@property(readonly, nonatomic) struct CGRect viewportRect;

@end
