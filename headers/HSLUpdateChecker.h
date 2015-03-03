//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface HSLUpdateChecker : NSObject <UIAlertViewDelegate>
{
    NSString *_updateUrl;
}

+ (void)checkForUpdate;
+ (void)checkForUpdateWithHandler:(CDUnknownBlockType)arg1;
+ (id)sharedUpdateChecker;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
@property(copy, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

