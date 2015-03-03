//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "CCDirectorDelegate.h"

@class CCAppDelegate, NSString;

@interface CCNavigationController : UINavigationController <CCDirectorDelegate>
{
    CCAppDelegate *_appDelegate;
    NSString *_screenOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CCAppDelegate *appDelegate; // @synthesize appDelegate=_appDelegate;
- (void)directorDidReshapeProjection:(id)arg1;
@property(retain, nonatomic) NSString *screenOrientation; // @synthesize screenOrientation=_screenOrientation;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (union _GLKMatrix4)updateProjection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

