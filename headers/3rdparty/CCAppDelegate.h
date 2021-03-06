//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCDirectorDelegate.h"
#import "UIApplicationDelegate.h"

@class CCNavigationController, NSString, UIWindow;

@interface CCAppDelegate : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
    UIWindow *window_;
    CCNavigationController *navController_;
}

- (void).cxx_destruct;
- (unsigned int)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
@property(readonly) CCNavigationController *navController; // @synthesize navController=navController_;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=window_;
- (void)setupCocos2dWithOptions:(id)arg1;
- (id)startScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

