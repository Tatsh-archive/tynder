//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, TNDRReportAnimationController;

@interface TNDRReportTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>
{
    TNDRReportAnimationController *_animationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TNDRReportAnimationController *animationController; // @synthesize animationController=_animationController;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

