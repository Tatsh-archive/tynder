//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface CLSAnalyticsViewControllerTrackingController : NSObject
{
    BOOL _isTracking;
    id <CLSAnalyticsViewControllerTrackingDelegate> _delegate;
    NSMutableSet *_blackListViewControllerClasses;
}

+ (BOOL)replaceMethodImplementationForClass:(Class)arg1 selector:(SEL)arg2 withImplementation:(CDUnknownFunctionPointerType)arg3 storingOldImplementation:(CDUnknownFunctionPointerType *)arg4;
+ (id)sharedInstance;
- (void)addBlackListViewControllerClass:(Class)arg1;
- (void)cleanUpUIViewControllerSwizzle;
- (void)dealloc;
@property(nonatomic) __weak id <CLSAnalyticsViewControllerTrackingDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (BOOL)isBlacklistedViewControllerClass:(Class)arg1;
- (void)removeBlackListViewControllerClass:(Class)arg1;
- (void)setUpUIViewControllerSwizzle;
- (BOOL)shouldLogViewController:(id)arg1;
- (void)startTracking;

@end
