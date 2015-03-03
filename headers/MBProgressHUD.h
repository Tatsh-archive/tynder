//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSString, NSTimer, UIColor, UIFont, UILabel;

@interface MBProgressHUD : UIView
{
    BOOL useAnimation;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    UILabel *label;
    UILabel *detailsLabel;
    BOOL isFinished;
    struct CGAffineTransform rotationTransform;
    BOOL square;
    BOOL dimBackground;
    BOOL taskInProgress;
    BOOL removeFromSuperViewOnHide;
    int animationType;
    id <MBProgressHUDDelegate> delegate;
    float opacity;
    UIColor *color;
    UIFont *labelFont;
    UIColor *labelColor;
    UIFont *detailsLabelFont;
    UIColor *detailsLabelColor;
    UIView *indicator;
    float xOffset;
    float yOffset;
    float margin;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    UIView *customView;
    NSDate *showStarted;
    int mode;
    NSString *labelText;
    NSString *detailsLabelText;
    float progress;
    UIColor *activityIndicatorColor;
    CDUnknownBlockType completionBlock;
    float _cornerRadius;
    struct CGSize minSize;
    struct CGSize size;
}

+ (id)HUDForView:(id)arg1;
+ (id)allHUDsForView:(id)arg1;
+ (unsigned int)hideAllHUDsForView:(id)arg1 animated:(BOOL)arg2;
+ (BOOL)hideHUDForView:(id)arg1 animated:(BOOL)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
@property(retain) UIColor *activityIndicatorColor; // @synthesize activityIndicatorColor;
- (void)animationFinished:(id)arg1 finished:(BOOL)arg2 context:(void *)arg3;
@property int animationType; // @synthesize animationType;
- (void)cleanUp;
@property(retain) UIColor *color; // @synthesize color;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
@property float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain) UIView *customView; // @synthesize customView;
- (void)dealloc;
@property __weak id <MBProgressHUDDelegate> delegate; // @synthesize delegate;
@property(retain) UIColor *detailsLabelColor; // @synthesize detailsLabelColor;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(copy) NSString *detailsLabelText; // @synthesize detailsLabelText;
- (void)didMoveToSuperview;
@property BOOL dimBackground; // @synthesize dimBackground;
- (void)done;
- (void)drawRect:(struct CGRect)arg1;
@property float graceTime; // @synthesize graceTime;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
- (void)handleGraceTimer:(id)arg1;
- (void)handleMinShowTimer:(id)arg1;
- (void)hide:(BOOL)arg1;
- (void)hide:(BOOL)arg1 afterDelay:(double)arg2;
- (void)hideDelayed:(id)arg1;
- (void)hideUsingAnimation:(BOOL)arg1;
@property(retain) UIView *indicator; // @synthesize indicator;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(getter=isSquare) BOOL square; // @synthesize square;
@property(retain) UIColor *labelColor; // @synthesize labelColor;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property(copy) NSString *labelText; // @synthesize labelText;
- (void)launchExecution;
- (void)layoutSubviews;
@property float margin; // @synthesize margin;
@property float minShowTime; // @synthesize minShowTime;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property struct CGSize minSize; // @synthesize minSize;
@property int mode; // @synthesize mode;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property float opacity; // @synthesize opacity;
@property float progress; // @synthesize progress;
- (void)registerForKVO;
- (void)registerForNotifications;
@property BOOL removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property BOOL taskInProgress; // @synthesize taskInProgress;
- (void)setTransformForCurrentOrientation:(BOOL)arg1;
@property float xOffset; // @synthesize xOffset;
@property float yOffset; // @synthesize yOffset;
- (void)setupLabels;
- (BOOL)shouldPerformOrientationTransform;
- (void)show:(BOOL)arg1;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(struct dispatch_queue_s *)arg3;
- (void)showAnimated:(BOOL)arg1 whileExecutingBlock:(CDUnknownBlockType)arg2 onQueue:(struct dispatch_queue_s *)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)showUsingAnimation:(BOOL)arg1;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(BOOL)arg4;
@property(readonly) struct CGSize size; // @synthesize size;
- (void)statusBarOrientationDidChange:(id)arg1;
- (void)unregisterFromKVO;
- (void)unregisterFromNotifications;
- (void)updateIndicators;
- (void)updateUIForKeypath:(id)arg1;

@end
